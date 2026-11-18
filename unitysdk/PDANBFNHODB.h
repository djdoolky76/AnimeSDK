#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NLKHPEDIDGM.h"

namespace System { class Object; }
namespace System { class String; }

#define PDANBFNHODB_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x13A88C60)
#define PDANBFNHODB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x718AB0)
#define PDANBFNHODB_EQUALS_OFFSET UNITYSDK_OFFSET(0x7189D0)
#define PDANBFNHODB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x718AC0)
#define PDANBFNHODB_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x718C30)
#define PDANBFNHODB_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x718CA0)

inline static constexpr unsigned int PDANBFNHODB_TypeDefinitionIndex = 57233;

struct alignas(8) PDANBFNHODB
{
	::System::UInt32 AOGNNJLKHGL; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* GOLFPMJNCDN; // 0x18
	::System::String* JBCFJEKACDM; // 0x20

	/*
	::System::Boolean Equals(::PDANBFNHODB LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::PDANBFNHODB))((::PBYTE)hIl2Cpp + PDANBFNHODB_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PDANBFNHODB_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDANBFNHODB_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDANBFNHODB_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PDANBFNHODB_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::PDANBFNHODB COKNIICCODC(::NLKHPEDIDGM PIMIGNMPNFF, ::System::String* ADEJIFDFEJO)
	{
		return ((::PDANBFNHODB(*)(::NLKHPEDIDGM, ::System::String*))((::PBYTE)hIl2Cpp + PDANBFNHODB_COKNIICCODC_OFFSET))(PIMIGNMPNFF, ADEJIFDFEJO);
	}
	*/
};
