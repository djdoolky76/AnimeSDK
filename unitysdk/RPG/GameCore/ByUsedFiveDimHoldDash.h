#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByUsedFiveDimHoldDash; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYUSEDFIVEDIMHOLDDASH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D515280)
#define RPG_GAMECORE_BYUSEDFIVEDIMHOLDDASH_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D515400)
#define RPG_GAMECORE_BYUSEDFIVEDIMHOLDDASH_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D5153D0)
#define RPG_GAMECORE_BYUSEDFIVEDIMHOLDDASH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D515290)
#define RPG_GAMECORE_BYUSEDFIVEDIMHOLDDASH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D515250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByUsedFiveDimHoldDash_TypeDefinitionIndex = 21431;

	class ByUsedFiveDimHoldDash : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYUSEDFIVEDIMHOLDDASH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByUsedFiveDimHoldDash* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByUsedFiveDimHoldDash*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYUSEDFIVEDIMHOLDDASH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByUsedFiveDimHoldDash* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByUsedFiveDimHoldDash*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYUSEDFIVEDIMHOLDDASH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByUsedFiveDimHoldDash* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByUsedFiveDimHoldDash*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYUSEDFIVEDIMHOLDDASH_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByUsedFiveDimHoldDash* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByUsedFiveDimHoldDash*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYUSEDFIVEDIMHOLDDASH_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
