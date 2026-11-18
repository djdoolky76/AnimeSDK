#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }

#define JGBBFHMCCGP_BJANJLLNLCK_OFFSET UNITYSDK_OFFSET(0x1C35E420)
#define JGBBFHMCCGP_FJOECHCCIGG_OFFSET UNITYSDK_OFFSET(0x1C35E3C0)
#define JGBBFHMCCGP_IJIIOGHDFKG_OFFSET UNITYSDK_OFFSET(0x1C35E540)
#define JGBBFHMCCGP_JPOLBPCHLHK_OFFSET UNITYSDK_OFFSET(0x1C35E430)
#define JGBBFHMCCGP_KOJGNEEEOBO_OFFSET UNITYSDK_OFFSET(0x1C35E480)
#define JGBBFHMCCGP_NAGJLHHFADI_OFFSET UNITYSDK_OFFSET(0x1C35E270)
#define JGBBFHMCCGP_PEDLLMMLKGB_1_OFFSET UNITYSDK_OFFSET(0x1C35E590)
#define JGBBFHMCCGP_PEDLLMMLKGB_OFFSET UNITYSDK_OFFSET(0x1C35E300)

inline static constexpr unsigned int JGBBFHMCCGP_TypeDefinitionIndex = 83528;

class JGBBFHMCCGP : public ::System::Object
{
public:
	static ::System::Random** StaticGet_JPFHBKJNMIL()
	{
		return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(JGBBFHMCCGP_TypeDefinitionIndex)->GetStaticField(0x4F6D0);
	}
	static ::System::Boolean* StaticGet_ENIBFKCPAEE()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JGBBFHMCCGP_TypeDefinitionIndex)->GetStaticField(0x12D10);
	}

	static ::System::Void NAGJLHHFADI(::System::Int32 GONODCOMIAA)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + JGBBFHMCCGP_NAGJLHHFADI_OFFSET))(GONODCOMIAA);
	}

	static ::System::Single PEDLLMMLKGB(::System::Single GDBANLBHNJK, ::System::Single DNFNKBNBJHM)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JGBBFHMCCGP_PEDLLMMLKGB_OFFSET))(GDBANLBHNJK, DNFNKBNBJHM);
	}

	static ::System::Random* BJANJLLNLCK()
	{
		return ((::System::Random*(*)())((::PBYTE)hIl2Cpp + JGBBFHMCCGP_BJANJLLNLCK_OFFSET))();
	}

	static ::System::Void JPOLBPCHLHK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGBBFHMCCGP_JPOLBPCHLHK_OFFSET))();
	}

	static ::System::Void KOJGNEEEOBO()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGBBFHMCCGP_KOJGNEEEOBO_OFFSET))();
	}

	static ::System::Single FJOECHCCIGG()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + JGBBFHMCCGP_FJOECHCCIGG_OFFSET))();
	}

	static ::System::Boolean IJIIOGHDFKG()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JGBBFHMCCGP_IJIIOGHDFKG_OFFSET))();
	}

	static ::System::Int32 PEDLLMMLKGB_1(::System::Int32 GDBANLBHNJK, ::System::Int32 DNFNKBNBJHM)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JGBBFHMCCGP_PEDLLMMLKGB_1_OFFSET))(GDBANLBHNJK, DNFNKBNBJHM);
	}
};
