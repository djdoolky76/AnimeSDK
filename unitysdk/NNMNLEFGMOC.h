#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardCasterSource.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class NNMNLEFGMOC;
namespace SimpleJSON { class JSONNode; }

#define NNMNLEFGMOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D23C680)
#define NNMNLEFGMOC_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D23C870)
#define NNMNLEFGMOC_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D23C840)
#define NNMNLEFGMOC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D23C690)
#define NNMNLEFGMOC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D23C650)

inline static constexpr unsigned int NNMNLEFGMOC_TypeDefinitionIndex = 19909;

	class NNMNLEFGMOC : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::FateRinCardCasterSource JHBCCLOFBEN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNMNLEFGMOC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NNMNLEFGMOC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NNMNLEFGMOC*))((::PBYTE)hIl2Cpp + NNMNLEFGMOC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NNMNLEFGMOC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NNMNLEFGMOC*))((::PBYTE)hIl2Cpp + NNMNLEFGMOC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::NNMNLEFGMOC* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::NNMNLEFGMOC*))((::PBYTE)hIl2Cpp + NNMNLEFGMOC_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::NNMNLEFGMOC* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::NNMNLEFGMOC*))((::PBYTE)hIl2Cpp + NNMNLEFGMOC_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
