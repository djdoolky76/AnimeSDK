#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMENNFHKEOE_MEAIOKOMAJJ.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define IDAIBIIJLKD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x772120)
#define IDAIBIIJLKD_EQUALS_OFFSET UNITYSDK_OFFSET(0x7720B0)
#define IDAIBIIJLKD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x772130)
#define IDAIBIIJLKD_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x772200)
#define IDAIBIIJLKD_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x15BF9510)
#define IDAIBIIJLKD_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x772190)
#define IDAIBIIJLKD_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x15BF9400)
#define IDAIBIIJLKD__CCTOR_OFFSET UNITYSDK_OFFSET(0x15BF93F0)
#define IDAIBIIJLKD__CTOR_OFFSET UNITYSDK_OFFSET(0x6C98D0)

inline static constexpr unsigned int IDAIBIIJLKD_TypeDefinitionIndex = 83627;

struct alignas(4) IDAIBIIJLKD
{
	static ::IDAIBIIJLKD* StaticGet_DDGNFJDLOKA()
	{
		return (::IDAIBIIJLKD*)Il2CppClass::FromTypeDefinitionIndex(IDAIBIIJLKD_TypeDefinitionIndex)->GetStaticField(0xAC20);
	}
	::System::Int32 BGMBKBJIEBC; // 0x10
	::System::Int32 BNFFCBHPNEP; // 0x14
	::HMENNFHKEOE_MEAIOKOMAJJ CFPMPHNPNCL; // 0x18
	::HMENNFHKEOE_MEAIOKOMAJJ KAGNNDDIOJA; // 0x1C

	::System::Void _ctor(::System::Int32 DACENMDFINE, ::System::Int32 ELBMPFJIDHN, ::System::Int32 EJPPNLBNMHO, ::System::Int32 BAKKGNOEGPD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IDAIBIIJLKD__CTOR_OFFSET))(this, DACENMDFINE, ELBMPFJIDHN, EJPPNLBNMHO, BAKKGNOEGPD);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDAIBIIJLKD__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::IDAIBIIJLKD LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::IDAIBIIJLKD))((::PBYTE)hIl2Cpp + IDAIBIIJLKD_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDAIBIIJLKD_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDAIBIIJLKD_GETHASHCODE_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::IDAIBIIJLKD KILPCOMOCMD, ::IDAIBIIJLKD BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::IDAIBIIJLKD, ::IDAIBIIJLKD))((::PBYTE)hIl2Cpp + IDAIBIIJLKD_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDAIBIIJLKD_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::IDAIBIIJLKD KILPCOMOCMD, ::IDAIBIIJLKD BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::IDAIBIIJLKD, ::IDAIBIIJLKD))((::PBYTE)hIl2Cpp + IDAIBIIJLKD_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDAIBIIJLKD_HLPHPBAODIF_OFFSET))(this);
	}
};
