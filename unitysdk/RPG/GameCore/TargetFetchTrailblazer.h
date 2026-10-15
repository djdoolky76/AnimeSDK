#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchTrailblazer; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHTRAILBLAZER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB38E20)
#define RPG_GAMECORE_TARGETFETCHTRAILBLAZER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB38EB0)
#define RPG_GAMECORE_TARGETFETCHTRAILBLAZER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB38E90)
#define RPG_GAMECORE_TARGETFETCHTRAILBLAZER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB38E30)
#define RPG_GAMECORE_TARGETFETCHTRAILBLAZER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB38DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchTrailblazer_TypeDefinitionIndex = 23967;

	class TargetFetchTrailblazer : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTRAILBLAZER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchTrailblazer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchTrailblazer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTRAILBLAZER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchTrailblazer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchTrailblazer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTRAILBLAZER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTrailblazer* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTrailblazer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTRAILBLAZER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTrailblazer* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTrailblazer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTRAILBLAZER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
