#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PuppySearchPropData; }
namespace RPG::GameCore { class SpecialVisionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPECIALVISIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD39D0)
#define RPG_GAMECORE_SPECIALVISIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD3660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialVisionConfig_TypeDefinitionIndex = 17589;

	class SpecialVisionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* SpecialVisionTypeEffectMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* SpecialVisionCameraEffectMap; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* SpecialVisionOnSoundEventMap; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* SpecialVisionOffSoundEventMap; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* SpecialVisionStopSoundEventMap; // 0x30
		::System::String* SpecialVisionOnEvent; // 0x38
		::System::String* SpecialVisionCloseEvent; // 0x40
		::System::String* UIClickSpecialVisionOnEvent; // 0x48
		::RPG::GameCore::PuppySearchPropData* PuppySearchPropConfig; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALVISIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpecialVisionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpecialVisionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALVISIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
