#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PGFBGFBDBAH_NPCHMPMOPKG.h"
#include "unitysdk/System/ValueType.h"

class LBIHDBHFJKE;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PGFBGFBDBAH_HFINMOAHGDI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7AFA60)
#define PGFBGFBDBAH_HFINMOAHGDI_EQUALS_OFFSET UNITYSDK_OFFSET(0x7AFA30)
#define PGFBGFBDBAH_HFINMOAHGDI_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7AFB50)

inline static constexpr unsigned int PGFBGFBDBAH_HFINMOAHGDI_TypeDefinitionIndex = 46132;

struct alignas(8) PGFBGFBDBAH_HFINMOAHGDI
{
	::System::Collections::Generic::List_1<::LBIHDBHFJKE*>* KHNFOBGGACJ; // 0x10
	::PGFBGFBDBAH_NPCHMPMOPKG LIMNPDFOANI; // 0x18

	/*
	::System::Boolean Equals(::PGFBGFBDBAH_HFINMOAHGDI LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::PGFBGFBDBAH_HFINMOAHGDI))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_HFINMOAHGDI_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_HFINMOAHGDI_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_HFINMOAHGDI_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
