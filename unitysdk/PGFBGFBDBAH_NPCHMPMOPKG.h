#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define PGFBGFBDBAH_NPCHMPMOPKG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x75C770)
#define PGFBGFBDBAH_NPCHMPMOPKG_EQUALS_OFFSET UNITYSDK_OFFSET(0x75C610)
#define PGFBGFBDBAH_NPCHMPMOPKG_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x75C780)

inline static constexpr unsigned int PGFBGFBDBAH_NPCHMPMOPKG_TypeDefinitionIndex = 46113;

struct alignas(8) PGFBGFBDBAH_NPCHMPMOPKG
{
	::System::Nullable_1<::UnityEngine::Vector3> BDIEDFPGFHF; // 0x10
	::System::Byte _padding0[0x8];
	::System::Int32 OEHNNECNIHC; // 0x20

	/*
	::System::Boolean Equals(::PGFBGFBDBAH_NPCHMPMOPKG LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::PGFBGFBDBAH_NPCHMPMOPKG))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_NPCHMPMOPKG_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_NPCHMPMOPKG_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_NPCHMPMOPKG_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
