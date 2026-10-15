#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class SpecialAvatarRow; }

#define MAAJJELPJGK_CTOR_OFFSET UNITYSDK_OFFSET(0xB83D750)
#define MAAJJELPJGK_GET_ISPLAYERRETURN_OFFSET UNITYSDK_OFFSET(0xB83D730)
#define MAAJJELPJGK_GET_TRIALAVATARCONFIG_OFFSET UNITYSDK_OFFSET(0xB83D710)
#define MAAJJELPJGK_SET_ISPLAYERRETURN_OFFSET UNITYSDK_OFFSET(0xB83D740)
#define MAAJJELPJGK_SET_TRIALAVATARCONFIG_OFFSET UNITYSDK_OFFSET(0xB83D720)

inline static constexpr unsigned int MAAJJELPJGK_TypeDefinitionIndex = 62820;

	class MAAJJELPJGK : public ::System::Object
	{
	public:
		::RPG::GameCore::SpecialAvatarRow* _TrialAvatarConfig_k__BackingField; // 0x10
		::System::Boolean _IsPlayerReturn_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAAJJELPJGK_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::SpecialAvatarRow* get_TrialAvatarConfig()
		{
			return ((::RPG::GameCore::SpecialAvatarRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAAJJELPJGK_GET_TRIALAVATARCONFIG_OFFSET))(this);
		}

		::System::Void set_TrialAvatarConfig(::RPG::GameCore::SpecialAvatarRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + MAAJJELPJGK_SET_TRIALAVATARCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPlayerReturn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAAJJELPJGK_GET_ISPLAYERRETURN_OFFSET))(this);
		}

		::System::Void set_IsPlayerReturn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MAAJJELPJGK_SET_ISPLAYERRETURN_OFFSET))(this, a1);
		}

	};
