#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NFOJCMEEKIO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HKIBBJHIFIK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HKIBBJHIFIK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80DC80)
#define HKIBBJHIFIK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HKIBBJHIFIK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HKIBBJHIFIK_NLJLGJELIFJ_1_OFFSET UNITYSDK_OFFSET(0x1B4E2380)
#define HKIBBJHIFIK_NLJLGJELIFJ_OFFSET UNITYSDK_OFFSET(0x1B4E2310)
#define HKIBBJHIFIK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80DCC0)
#define HKIBBJHIFIK___INIT_OFFSET UNITYSDK_OFFSET(0x80DC60)

inline static constexpr unsigned int HKIBBJHIFIK_TypeDefinitionIndex = 13021;

struct alignas(8) HKIBBJHIFIK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIBBJHIFIK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKIBBJHIFIK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HKIBBJHIFIK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKIBBJHIFIK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKIBBJHIFIK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HKIBBJHIFIK NLJLGJELIFJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKIBBJHIFIK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKIBBJHIFIK_NLJLGJELIFJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NFOJCMEEKIO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NFOJCMEEKIO&))((::PBYTE)hIl2Cpp + HKIBBJHIFIK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIBBJHIFIK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HKIBBJHIFIK NLJLGJELIFJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HKIBBJHIFIK EIFONLCJOPG)
	{
		return ((::HKIBBJHIFIK(*)(::FlatBuffers::ByteBuffer*, ::HKIBBJHIFIK))((::PBYTE)hIl2Cpp + HKIBBJHIFIK_NLJLGJELIFJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIBBJHIFIK_GHKKNCCLPAN_OFFSET))(this);
	}
};
