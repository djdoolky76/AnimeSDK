#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelDitherOutNode; }

#define RPG_GAMECORE_CHIMERADUELDITHEROUTNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59E9E0)
#define RPG_GAMECORE_CHIMERADUELDITHEROUTNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D59E9F0)
#define RPG_GAMECORE_CHIMERADUELDITHEROUTNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59E990)

namespace RPG::GameCore
{
	class ChimeraDuelDitherOutNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* TargetSelector; // 0x10
		::System::Single DitherTime; // 0x18
		::System::Boolean IsDestroy; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELDITHEROUTNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelDitherOutNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelDitherOutNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELDITHEROUTNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelDitherOutNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelDitherOutNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELDITHEROUTNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
