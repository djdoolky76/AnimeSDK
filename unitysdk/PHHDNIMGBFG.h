#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PHHDNIMGBFG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7AFC10)
#define PHHDNIMGBFG_EQUALS_OFFSET UNITYSDK_OFFSET(0x7AFBE0)
#define PHHDNIMGBFG_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7AFD60)
#define PHHDNIMGBFG_MJIMNNFEKNB_OFFSET UNITYSDK_OFFSET(0x7AFD00)

inline static constexpr unsigned int PHHDNIMGBFG_TypeDefinitionIndex = 71839;

struct alignas(8) PHHDNIMGBFG
{
	::System::Collections::Generic::List_1<::System::Int32>* GIEIBEMEPMH; // 0x10
	::System::Int32 FCBGGJLANEB; // 0x18
	::System::Byte _padding0[0x4];
	::System::String* GPFIKOIHAKA; // 0x20
	::System::Int32 KKPHLMFOGHJ; // 0x28
	::System::Int32 DHAJLFMHDNG; // 0x2C

	/*
	::System::Boolean Equals(::PHHDNIMGBFG LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::PHHDNIMGBFG))((::PBYTE)hIl2Cpp + PHHDNIMGBFG_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PHHDNIMGBFG_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Boolean MJIMNNFEKNB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHDNIMGBFG_MJIMNNFEKNB_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PHHDNIMGBFG_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
