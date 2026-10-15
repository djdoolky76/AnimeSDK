#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TargetRatioType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DBPJGJICHOI;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define DBPJGJICHOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCD18C0)
#define DBPJGJICHOI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCD1930)
#define DBPJGJICHOI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCD1820)

	class DBPJGJICHOI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* FDFONLOKOHJ; // 0x18
		::RPG::GameCore::DynamicFloat* MIAFMBHCMOG; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::RPG::GameCore::TargetEvaluator* NFMKOFNEKLA; // 0x30
		::RPG::GameCore::DynamicFloat* ABINBKACLJK; // 0x38
		::RPG::GameCore::DamageDisplayData* AIMHHKODFJN; // 0x40
		::RPG::GameCore::DynamicFloat* PIBDDOGGDKL; // 0x48
		::RPG::GameCore::AttackDamageType PAIECOBACKB; // 0x50
		::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x54
		::RPG::GameCore::TargetRatioType LMCJKOCHIAI; // 0x58
		::System::Boolean AGFGDBPMPPB; // 0x5C
		::System::Boolean AELFMDGFAIK; // 0x5D
		::System::Byte _padding0[0x2];
		::RPG::GameCore::AttackType HIFKEKCELFB; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPJGJICHOI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DBPJGJICHOI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DBPJGJICHOI*))((::PBYTE)hIl2Cpp + DBPJGJICHOI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DBPJGJICHOI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DBPJGJICHOI*))((::PBYTE)hIl2Cpp + DBPJGJICHOI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
