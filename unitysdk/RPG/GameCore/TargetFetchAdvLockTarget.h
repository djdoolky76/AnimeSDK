#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchAdvLockTarget; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE0A7C0)
#define RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EE0A870)
#define RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EE0A830)
#define RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE0A7D0)
#define RPG_GAMECORE_TARGETFETCHADVLOCKTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE0A730)

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
