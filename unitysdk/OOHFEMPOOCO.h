#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class OOHFEMPOOCO;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define OOHFEMPOOCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D27C550)
#define OOHFEMPOOCO_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D27C770)
#define OOHFEMPOOCO_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D27C740)
#define OOHFEMPOOCO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D27C560)
#define OOHFEMPOOCO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D27C520)

inline static constexpr unsigned int OOHFEMPOOCO_TypeDefinitionIndex = 24236;

	class OOHFEMPOOCO : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* IBHNJCENMPL; // 0x20
		::System::Int32 NALMBOOCCIN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFEMPOOCO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OOHFEMPOOCO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OOHFEMPOOCO*))((::PBYTE)hIl2Cpp + OOHFEMPOOCO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OOHFEMPOOCO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OOHFEMPOOCO*))((::PBYTE)hIl2Cpp + OOHFEMPOOCO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::OOHFEMPOOCO* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::OOHFEMPOOCO*))((::PBYTE)hIl2Cpp + OOHFEMPOOCO_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::OOHFEMPOOCO* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::OOHFEMPOOCO*))((::PBYTE)hIl2Cpp + OOHFEMPOOCO_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
