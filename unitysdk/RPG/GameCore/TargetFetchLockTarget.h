#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchLockTarget; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHLOCKTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB63490)
#define RPG_GAMECORE_TARGETFETCHLOCKTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB63520)
#define RPG_GAMECORE_TARGETFETCHLOCKTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB63500)
#define RPG_GAMECORE_TARGETFETCHLOCKTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB634A0)
#define RPG_GAMECORE_TARGETFETCHLOCKTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB63420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLockTarget_TypeDefinitionIndex = 23963;

	class TargetFetchLockTarget : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLOCKTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchLockTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLOCKTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchLockTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLOCKTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLockTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLOCKTARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLockTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLOCKTARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
