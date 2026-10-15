#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFilterAliveState; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFILTERALIVESTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB399B0)
#define RPG_GAMECORE_TARGETFILTERALIVESTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB39A90)
#define RPG_GAMECORE_TARGETFILTERALIVESTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB39A60)
#define RPG_GAMECORE_TARGETFILTERALIVESTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB399C0)
#define RPG_GAMECORE_TARGETFILTERALIVESTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB39980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFilterAliveState_TypeDefinitionIndex = 23904;

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
