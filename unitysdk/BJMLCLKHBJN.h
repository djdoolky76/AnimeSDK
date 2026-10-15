#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/HPDetailParamType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class BJMLCLKHBJN;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define BJMLCLKHBJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D810370)
#define BJMLCLKHBJN_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D810730)
#define BJMLCLKHBJN_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D8106B0)
#define BJMLCLKHBJN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8103D0)
#define BJMLCLKHBJN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8102F0)

inline static constexpr unsigned int BJMLCLKHBJN_TypeDefinitionIndex = 22991;

	class BJMLCLKHBJN : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::RPG::GameCore::DynamicFloat* DPICNGBHFAC; // 0x28
		::RPG::GameCore::DynamicFloat* CKFBELANALF; // 0x30
		::RPG::GameCore::CompareType EHCHAPPGJDJ; // 0x38
		::RPG::GameCore::HPDetailParamType IMOPHAJMIFO; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMLCLKHBJN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BJMLCLKHBJN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BJMLCLKHBJN*))((::PBYTE)hIl2Cpp + BJMLCLKHBJN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BJMLCLKHBJN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BJMLCLKHBJN*))((::PBYTE)hIl2Cpp + BJMLCLKHBJN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::BJMLCLKHBJN* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::BJMLCLKHBJN*))((::PBYTE)hIl2Cpp + BJMLCLKHBJN_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::BJMLCLKHBJN* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::BJMLCLKHBJN*))((::PBYTE)hIl2Cpp + BJMLCLKHBJN_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
