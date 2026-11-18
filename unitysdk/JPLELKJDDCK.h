#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEBOPBEMJPI.h"
#include "unitysdk/System/ValueType.h"

class MGOMIFFPAFC;
namespace System { class String; }

#define JPLELKJDDCK_FJEDCOBMOFC_OFFSET UNITYSDK_OFFSET(0x7F77E0)
#define JPLELKJDDCK_HGJECOOFLJO_OFFSET UNITYSDK_OFFSET(0x7F7880)

inline static constexpr unsigned int JPLELKJDDCK_TypeDefinitionIndex = 64267;

struct alignas(8) JPLELKJDDCK
{
	::IEBOPBEMJPI OAMINAOHKGB; // 0x10
	::System::Byte _padding0[0x4];
	::System::UInt64 MADNAGKIBGA; // 0x18
	::System::String* DGCMBCFNAMC; // 0x20
	::System::String* EAGFIIKCOON; // 0x28
	::MGOMIFFPAFC* FAJJAGBLAEP; // 0x30

	/*
	::System::Boolean FJEDCOBMOFC(::JPLELKJDDCK LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::JPLELKJDDCK))((::PBYTE)hIl2Cpp + JPLELKJDDCK_FJEDCOBMOFC_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	/*
	::System::Boolean HGJECOOFLJO(::JPLELKJDDCK LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::JPLELKJDDCK))((::PBYTE)hIl2Cpp + JPLELKJDDCK_HGJECOOFLJO_OFFSET))(this, LIBPKNHDIGP);
	}
	*/
};
