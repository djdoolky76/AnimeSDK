#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VE_FactorGroup; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_VE_FACTORGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC807A0)
#define RPG_GAMECORE_VE_FACTORGROUP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC809A0)
#define RPG_GAMECORE_VE_FACTORGROUP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC80970)
#define RPG_GAMECORE_VE_FACTORGROUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC807B0)
#define RPG_GAMECORE_VE_FACTORGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC80770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_FactorGroup_TypeDefinitionIndex = 24046;

	class VE_FactorGroup : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::System::String* GroupName; // 0x20
		::System::String* ParamString; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_FACTORGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_FactorGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_FactorGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_FACTORGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_FactorGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_FactorGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_FACTORGROUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_FactorGroup* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_FactorGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_FACTORGROUP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_FactorGroup* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_FactorGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_FACTORGROUP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
