#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define PDGLMNGBJGO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8EB050)
#define PDGLMNGBJGO_EQUALS_OFFSET UNITYSDK_OFFSET(0x8EAEC0)
#define PDGLMNGBJGO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8EB060)
#define PDGLMNGBJGO_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x8EB140)
#define PDGLMNGBJGO_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x8EB1B0)
#define PDGLMNGBJGO__CTOR_OFFSET UNITYSDK_OFFSET(0x8CF1B0)

inline static constexpr unsigned int PDGLMNGBJGO_TypeDefinitionIndex = 93380;

struct alignas(4) PDGLMNGBJGO
{
	// static const ::System::Int32 EIONHBNJBIO = 0x8; // 0x0
	::System::Int32 KGEFHMGJLMK; // 0x10
	::System::Int32 FPPJFAHEJBL; // 0x14
	::System::Int32 INKHKOFDFKI; // 0x18
	::System::Int32 FJGFFEBBIKB; // 0x1C
	::System::Int32 LOPBLDMHPLH; // 0x20
	::System::Int32 OIBNFPHMNHJ; // 0x24
	::System::Int32 EAFAJJJDMDJ; // 0x28
	::System::Int32 ICBGJKFFCGO; // 0x2C
	::System::Boolean PFFHJPABHAL; // 0x30

	::System::Void _ctor(::System::Int32 CGOLJEEOPMI, ::System::Int32 BDEIBKPMKIH, ::System::Int32 PHIOJMMOKOM, ::System::Int32 HDDOIDBCLOI, ::System::Int32 OLLLLKOIHJO, ::System::Int32 GCOEHEDEAOD, ::System::Int32 DDPHLHPODPC, ::System::Int32 KIOGKCILPMD, ::System::Boolean DAODBJCBLPA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + PDGLMNGBJGO__CTOR_OFFSET))(this, CGOLJEEOPMI, BDEIBKPMKIH, PHIOJMMOKOM, HDDOIDBCLOI, OLLLLKOIHJO, GCOEHEDEAOD, DDPHLHPODPC, KIOGKCILPMD, DAODBJCBLPA);
	}

	/*
	::System::Boolean Equals(::PDGLMNGBJGO LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::PDGLMNGBJGO))((::PBYTE)hIl2Cpp + PDGLMNGBJGO_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PDGLMNGBJGO_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGLMNGBJGO_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGLMNGBJGO_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PDGLMNGBJGO_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
