#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PetPartyInteractionCategoryConfig; }
namespace RPG::GameCore { class PetPartyInteractionConfig; }
namespace RPG::GameCore { class PetPartySummonUnitTagMapping; }
namespace System { class String; }

#define RPG_GAMECORE_PETPARTYINTERACTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D909EC0)
#define RPG_GAMECORE_PETPARTYINTERACTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D909CC0)

namespace RPG::GameCore
{
	class PetPartyInteractionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PetPartySummonUnitTagMapping*>* SummonUnitTagMappings; // 0x10
		::Il2CppArray<::System::String*>* IdleShowNames; // 0x18
		::System::Single PublicCooldownSeconds; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::PetPartyInteractionCategoryConfig*>* Categories; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYINTERACTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetPartyInteractionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetPartyInteractionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYINTERACTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
