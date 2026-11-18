#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define FDIGBIBAMIJ_COJLANNJLOE_OFFSET UNITYSDK_OFFSET(0x7DAF80)
#define FDIGBIBAMIJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7DAE60)
#define FDIGBIBAMIJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x7DADE0)
#define FDIGBIBAMIJ_FABBOGDLKIJ_OFFSET UNITYSDK_OFFSET(0x7DAEF0)
#define FDIGBIBAMIJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7DAE70)
#define FDIGBIBAMIJ_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7DB0F0)
#define FDIGBIBAMIJ_JCBGOOAGJAI_OFFSET UNITYSDK_OFFSET(0x7DB090)
#define FDIGBIBAMIJ_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7DB020)
#define FDIGBIBAMIJ_PADHEHLKBDO_OFFSET UNITYSDK_OFFSET(0x7DAE80)
#define FDIGBIBAMIJ__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7DAD60)
#define FDIGBIBAMIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x7DAD50)

inline static constexpr unsigned int FDIGBIBAMIJ_TypeDefinitionIndex = 91120;

struct alignas(4) FDIGBIBAMIJ
{
	::System::UInt16 ONGKNJDGBLJ; // 0x10
	::System::UInt16 JOGJHDBEDPN; // 0x12
	::System::UInt16 FDFEDLFEIIN; // 0x14

	::System::Void _ctor(::System::Int64 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + FDIGBIBAMIJ__CTOR_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void _ctor_1(::UnityEngine::Vector3 GADABMPMNEM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FDIGBIBAMIJ__CTOR_1_OFFSET))(this, GADABMPMNEM);
	}

	/*
	::System::Boolean Equals(::FDIGBIBAMIJ LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::FDIGBIBAMIJ))((::PBYTE)hIl2Cpp + FDIGBIBAMIJ_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FDIGBIBAMIJ_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIGBIBAMIJ_GETHASHCODE_OFFSET))(this);
	}

	/*
	::System::Boolean PADHEHLKBDO(::FDIGBIBAMIJ& LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::FDIGBIBAMIJ&))((::PBYTE)hIl2Cpp + FDIGBIBAMIJ_PADHEHLKBDO_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::UnityEngine::Vector3 FABBOGDLKIJ()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIGBIBAMIJ_FABBOGDLKIJ_OFFSET))(this);
	}

	/*
	::FDIGBIBAMIJ COJLANNJLOE(::System::Int32 HAAEBCOBKFF, ::System::Int32 BFMMEICFNCD, ::System::Int32 GNHOCNHLCCA)
	{
		return ((::FDIGBIBAMIJ(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FDIGBIBAMIJ_COJLANNJLOE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD, GNHOCNHLCCA);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FDIGBIBAMIJ_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int64 JCBGOOAGJAI()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIGBIBAMIJ_JCBGOOAGJAI_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIGBIBAMIJ_HLPHPBAODIF_OFFSET))(this);
	}
};
