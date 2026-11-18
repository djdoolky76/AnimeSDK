#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIJJNLNMPNL.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PGFBGFBDBAH_NBICHNOEJGN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x70A4B0)
#define PGFBGFBDBAH_NBICHNOEJGN_EQUALS_OFFSET UNITYSDK_OFFSET(0x70A3D0)
#define PGFBGFBDBAH_NBICHNOEJGN_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x70A4C0)

inline static constexpr unsigned int PGFBGFBDBAH_NBICHNOEJGN_TypeDefinitionIndex = 46109;

struct alignas(8) PGFBGFBDBAH_NBICHNOEJGN
{
	::System::String* DCJCHGOGLMF; // 0x10
	::System::String* HJMOFMLMAOE; // 0x18
	::LIJJNLNMPNL GNDCEGDKGJG; // 0x20
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::System::Int32>* GFIIGKMOILE; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* KFPAFGCDIHF; // 0x30

	/*
	::System::Boolean Equals(::PGFBGFBDBAH_NBICHNOEJGN LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::PGFBGFBDBAH_NBICHNOEJGN))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_NBICHNOEJGN_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_NBICHNOEJGN_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_NBICHNOEJGN_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
