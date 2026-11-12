#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchUnstageTarget; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETFETCHUNSTAGETARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE16370)
#define RPG_GAMECORE_TARGETFETCHUNSTAGETARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EE16450)
#define RPG_GAMECORE_TARGETFETCHUNSTAGETARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EE16420)
#define RPG_GAMECORE_TARGETFETCHUNSTAGETARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE16380)
#define RPG_GAMECORE_TARGETFETCHUNSTAGETARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE162C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchUnstageTarget_TypeDefinitionIndex = 24430;

	class TargetFetchUnstageTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::String* ReasonKey; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNSTAGETARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchUnstageTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchUnstageTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNSTAGETARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchUnstageTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchUnstageTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNSTAGETARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchUnstageTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchUnstageTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNSTAGETARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchUnstageTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchUnstageTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNSTAGETARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
