#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraAbilityBase; }
namespace RPG::GameCore { class ChimeraAbilityList; }

#define RPG_GAMECORE_CHIMERAABILITYLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D597810)
#define RPG_GAMECORE_CHIMERAABILITYLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5976C0)

namespace RPG::GameCore
{
	class ChimeraAbilityList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 DisplayID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::ChimeraAbilityBase*>* Abilities; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraAbilityList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraAbilityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
