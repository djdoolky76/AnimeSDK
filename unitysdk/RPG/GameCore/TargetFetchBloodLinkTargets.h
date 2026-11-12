#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchBloodLinkTargets; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE0FD40)
#define RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EE0FE20)
#define RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EE0FDF0)
#define RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE0FD50)
#define RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE0FC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchBloodLinkTargets_TypeDefinitionIndex = 24393;

	class TargetFetchBloodLinkTargets : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::String* Name; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchBloodLinkTargets* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchBloodLinkTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchBloodLinkTargets* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchBloodLinkTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBloodLinkTargets* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBloodLinkTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBloodLinkTargets* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBloodLinkTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
