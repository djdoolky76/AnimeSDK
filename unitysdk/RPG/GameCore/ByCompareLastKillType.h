#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareLastKillType; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARELASTKILLTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D48CA30)
#define RPG_GAMECORE_BYCOMPARELASTKILLTYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D48CBF0)
#define RPG_GAMECORE_BYCOMPARELASTKILLTYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D48CBC0)
#define RPG_GAMECORE_BYCOMPARELASTKILLTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D48CA40)
#define RPG_GAMECORE_BYCOMPARELASTKILLTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D48CA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareLastKillType_TypeDefinitionIndex = 23502;

	class ByCompareLastKillType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::SkillType SkillType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareLastKillType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareLastKillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareLastKillType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareLastKillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLastKillType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLastKillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLTYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLastKillType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLastKillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLTYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
