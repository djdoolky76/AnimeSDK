#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SummonUnitInteractionDestroyRule; }

#define RPG_GAMECORE_SUMMONUNITINTERACTIONDESTROYRULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3E970)
#define RPG_GAMECORE_SUMMONUNITINTERACTIONDESTROYRULE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3E760)

namespace RPG::GameCore
{
	class SummonUnitInteractionDestroyRule : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropType>* PropTypes; // 0x10
		::Il2CppArray<::System::UInt32>* IDList; // 0x18
		::System::Boolean Destroy; // 0x20
		::System::Boolean Immediately; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITINTERACTIONDESTROYRULE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SummonUnitInteractionDestroyRule* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SummonUnitInteractionDestroyRule*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITINTERACTIONDESTROYRULE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
