#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KDHPHOPOPOK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AGLGFOPAFDD_AKPLGFPMGIE_1_OFFSET UNITYSDK_OFFSET(0x1B983D20)
#define AGLGFOPAFDD_AKPLGFPMGIE_OFFSET UNITYSDK_OFFSET(0x1B983C20)
#define AGLGFOPAFDD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AGLGFOPAFDD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x816000)
#define AGLGFOPAFDD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AGLGFOPAFDD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AGLGFOPAFDD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x815FE0)
#define AGLGFOPAFDD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x815FF0)
#define AGLGFOPAFDD___INIT_OFFSET UNITYSDK_OFFSET(0x815FC0)

inline static constexpr unsigned int AGLGFOPAFDD_TypeDefinitionIndex = 10707;

struct alignas(8) AGLGFOPAFDD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLGFOPAFDD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGLGFOPAFDD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AGLGFOPAFDD AKPLGFPMGIE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AGLGFOPAFDD EIFONLCJOPG)
	{
		return ((::AGLGFOPAFDD(*)(::FlatBuffers::ByteBuffer*, ::AGLGFOPAFDD))((::PBYTE)hIl2Cpp + AGLGFOPAFDD_AKPLGFPMGIE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLGFOPAFDD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::AGLGFOPAFDD AKPLGFPMGIE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AGLGFOPAFDD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGLGFOPAFDD_AKPLGFPMGIE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KDHPHOPOPOK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KDHPHOPOPOK&, ::System::Int32&))((::PBYTE)hIl2Cpp + AGLGFOPAFDD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLGFOPAFDD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::AGLGFOPAFDD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AGLGFOPAFDD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGLGFOPAFDD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KDHPHOPOPOK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KDHPHOPOPOK&))((::PBYTE)hIl2Cpp + AGLGFOPAFDD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
