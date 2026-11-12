#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class AJBACDGLCMO;
class FCOEMCEDLNL;
namespace SimpleJSON { class JSONNode; }

#define AJBACDGLCMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE751E0)
#define AJBACDGLCMO_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DE75390)
#define AJBACDGLCMO_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DE75360)
#define AJBACDGLCMO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DE751F0)
#define AJBACDGLCMO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DE751B0)

inline static constexpr unsigned int AJBACDGLCMO_TypeDefinitionIndex = 20270;

	class AJBACDGLCMO : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MAJCBOFLAMP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJBACDGLCMO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AJBACDGLCMO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AJBACDGLCMO*))((::PBYTE)hIl2Cpp + AJBACDGLCMO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AJBACDGLCMO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AJBACDGLCMO*))((::PBYTE)hIl2Cpp + AJBACDGLCMO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::AJBACDGLCMO* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::AJBACDGLCMO*))((::PBYTE)hIl2Cpp + AJBACDGLCMO_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::AJBACDGLCMO* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::AJBACDGLCMO*))((::PBYTE)hIl2Cpp + AJBACDGLCMO_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
