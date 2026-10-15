#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class GPJONCPIEEI;
namespace RPG::Client { class TarotBookEnergyGotHint; }
namespace RPG::GameCore { class TarotBookEnergyRow; }

#define RPG_CLIENT_TAROTBOOKENERGYGOTHINT_CREATE_OFFSET UNITYSDK_OFFSET(0xE1A4A80)
#define RPG_CLIENT_TAROTBOOKENERGYGOTHINT_CTOR_OFFSET UNITYSDK_OFFSET(0xE1A4B40)
#define RPG_CLIENT_TAROTBOOKENERGYGOTHINT_GET_ENERGYCOUNT_OFFSET UNITYSDK_OFFSET(0xE1A4940)
#define RPG_CLIENT_TAROTBOOKENERGYGOTHINT_GET_HINT_OFFSET UNITYSDK_OFFSET(0xE1A4A10)
#define RPG_CLIENT_TAROTBOOKENERGYGOTHINT_GET_ISSHOWMOVEEFFECT_OFFSET UNITYSDK_OFFSET(0xE1A49B0)
#define RPG_CLIENT_TAROTBOOKENERGYGOTHINT_GET_ISSILENCE_OFFSET UNITYSDK_OFFSET(0xE1A4960)
#define RPG_CLIENT_TAROTBOOKENERGYGOTHINT_SET_ENERGYCOUNT_OFFSET UNITYSDK_OFFSET(0xE1A4950)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookEnergyGotHint_TypeDefinitionIndex = 68059;

	class TarotBookEnergyGotHint : public ::System::Object
	{
	public:
		::RPG::GameCore::TarotBookEnergyRow* _Meta; // 0x10
		::System::UInt32 _EnergyCount_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::GameCore::TarotBookEnergyRow* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TarotBookEnergyRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKENERGYGOTHINT_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_EnergyCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKENERGYGOTHINT_GET_ENERGYCOUNT_OFFSET))(this);
		}

		::System::Void set_EnergyCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKENERGYGOTHINT_SET_ENERGYCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSilence()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKENERGYGOTHINT_GET_ISSILENCE_OFFSET))(this);
		}

		::System::Boolean get_IsShowMoveEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKENERGYGOTHINT_GET_ISSHOWMOVEEFFECT_OFFSET))(this);
		}

		::RPG::Client::TextID get_Hint()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKENERGYGOTHINT_GET_HINT_OFFSET))(this);
		}

		static ::RPG::Client::TarotBookEnergyGotHint* Create(::GPJONCPIEEI* a1)
		{
			return ((::RPG::Client::TarotBookEnergyGotHint*(*)(::GPJONCPIEEI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKENERGYGOTHINT_CREATE_OFFSET))(a1);
		}

	};
}
