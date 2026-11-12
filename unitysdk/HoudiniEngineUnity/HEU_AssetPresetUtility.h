#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_ASSETPRESETUTILITY_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA4F5D0)
#define HOUDINIENGINEUNITY_HEU_ASSETPRESETUTILITY_LOADPRESETFILEINTOASSETANDCOOK_OFFSET UNITYSDK_OFFSET(0x1CA4EF90)
#define HOUDINIENGINEUNITY_HEU_ASSETPRESETUTILITY_SAVEASSETPRESETTOFILE_OFFSET UNITYSDK_OFFSET(0x1CA4EAC0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AssetPresetUtility_TypeDefinitionIndex = 41347;

	class HEU_AssetPresetUtility : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_PRESET_IDENTIFIER()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("HoudiniEngineUnity", "HEU_AssetPresetUtility")->GetStaticField(0x5D830);
		}

		static ::System::Int32* StaticGet_PRESET_VERSION()
		{
			return (::System::Int32*)UnitySDK::FromName("HoudiniEngineUnity", "HEU_AssetPresetUtility")->GetStaticField(0x13D20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETPRESETUTILITY_CCTOR_OFFSET))();
		}

		static ::System::Void SaveAssetPresetToFile(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETPRESETUTILITY_SAVEASSETPRESETTOFILE_OFFSET))(a1, a2);
		}

		static ::System::Void LoadPresetFileIntoAssetAndCook(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETPRESETUTILITY_LOADPRESETFILEINTOASSETANDCOOK_OFFSET))(a1, a2);
		}

	};
}
