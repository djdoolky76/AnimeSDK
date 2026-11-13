#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
class GFNEIHJFCEK;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define GFNEIHJFCEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E631810)
#define GFNEIHJFCEK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E631820)
#define GFNEIHJFCEK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E6317E0)

inline static constexpr unsigned int GFNEIHJFCEK_TypeDefinitionIndex = 23554;

	class GFNEIHJFCEK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* JNBLBDLALGE; // 0x18
		::RPG::GameCore::DynamicFloat* HHBJNOFIPBF; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::RPG::GameCore::DynamicFloat* JGNLDDCGADA; // 0x30
		::System::String* ECNKCCNJNPJ; // 0x38
		::RPG::GameCore::DynamicFloat* ADGJCGAHHJG; // 0x40
		::RPG::GameCore::DynamicFloat* KKHMOJLEPFP; // 0x48
		::RPG::MVector3 OMDDHOJDHKH; // 0x50
		::System::Boolean FPIJPODLMJH; // 0x5C
		::System::Boolean BIADECNNCJA; // 0x5D
		::System::Boolean ENNJNFLANBI; // 0x5E
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNEIHJFCEK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GFNEIHJFCEK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GFNEIHJFCEK*))((::PBYTE)hIl2Cpp + GFNEIHJFCEK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GFNEIHJFCEK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GFNEIHJFCEK*))((::PBYTE)hIl2Cpp + GFNEIHJFCEK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
