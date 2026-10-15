#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtByHasLockTarget; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYHASLOCKTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA52E90)
#define RPG_GAMECORE_RTBYHASLOCKTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA53050)
#define RPG_GAMECORE_RTBYHASLOCKTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA53020)
#define RPG_GAMECORE_RTBYHASLOCKTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA52EA0)
#define RPG_GAMECORE_RTBYHASLOCKTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA52E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByHasLockTarget_TypeDefinitionIndex = 24233;

	class RtByHasLockTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASLOCKTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtByHasLockTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtByHasLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASLOCKTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtByHasLockTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtByHasLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASLOCKTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByHasLockTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByHasLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASLOCKTARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByHasLockTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByHasLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASLOCKTARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
