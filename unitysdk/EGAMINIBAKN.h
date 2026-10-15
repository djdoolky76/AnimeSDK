#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class EGAMINIBAKN;
class FCOEMCEDLNL;
namespace SimpleJSON { class JSONNode; }

#define EGAMINIBAKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD4C940)
#define EGAMINIBAKN_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CD4CAC0)
#define EGAMINIBAKN_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CD4CA90)
#define EGAMINIBAKN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD4C950)
#define EGAMINIBAKN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD4C910)

inline static constexpr unsigned int EGAMINIBAKN_TypeDefinitionIndex = 10209;

	class EGAMINIBAKN : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGAMINIBAKN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EGAMINIBAKN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EGAMINIBAKN*))((::PBYTE)hIl2Cpp + EGAMINIBAKN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EGAMINIBAKN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EGAMINIBAKN*))((::PBYTE)hIl2Cpp + EGAMINIBAKN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::EGAMINIBAKN* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::EGAMINIBAKN*))((::PBYTE)hIl2Cpp + EGAMINIBAKN_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::EGAMINIBAKN* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::EGAMINIBAKN*))((::PBYTE)hIl2Cpp + EGAMINIBAKN_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
