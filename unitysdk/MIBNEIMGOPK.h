#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class MIBNEIMGOPK;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define MIBNEIMGOPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1B0480)
#define MIBNEIMGOPK_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D1B0790)
#define MIBNEIMGOPK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D1B0730)
#define MIBNEIMGOPK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1B04C0)
#define MIBNEIMGOPK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1B0420)

inline static constexpr unsigned int MIBNEIMGOPK_TypeDefinitionIndex = 24154;

	class MIBNEIMGOPK : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* DPICNGBHFAC; // 0x20
		::RPG::GameCore::TargetEvaluator* MKMCENPANNO; // 0x28
		::RPG::GameCore::TargetEvaluator* AAHOJJJPFLD; // 0x30
		::RPG::GameCore::CompareType EHCHAPPGJDJ; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBNEIMGOPK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MIBNEIMGOPK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MIBNEIMGOPK*))((::PBYTE)hIl2Cpp + MIBNEIMGOPK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MIBNEIMGOPK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MIBNEIMGOPK*))((::PBYTE)hIl2Cpp + MIBNEIMGOPK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::MIBNEIMGOPK* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MIBNEIMGOPK*))((::PBYTE)hIl2Cpp + MIBNEIMGOPK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::MIBNEIMGOPK* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MIBNEIMGOPK*))((::PBYTE)hIl2Cpp + MIBNEIMGOPK_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
