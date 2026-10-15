#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAKOLMIPFFE.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConstraintConditionPredicateType.h"
class APBBGIIOKCD;
class BNMIBEFPHNF;
class FMBLPMHLFON_KPIBJKIPLBO;
namespace System { class Action; }
namespace System { class Object; }

#define FMBLPMHLFON_AOCOBDLIALP_OFFSET UNITYSDK_OFFSET(0x1C5541D0)
#define FMBLPMHLFON_CIOONALDELB_OFFSET UNITYSDK_OFFSET(0x1C5545B0)
#define FMBLPMHLFON_CTOR_OFFSET UNITYSDK_OFFSET(0x1C554270)
#define FMBLPMHLFON_FENOMPCEFII_OFFSET UNITYSDK_OFFSET(0x1C554110)
#define FMBLPMHLFON_JGHDBJLBEEG_1_OFFSET UNITYSDK_OFFSET(0x1C554460)
#define FMBLPMHLFON_JGHDBJLBEEG_OFFSET UNITYSDK_OFFSET(0x1C554390)
#define FMBLPMHLFON_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1C5544D0)
#define FMBLPMHLFON_PGFCOBHJEDK_OFFSET UNITYSDK_OFFSET(0x1C554220)

inline static constexpr unsigned int FMBLPMHLFON_TypeDefinitionIndex = 41845;

	class FMBLPMHLFON : public ::MAKOLMIPFFE
	{
	public:
		::APBBGIIOKCD* GNGCFPJPPIA; // 0x28
		::BNMIBEFPHNF* AKIFHKPOAIJ; // 0x30
		::System::Void _ctor(::BNMIBEFPHNF* a1, ::APBBGIIOKCD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BNMIBEFPHNF*, ::APBBGIIOKCD*))((::PBYTE)hIl2Cpp + FMBLPMHLFON_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 FENOMPCEFII()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBLPMHLFON_FENOMPCEFII_OFFSET))(this);
		}

		::System::Int32 AOCOBDLIALP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBLPMHLFON_AOCOBDLIALP_OFFSET))(this);
		}

		::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType PGFCOBHJEDK()
		{
			return ((::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBLPMHLFON_PGFCOBHJEDK_OFFSET))(this);
		}

		::System::Action* JGHDBJLBEEG(::System::Object* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FMBLPMHLFON_JGHDBJLBEEG_OFFSET))(this, a1);
		}

		::System::Action* JGHDBJLBEEG_1(::FMBLPMHLFON_KPIBJKIPLBO* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::FMBLPMHLFON_KPIBJKIPLBO*))((::PBYTE)hIl2Cpp + FMBLPMHLFON_JGHDBJLBEEG_1_OFFSET))(this, a1);
		}

		::System::Void CIOONALDELB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBLPMHLFON_CIOONALDELB_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBLPMHLFON_KANMCJHEFJJ_OFFSET))(this);
		}

	};
