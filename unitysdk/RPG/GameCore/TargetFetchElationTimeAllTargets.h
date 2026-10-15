#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchElationTimeAllTargets; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHELATIONTIMEALLTARGETS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB621D0)
#define RPG_GAMECORE_TARGETFETCHELATIONTIMEALLTARGETS_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB62260)
#define RPG_GAMECORE_TARGETFETCHELATIONTIMEALLTARGETS_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB62240)
#define RPG_GAMECORE_TARGETFETCHELATIONTIMEALLTARGETS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB621E0)
#define RPG_GAMECORE_TARGETFETCHELATIONTIMEALLTARGETS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB62160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchElationTimeAllTargets_TypeDefinitionIndex = 23940;

	class TargetFetchElationTimeAllTargets : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHELATIONTIMEALLTARGETS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchElationTimeAllTargets* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchElationTimeAllTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHELATIONTIMEALLTARGETS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchElationTimeAllTargets* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchElationTimeAllTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHELATIONTIMEALLTARGETS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchElationTimeAllTargets* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchElationTimeAllTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHELATIONTIMEALLTARGETS_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchElationTimeAllTargets* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchElationTimeAllTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHELATIONTIMEALLTARGETS_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
