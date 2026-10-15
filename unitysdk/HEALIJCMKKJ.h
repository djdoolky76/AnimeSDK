#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAKOLMIPFFE.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConstraintConditionPredicateType.h"
class APBBGIIOKCD;
class HEALIJCMKKJ_BDPOMCNGPIO;
namespace System { class Action; }
namespace System { class Object; }

#define HEALIJCMKKJ_AOCOBDLIALP_OFFSET UNITYSDK_OFFSET(0x1C558FC0)
#define HEALIJCMKKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C559060)
#define HEALIJCMKKJ_FENOMPCEFII_OFFSET UNITYSDK_OFFSET(0x1C558F40)
#define HEALIJCMKKJ_JGHDBJLBEEG_1_OFFSET UNITYSDK_OFFSET(0x1C559160)
#define HEALIJCMKKJ_JGHDBJLBEEG_OFFSET UNITYSDK_OFFSET(0x1C5590C0)
#define HEALIJCMKKJ_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1C559300)
#define HEALIJCMKKJ_MAIMJGKONJO_OFFSET UNITYSDK_OFFSET(0x1C5593C0)
#define HEALIJCMKKJ_PGFCOBHJEDK_OFFSET UNITYSDK_OFFSET(0x1C559010)

	class HEALIJCMKKJ : public ::MAKOLMIPFFE
	{
	public:
		::HEALIJCMKKJ_BDPOMCNGPIO* PCKNJEDAMIM; // 0x28
		::APBBGIIOKCD* BCNKCIJBGEF; // 0x30
		::System::Void _ctor(::APBBGIIOKCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APBBGIIOKCD*))((::PBYTE)hIl2Cpp + HEALIJCMKKJ_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 FENOMPCEFII()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEALIJCMKKJ_FENOMPCEFII_OFFSET))(this);
		}

		::System::Int32 AOCOBDLIALP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEALIJCMKKJ_AOCOBDLIALP_OFFSET))(this);
		}

		::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType PGFCOBHJEDK()
		{
			return ((::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType(*)(::PVOID))((::PBYTE)hIl2Cpp + HEALIJCMKKJ_PGFCOBHJEDK_OFFSET))(this);
		}

		::System::Action* JGHDBJLBEEG(::System::Object* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEALIJCMKKJ_JGHDBJLBEEG_OFFSET))(this, a1);
		}

		::System::Action* JGHDBJLBEEG_1(::HEALIJCMKKJ_BDPOMCNGPIO* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::HEALIJCMKKJ_BDPOMCNGPIO*))((::PBYTE)hIl2Cpp + HEALIJCMKKJ_JGHDBJLBEEG_1_OFFSET))(this, a1);
		}

		::System::Void MAIMJGKONJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEALIJCMKKJ_MAIMJGKONJO_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ(::HEALIJCMKKJ_BDPOMCNGPIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEALIJCMKKJ_BDPOMCNGPIO*))((::PBYTE)hIl2Cpp + HEALIJCMKKJ_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
