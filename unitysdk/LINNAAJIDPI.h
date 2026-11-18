#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define LINNAAJIDPI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7F6D00)
#define LINNAAJIDPI_EQUALS_OFFSET UNITYSDK_OFFSET(0x7F6C60)
#define LINNAAJIDPI_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7F6D10)

inline static constexpr unsigned int LINNAAJIDPI_TypeDefinitionIndex = 55044;

struct alignas(8) LINNAAJIDPI
{
	::System::Int32 DHAJLFMHDNG; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* DIFONAKCHEF; // 0x18

	/*
	::System::Boolean Equals(::LINNAAJIDPI LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::LINNAAJIDPI))((::PBYTE)hIl2Cpp + LINNAAJIDPI_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LINNAAJIDPI_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LINNAAJIDPI_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
