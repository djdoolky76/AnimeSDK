#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AFJCFHFEGCG.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OMGFCFDABLN.h"

namespace System { class String; }

#define HBOMFILGOPJ_APHGPJJCILI_OFFSET UNITYSDK_OFFSET(0x722400)
#define HBOMFILGOPJ_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x282350)
#define HBOMFILGOPJ_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x7226B0)
#define HBOMFILGOPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x7225F0)
#define HBOMFILGOPJ_GMMPDGINCCP_OFFSET UNITYSDK_OFFSET(0x3CED50)
#define HBOMFILGOPJ_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x13E0B9C0)
#define HBOMFILGOPJ_JDLLMFBOCAJ_OFFSET UNITYSDK_OFFSET(0x7224C0)
#define HBOMFILGOPJ_MOKPJANACHK_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HBOMFILGOPJ_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x13E0B8E0)
#define HBOMFILGOPJ_PBLCEFJDDKH_OFFSET UNITYSDK_OFFSET(0x722490)
#define HBOMFILGOPJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7226A0)
#define HBOMFILGOPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x7225A0)

inline static constexpr unsigned int HBOMFILGOPJ_TypeDefinitionIndex = 58588;

struct alignas(4) HBOMFILGOPJ
{
	::AFJCFHFEGCG BPNAOACOEEC; // 0x10

	::System::Void _ctor(::System::String* HIAIKHDFCLN, ::OMGFCFDABLN& LOACBJBANNC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::OMGFCFDABLN&))((::PBYTE)hIl2Cpp + HBOMFILGOPJ__CTOR_OFFSET))(this, HIAIKHDFCLN, LOACBJBANNC);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOMFILGOPJ_DECMGICKDLH_OFFSET))(this);
	}

	::System::String* MOKPJANACHK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOMFILGOPJ_MOKPJANACHK_OFFSET))(this);
	}

	::System::String* GMMPDGINCCP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOMFILGOPJ_GMMPDGINCCP_OFFSET))(this);
	}

	::System::Boolean APHGPJJCILI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOMFILGOPJ_APHGPJJCILI_OFFSET))(this);
	}

	::System::Boolean PBLCEFJDDKH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOMFILGOPJ_PBLCEFJDDKH_OFFSET))(this);
	}

	::System::String* JDLLMFBOCAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOMFILGOPJ_JDLLMFBOCAJ_OFFSET))(this);
	}

	/*
	::System::Boolean Equals(::HBOMFILGOPJ LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::HBOMFILGOPJ))((::PBYTE)hIl2Cpp + HBOMFILGOPJ_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOMFILGOPJ_TOSTRING_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::HBOMFILGOPJ FFKBEGIHIGG, ::HBOMFILGOPJ CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::HBOMFILGOPJ, ::HBOMFILGOPJ))((::PBYTE)hIl2Cpp + HBOMFILGOPJ_NOGJIJMACNO_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	/*
	static ::System::Boolean INCFIJKMIGG(::HBOMFILGOPJ FFKBEGIHIGG, ::HBOMFILGOPJ CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::HBOMFILGOPJ, ::HBOMFILGOPJ))((::PBYTE)hIl2Cpp + HBOMFILGOPJ_INCFIJKMIGG_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOMFILGOPJ_DPIHOJBBGLA_OFFSET))(this);
	}
};
