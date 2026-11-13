#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchAdvLockTarget; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x206E5540)
#define RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x206E55F0)
#define RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x206E55B0)
#define RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x206E5550)
#define RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x206E54B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvLockTarget_TypeDefinitionIndex = 24374;

	class TargetFetchAdvLockTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvLockTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvLockTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLockTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLockTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
