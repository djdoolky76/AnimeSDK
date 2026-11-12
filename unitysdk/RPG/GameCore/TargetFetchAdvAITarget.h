#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchAdvAITarget; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVAITARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE09D50)
#define RPG_GAMECORE_TARGETFETCHADVAITARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EE09DE0)
#define RPG_GAMECORE_TARGETFETCHADVAITARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EE09DC0)
#define RPG_GAMECORE_TARGETFETCHADVAITARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE09D60)
#define RPG_GAMECORE_TARGETFETCHADVAITARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE09CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvAITarget_TypeDefinitionIndex = 24375;

	class TargetFetchAdvAITarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVAITARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvAITarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvAITarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVAITARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvAITarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvAITarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVAITARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvAITarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvAITarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVAITARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvAITarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvAITarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVAITARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
