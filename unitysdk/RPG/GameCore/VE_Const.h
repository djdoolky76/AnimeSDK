#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VE_Const; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_CONST_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED3DBC0)
#define RPG_GAMECORE_VE_CONST_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1ED3DDC0)
#define RPG_GAMECORE_VE_CONST_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1ED3DD90)
#define RPG_GAMECORE_VE_CONST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ED3DBD0)
#define RPG_GAMECORE_VE_CONST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ED3DB90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_Const_TypeDefinitionIndex = 24499;

	class VE_Const : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::FixPoint Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CONST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_Const* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_Const*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CONST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_Const* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_Const*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CONST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Const* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Const*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CONST_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Const* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Const*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CONST_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
