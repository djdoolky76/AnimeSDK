#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckAdvModifierCallBackName; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKNAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D48C180)
#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKNAME_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D48C340)
#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKNAME_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D48C310)
#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKNAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D48C190)
#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKNAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D48C150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckAdvModifierCallBackName_TypeDefinitionIndex = 21818;

	class ByCheckAdvModifierCallBackName : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* ModifierName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKNAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckAdvModifierCallBackName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKNAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckAdvModifierCallBackName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKNAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckAdvModifierCallBackName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKNAME_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckAdvModifierCallBackName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKNAME_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
