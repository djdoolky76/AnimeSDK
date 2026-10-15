#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchNormalPam; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHNORMALPAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB63EF0)
#define RPG_GAMECORE_TARGETFETCHNORMALPAM_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB63FA0)
#define RPG_GAMECORE_TARGETFETCHNORMALPAM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB63F60)
#define RPG_GAMECORE_TARGETFETCHNORMALPAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB63F00)
#define RPG_GAMECORE_TARGETFETCHNORMALPAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB63E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchNormalPam_TypeDefinitionIndex = 23878;

	class TargetFetchNormalPam : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNORMALPAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchNormalPam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchNormalPam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNORMALPAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchNormalPam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchNormalPam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNORMALPAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNormalPam* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNormalPam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNORMALPAM_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNormalPam* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNormalPam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNORMALPAM_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
