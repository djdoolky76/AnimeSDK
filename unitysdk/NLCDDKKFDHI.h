#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define NLCDDKKFDHI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8CC680)
#define NLCDDKKFDHI_EQUALS_OFFSET UNITYSDK_OFFSET(0x8CC670)
#define NLCDDKKFDHI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8CC760)
#define NLCDDKKFDHI_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x8CC7E0)
#define NLCDDKKFDHI_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x8CC770)
#define NLCDDKKFDHI__CTOR_OFFSET UNITYSDK_OFFSET(0x358800)

inline static constexpr unsigned int NLCDDKKFDHI_TypeDefinitionIndex = 93974;

struct alignas(4) NLCDDKKFDHI
{
	::System::Single MLEEKAMODAB; // 0x10

	::System::Void _ctor(::System::Single PFDEICFIHDC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NLCDDKKFDHI__CTOR_OFFSET))(this, PFDEICFIHDC);
	}

	/*
	::System::Boolean Equals(::NLCDDKKFDHI LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::NLCDDKKFDHI))((::PBYTE)hIl2Cpp + NLCDDKKFDHI_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLCDDKKFDHI_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCDDKKFDHI_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLCDDKKFDHI_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCDDKKFDHI_HLPHPBAODIF_OFFSET))(this);
	}
};
