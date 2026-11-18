#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace UnityEngine { class Collider; }

#define IEDFLNEIOPO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x5B51E0)
#define IEDFLNEIOPO_EQUALS_OFFSET UNITYSDK_OFFSET(0x5B5160)
#define IEDFLNEIOPO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5B51F0)
#define IEDFLNEIOPO_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x5B5240)
#define IEDFLNEIOPO_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x5B52B0)
#define IEDFLNEIOPO_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0xEBB8D50)
#define IEDFLNEIOPO__CTOR_OFFSET UNITYSDK_OFFSET(0x5B5100)

inline static constexpr unsigned int IEDFLNEIOPO_TypeDefinitionIndex = 71346;

struct alignas(8) IEDFLNEIOPO
{
	::UnityEngine::Collider* GALHMINJEKJ; // 0x10
	::System::Int32 JBKNMHKMNLA; // 0x18
	::System::Int32 HPGDHFOCLNM; // 0x1C
	::System::Int32 NPPKMAJJOLH; // 0x20

	::System::Void _ctor(::UnityEngine::Collider* EHHHMFKHNAI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + IEDFLNEIOPO__CTOR_OFFSET))(this, EHHHMFKHNAI);
	}

	/*
	::System::Boolean Equals(::IEDFLNEIOPO LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::IEDFLNEIOPO))((::PBYTE)hIl2Cpp + IEDFLNEIOPO_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEDFLNEIOPO_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDFLNEIOPO_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDFLNEIOPO_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEDFLNEIOPO_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::IEDFLNEIOPO JPPEEOLOGGP(::UnityEngine::Collider* EHHHMFKHNAI)
	{
		return ((::IEDFLNEIOPO(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + IEDFLNEIOPO_JPPEEOLOGGP_OFFSET))(EHHHMFKHNAI);
	}
	*/
};
