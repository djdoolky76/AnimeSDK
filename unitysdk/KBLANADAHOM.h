#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGGPGICGHCL.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class KBLANADAHOM;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define KBLANADAHOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D034000)
#define KBLANADAHOM_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D0342A0)
#define KBLANADAHOM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D034260)
#define KBLANADAHOM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D034010)
#define KBLANADAHOM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D033FC0)

inline static constexpr unsigned int KBLANADAHOM_TypeDefinitionIndex = 19911;

	class KBLANADAHOM : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* EIBFMMJPOIG; // 0x20
		::RPG::GameCore::CompareType EHCHAPPGJDJ; // 0x28
		::HGGPGICGHCL MMNJODIJPOE; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLANADAHOM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KBLANADAHOM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KBLANADAHOM*))((::PBYTE)hIl2Cpp + KBLANADAHOM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KBLANADAHOM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KBLANADAHOM*))((::PBYTE)hIl2Cpp + KBLANADAHOM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::KBLANADAHOM* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::KBLANADAHOM*))((::PBYTE)hIl2Cpp + KBLANADAHOM_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::KBLANADAHOM* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::KBLANADAHOM*))((::PBYTE)hIl2Cpp + KBLANADAHOM_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
