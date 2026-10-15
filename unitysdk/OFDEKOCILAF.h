#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RtStackSkillTargetRedirectPhase.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
class FCOEMCEDLNL;
class OFDEKOCILAF;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define OFDEKOCILAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D238820)
#define OFDEKOCILAF_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D238B70)
#define OFDEKOCILAF_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D238B20)
#define OFDEKOCILAF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D238840)
#define OFDEKOCILAF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2387D0)

inline static constexpr unsigned int OFDEKOCILAF_TypeDefinitionIndex = 24235;

	class OFDEKOCILAF : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* IBHNJCENMPL; // 0x20
		::RPG::GameCore::TeamTypeMask OBMPNGFPNMG; // 0x28
		::RPG::GameCore::RtStackSkillTargetRedirectPhase IFDLJDHLPJM; // 0x2C
		::System::Int32 NALMBOOCCIN; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::EntityTypeMask PCBEIEAONIF; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDEKOCILAF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OFDEKOCILAF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OFDEKOCILAF*))((::PBYTE)hIl2Cpp + OFDEKOCILAF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OFDEKOCILAF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OFDEKOCILAF*))((::PBYTE)hIl2Cpp + OFDEKOCILAF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::OFDEKOCILAF* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::OFDEKOCILAF*))((::PBYTE)hIl2Cpp + OFDEKOCILAF_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::OFDEKOCILAF* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::OFDEKOCILAF*))((::PBYTE)hIl2Cpp + OFDEKOCILAF_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
