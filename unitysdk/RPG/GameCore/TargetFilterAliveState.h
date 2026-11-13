#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFilterAliveState; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFILTERALIVESTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x206F1650)
#define RPG_GAMECORE_TARGETFILTERALIVESTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x206F1730)
#define RPG_GAMECORE_TARGETFILTERALIVESTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x206F1700)
#define RPG_GAMECORE_TARGETFILTERALIVESTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x206F1660)
#define RPG_GAMECORE_TARGETFILTERALIVESTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x206F1620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFilterAliveState_TypeDefinitionIndex = 24362;

	class TargetFilterAliveState : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::AliveStateMask Mask; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERALIVESTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFilterAliveState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFilterAliveState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERALIVESTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFilterAliveState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFilterAliveState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERALIVESTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilterAliveState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilterAliveState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERALIVESTATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilterAliveState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilterAliveState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERALIVESTATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
