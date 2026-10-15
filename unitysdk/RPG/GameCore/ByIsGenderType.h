#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsGenderType; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISGENDERTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D515A50)
#define RPG_GAMECORE_BYISGENDERTYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D515C10)
#define RPG_GAMECORE_BYISGENDERTYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D515BE0)
#define RPG_GAMECORE_BYISGENDERTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D515A60)
#define RPG_GAMECORE_BYISGENDERTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D515A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsGenderType_TypeDefinitionIndex = 20806;

	class ByIsGenderType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::GenderType Gender; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISGENDERTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsGenderType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsGenderType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISGENDERTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsGenderType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsGenderType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISGENDERTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsGenderType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsGenderType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISGENDERTYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsGenderType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsGenderType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISGENDERTYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
