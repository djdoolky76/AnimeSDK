#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PhotoGraphOverrideModeConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PHOTOGRAPHOVERRIDEMODECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D912130)
#define RPG_GAMECORE_PHOTOGRAPHOVERRIDEMODECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D911BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphOverrideModeConfig_TypeDefinitionIndex = 21637;

	class PhotoGraphOverrideModeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ExitWhenPreViewDialogFinish; // 0x10
		::System::Boolean SkipPhotoPreviewDialog; // 0x11
		::System::Byte _padding0[0x6];
		::RPG::GameCore::DynamicFloat* IdentifyRadiusOverride; // 0x18
		::System::Single IdentifyMaxExitDistance; // 0x20
		::System::Byte _padding1[0x4];
		::RPG::GameCore::TargetEvaluator* IdentifyLookAt; // 0x28
		::System::Single InitFov; // 0x30
		::System::Byte _padding2[0x4];
		::System::String* ToastTemplate; // 0x38
		::RPG::Client::TextID SuccessToastText; // 0x40
		::RPG::Client::TextID FailToastText; // 0x50
		::System::Boolean ShowFinishToastManually; // 0x60
		::System::Byte _padding3[0x3];
		::System::Single OverrideMaxFov; // 0x64
		::System::Single OverrideMinFov; // 0x68
		::System::Boolean IsSimpleConfig; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHOVERRIDEMODECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphOverrideModeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphOverrideModeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHOVERRIDEMODECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
