#pragma once
#include "unitysdk/unitysdk.h"

#define GBAJCFMAIHG_CKNJGNLKBKI_OFFSET UNITYSDK_OFFSET(0x116DBA60)
#define GBAJCFMAIHG_CKOBJKNHAJC_OFFSET UNITYSDK_OFFSET(0x116DBDB0)
#define GBAJCFMAIHG_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x116DB940)
#define GBAJCFMAIHG_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x116DBAE0)
#define GBAJCFMAIHG_JIINLGNDNOH_OFFSET UNITYSDK_OFFSET(0x116DBBF0)
#define GBAJCFMAIHG_LJFDHCOLJIC_OFFSET UNITYSDK_OFFSET(0x116DBD10)
#define GBAJCFMAIHG_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x116DBB60)
#define GBAJCFMAIHG_NMBIIAAKDDL_OFFSET UNITYSDK_OFFSET(0x116DBC10)
#define GBAJCFMAIHG_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x116DBA10)
#define GBAJCFMAIHG_PDDOKKPIOBH_OFFSET UNITYSDK_OFFSET(0x116DBC70)
#define GBAJCFMAIHG_PDPCDPCNIBO_OFFSET UNITYSDK_OFFSET(0x116DBC00)
#define GBAJCFMAIHG__CCTOR_OFFSET UNITYSDK_OFFSET(0x116DB990)
#define GBAJCFMAIHG__CTOR_OFFSET UNITYSDK_OFFSET(0x116DBAC0)

inline static constexpr unsigned int GBAJCFMAIHG_TypeDefinitionIndex = 70354;

class GBAJCFMAIHG
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x228; // 0x0
	::System::Boolean FCMCJHLHIIF; // 0x58
	::System::Boolean CBCDCOHBICK; // 0x59

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBAJCFMAIHG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBAJCFMAIHG__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBAJCFMAIHG_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBAJCFMAIHG_ONCLEAN_OFFSET))(this);
	}

	::System::Boolean CKNJGNLKBKI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBAJCFMAIHG_CKNJGNLKBKI_OFFSET))(this);
	}

	static ::GBAJCFMAIHG* JFDOOELFAOA()
	{
		return ((::GBAJCFMAIHG*(*)())((::PBYTE)hIl2Cpp + GBAJCFMAIHG_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBAJCFMAIHG_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Boolean JIINLGNDNOH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBAJCFMAIHG_JIINLGNDNOH_OFFSET))(this);
	}

	::System::Boolean PDPCDPCNIBO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBAJCFMAIHG_PDPCDPCNIBO_OFFSET))(this);
	}

	::System::Boolean NMBIIAAKDDL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBAJCFMAIHG_NMBIIAAKDDL_OFFSET))(this);
	}

	::System::Void PDDOKKPIOBH(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GBAJCFMAIHG_PDDOKKPIOBH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LJFDHCOLJIC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GBAJCFMAIHG_LJFDHCOLJIC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CKOBJKNHAJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBAJCFMAIHG_CKOBJKNHAJC_OFFSET))(this);
	}
};
