#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class GFKIPGPPFOB;
namespace SimpleJSON { class JSONNode; }

#define GFKIPGPPFOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE3CA00)
#define GFKIPGPPFOB_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CE3CB80)
#define GFKIPGPPFOB_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CE3CB50)
#define GFKIPGPPFOB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE3CA10)
#define GFKIPGPPFOB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE3C9D0)

inline static constexpr unsigned int GFKIPGPPFOB_TypeDefinitionIndex = 10210;

	class GFKIPGPPFOB : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKIPGPPFOB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GFKIPGPPFOB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GFKIPGPPFOB*))((::PBYTE)hIl2Cpp + GFKIPGPPFOB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GFKIPGPPFOB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GFKIPGPPFOB*))((::PBYTE)hIl2Cpp + GFKIPGPPFOB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::GFKIPGPPFOB* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::GFKIPGPPFOB*))((::PBYTE)hIl2Cpp + GFKIPGPPFOB_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::GFKIPGPPFOB* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::GFKIPGPPFOB*))((::PBYTE)hIl2Cpp + GFKIPGPPFOB_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
