#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define GNAODFNNMAA_IBHIIJAAKCN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7730B0)
#define GNAODFNNMAA_IBHIIJAAKCN_EQUALS_OFFSET UNITYSDK_OFFSET(0x772FE0)
#define GNAODFNNMAA_IBHIIJAAKCN_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7730C0)

inline static constexpr unsigned int GNAODFNNMAA_IBHIIJAAKCN_TypeDefinitionIndex = 79312;

struct alignas(8) GNAODFNNMAA_IBHIIJAAKCN
{
	::System::String* DCJCHGOGLMF; // 0x10
	::System::Int32 EODJKJLEIBG; // 0x18
	::System::Byte _padding0[0x4];
	::System::String* HJMOFMLMAOE; // 0x20
	::System::String* JNIAEBKPLBP; // 0x28

	/*
	::System::Boolean Equals(::GNAODFNNMAA_IBHIIJAAKCN LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::GNAODFNNMAA_IBHIIJAAKCN))((::PBYTE)hIl2Cpp + GNAODFNNMAA_IBHIIJAAKCN_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNAODFNNMAA_IBHIIJAAKCN_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNAODFNNMAA_IBHIIJAAKCN_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
