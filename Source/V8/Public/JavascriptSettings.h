#pragma once

#include "JavascriptSettings.generated.h"


UCLASS(config = Engine, defaultconfig)
class V8_API UJavascriptSettings
	: public UObject
{
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY(EditAnywhere, config, Category = Javascript, meta = (
		ConsoleVariable = "unrealjs.v8flags", DisplayName = "V8 Flags",
		ToolTip = "V8 Flags. Please refer to V8 documentation"))
	FString V8Flags;

	UPROPERTY(EditAnywhere, config, Category = Javascript, meta = (
		ToolTip = "export ts project dir."))
	FString ExportTsDir;

	UPROPERTY(EditAnywhere, config, Category = Javascript, meta = (
		ConsoleVariable = "unrealjs.enableHotReload", DisplayName = "Enable HotReload",
		ToolTip = "hot reload when modified js file in scripts."))
	bool bEnableHotReload;

	UPROPERTY(EditAnywhere, config, Category = Javascript, meta = (
		ToolTip = "editor bootstrap auto export ts."))
	bool bAutoExportTs;

	UPROPERTY(EditAnywhere, config, Category = Javascript, meta = (
		ToolTip = "custom watch exec js project dir."))
	TArray<FString> WatchExecDirList;

	void Apply() const;
};
