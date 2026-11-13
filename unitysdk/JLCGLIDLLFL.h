#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class JLCGLIDLLFL;
namespace SimpleJSON { class JSONNode; }

#define JLCGLIDLLFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BF850)
#define JLCGLIDLLFL_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E5BF9D0)
#define JLCGLIDLLFL_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E5BF9A0)
#define JLCGLIDLLFL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E5BF860)
#define JLCGLIDLLFL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E5BF820)

inline static constexpr unsigned int JLCGLIDLLFL_TypeDefinitionIndex = 10213;

	class JLCGLIDLLFL : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCGLIDLLFL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JLCGLIDLLFL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JLCGLIDLLFL*))((::PBYTE)hIl2Cpp + JLCGLIDLLFL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JLCGLIDLLFL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JLCGLIDLLFL*))((::PBYTE)hIl2Cpp + JLCGLIDLLFL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::JLCGLIDLLFL* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::JLCGLIDLLFL*))((::PBYTE)hIl2Cpp + JLCGLIDLLFL_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::JLCGLIDLLFL* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::JLCGLIDLLFL*))((::PBYTE)hIl2Cpp + JLCGLIDLLFL_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
