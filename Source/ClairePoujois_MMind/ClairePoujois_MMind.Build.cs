// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ClairePoujois_MMind : ModuleRules
{
	public ClairePoujois_MMind(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
