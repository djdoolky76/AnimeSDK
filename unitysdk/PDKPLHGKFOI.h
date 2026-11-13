#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class PDKPLHGKFOI;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define PDKPLHGKFOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E70E420)
#define PDKPLHGKFOI_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E70E730)
#define PDKPLHGKFOI_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E70E6D0)
#define PDKPLHGKFOI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E70E460)
#define PDKPLHGKFOI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E70E3C0)

inline static constexpr unsigned int PDKPLHGKFOI_TypeDefinitionIndex = 24560;

	class PDKPLHGKFOI : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* DPICNGBHFAC; // 0x20
		::RPG::GameCore::TargetEvaluator* AAHOJJJPFLD; // 0x28
		::RPG::GameCore::TargetEvaluator* MKMCENPANNO; // 0x30
		::RPG::GameCore::CompareType EHCHAPPGJDJ; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKPLHGKFOI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PDKPLHGKFOI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PDKPLHGKFOI*))((::PBYTE)hIl2Cpp + PDKPLHGKFOI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PDKPLHGKFOI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PDKPLHGKFOI*))((::PBYTE)hIl2Cpp + PDKPLHGKFOI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::PDKPLHGKFOI* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::PDKPLHGKFOI*))((::PBYTE)hIl2Cpp + PDKPLHGKFOI_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::PDKPLHGKFOI* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::PDKPLHGKFOI*))((::PBYTE)hIl2Cpp + PDKPLHGKFOI_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
