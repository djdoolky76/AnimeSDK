#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RefreshAllTutorialNode; }

#define RPG_GAMECORE_REFRESHALLTUTORIALNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F231EF0)
#define RPG_GAMECORE_REFRESHALLTUTORIALNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F231F00)
#define RPG_GAMECORE_REFRESHALLTUTORIALNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F231E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RefreshAllTutorialNode_TypeDefinitionIndex = 24790;

	class RefreshAllTutorialNode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHALLTUTORIALNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RefreshAllTutorialNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RefreshAllTutorialNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHALLTUTORIALNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RefreshAllTutorialNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RefreshAllTutorialNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHALLTUTORIALNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
