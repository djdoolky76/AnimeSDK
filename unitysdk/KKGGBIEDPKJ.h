#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationEchoPointRemoveType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class KKGGBIEDPKJ;
namespace SimpleJSON { class JSONNode; }

#define KKGGBIEDPKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E28FEE0)
#define KKGGBIEDPKJ_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E2900D0)
#define KKGGBIEDPKJ_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E2900A0)
#define KKGGBIEDPKJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E28FEF0)
#define KKGGBIEDPKJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E28FEB0)

inline static constexpr unsigned int KKGGBIEDPKJ_TypeDefinitionIndex = 23209;

	class KKGGBIEDPKJ : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ElationEchoPointRemoveType GMPGDEINODK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKGGBIEDPKJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KKGGBIEDPKJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KKGGBIEDPKJ*))((::PBYTE)hIl2Cpp + KKGGBIEDPKJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KKGGBIEDPKJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KKGGBIEDPKJ*))((::PBYTE)hIl2Cpp + KKGGBIEDPKJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::KKGGBIEDPKJ* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::KKGGBIEDPKJ*))((::PBYTE)hIl2Cpp + KKGGBIEDPKJ_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::KKGGBIEDPKJ* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::KKGGBIEDPKJ*))((::PBYTE)hIl2Cpp + KKGGBIEDPKJ_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
