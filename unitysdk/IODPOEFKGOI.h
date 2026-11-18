#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define IODPOEFKGOI_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x7CF270)
#define IODPOEFKGOI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7CF200)
#define IODPOEFKGOI__CCTOR_OFFSET UNITYSDK_OFFSET(0x187148B0)

inline static constexpr unsigned int IODPOEFKGOI_TypeDefinitionIndex = 41432;

struct alignas(4) IODPOEFKGOI
{
	static ::IODPOEFKGOI* StaticGet_GPIOJBLKFAJ()
	{
		return (::IODPOEFKGOI*)Il2CppClass::FromTypeDefinitionIndex(IODPOEFKGOI_TypeDefinitionIndex)->GetStaticField(0xDE10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IODPOEFKGOI__CCTOR_OFFSET))();
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IODPOEFKGOI_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IODPOEFKGOI_DPIHOJBBGLA_OFFSET))(this);
	}
};
