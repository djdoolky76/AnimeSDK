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

#define OFDEKOCILAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E46C690)
#define OFDEKOCILAF_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E46C9E0)
#define OFDEKOCILAF_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E46C990)
#define OFDEKOCILAF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E46C6B0)
#define OFDEKOCILAF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E46C640)

inline static constexpr unsigned int OFDEKOCILAF_TypeDefinitionIndex = 24694;

	class OFDEKOCILAF : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* IBHNJCENMPL; // 0x20
		::RPG::GameCore::EntityTypeMask PCBEIEAONIF; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TeamTypeMask OBMPNGFPNMG; // 0x30
		::System::Int32 NALMBOOCCIN; // 0x34
		::RPG::GameCore::RtStackSkillTargetRedirectPhase IFDLJDHLPJM; // 0x38
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
