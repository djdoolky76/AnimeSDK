#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class CBJMIBEHHND;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CBJMIBEHHND_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBCE6D0)
#define CBJMIBEHHND_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EBCE9A0)
#define CBJMIBEHHND_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EBCE960)
#define CBJMIBEHHND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EBCE6E0)
#define CBJMIBEHHND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBCE690)

inline static constexpr unsigned int CBJMIBEHHND_TypeDefinitionIndex = 23440;

	class CBJMIBEHHND : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::Boolean FDLNJFIELFJ; // 0x28
		::System::Boolean JDDOFLBEPDN; // 0x29
		::System::Byte _padding0[0x2];
		::RPG::GameCore::MonsterRank OPCDDCDONFE; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJMIBEHHND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CBJMIBEHHND* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CBJMIBEHHND*))((::PBYTE)hIl2Cpp + CBJMIBEHHND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CBJMIBEHHND* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CBJMIBEHHND*))((::PBYTE)hIl2Cpp + CBJMIBEHHND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::CBJMIBEHHND* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::CBJMIBEHHND*))((::PBYTE)hIl2Cpp + CBJMIBEHHND_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::CBJMIBEHHND* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::CBJMIBEHHND*))((::PBYTE)hIl2Cpp + CBJMIBEHHND_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
