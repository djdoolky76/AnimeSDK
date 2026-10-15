#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByAnimStateLogicType; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYANIMSTATELOGICTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D455D90)
#define RPG_GAMECORE_BYANIMSTATELOGICTYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D456000)
#define RPG_GAMECORE_BYANIMSTATELOGICTYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D455FA0)
#define RPG_GAMECORE_BYANIMSTATELOGICTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D455DD0)
#define RPG_GAMECORE_BYANIMSTATELOGICTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D455D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAnimStateLogicType_TypeDefinitionIndex = 22422;

	class ByAnimStateLogicType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AnimStateLogicType AnimState; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMSTATELOGICTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAnimStateLogicType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAnimStateLogicType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMSTATELOGICTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAnimStateLogicType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAnimStateLogicType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMSTATELOGICTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnimStateLogicType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnimStateLogicType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMSTATELOGICTYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnimStateLogicType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnimStateLogicType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMSTATELOGICTYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
