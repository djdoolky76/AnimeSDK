#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelNode; }

#define RPG_GAMECORE_BASECHIMERADUELNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D43C9C0)
#define RPG_GAMECORE_BASECHIMERADUELNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D43C960)
#define RPG_GAMECORE_BASECHIMERADUELNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D43C900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseChimeraDuelNode_TypeDefinitionIndex = 15945;

	class BaseChimeraDuelNode : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseChimeraDuelNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseChimeraDuelNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseChimeraDuelNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseChimeraDuelNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
