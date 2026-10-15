#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class HKOACDGAJNO;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define HKOACDGAJNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEBD9B0)
#define HKOACDGAJNO_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CEBDBB0)
#define HKOACDGAJNO_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CEBDB80)
#define HKOACDGAJNO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CEBD9C0)
#define HKOACDGAJNO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEBD980)

inline static constexpr unsigned int HKOACDGAJNO_TypeDefinitionIndex = 22563;

	class HKOACDGAJNO : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::String* FHLJGDGMMHK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOACDGAJNO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HKOACDGAJNO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HKOACDGAJNO*))((::PBYTE)hIl2Cpp + HKOACDGAJNO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HKOACDGAJNO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HKOACDGAJNO*))((::PBYTE)hIl2Cpp + HKOACDGAJNO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::HKOACDGAJNO* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::HKOACDGAJNO*))((::PBYTE)hIl2Cpp + HKOACDGAJNO_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::HKOACDGAJNO* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::HKOACDGAJNO*))((::PBYTE)hIl2Cpp + HKOACDGAJNO_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
