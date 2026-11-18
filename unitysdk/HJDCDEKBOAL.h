#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LCJOLHHKIAM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HJDCDEKBOAL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HJDCDEKBOAL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DEF00)
#define HJDCDEKBOAL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HJDCDEKBOAL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HJDCDEKBOAL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DEF40)
#define HJDCDEKBOAL_OCIFEHGNONJ_1_OFFSET UNITYSDK_OFFSET(0x19343590)
#define HJDCDEKBOAL_OCIFEHGNONJ_OFFSET UNITYSDK_OFFSET(0x193434F0)
#define HJDCDEKBOAL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DEEF0)
#define HJDCDEKBOAL___INIT_OFFSET UNITYSDK_OFFSET(0x7DEED0)

inline static constexpr unsigned int HJDCDEKBOAL_TypeDefinitionIndex = 15978;

struct alignas(8) HJDCDEKBOAL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDCDEKBOAL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJDCDEKBOAL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HJDCDEKBOAL OCIFEHGNONJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HJDCDEKBOAL EIFONLCJOPG)
	{
		return ((::HJDCDEKBOAL(*)(::FlatBuffers::ByteBuffer*, ::HJDCDEKBOAL))((::PBYTE)hIl2Cpp + HJDCDEKBOAL_OCIFEHGNONJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HJDCDEKBOAL OCIFEHGNONJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HJDCDEKBOAL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJDCDEKBOAL_OCIFEHGNONJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LCJOLHHKIAM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LCJOLHHKIAM&))((::PBYTE)hIl2Cpp + HJDCDEKBOAL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDCDEKBOAL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::HJDCDEKBOAL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HJDCDEKBOAL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJDCDEKBOAL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDCDEKBOAL_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LCJOLHHKIAM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LCJOLHHKIAM&, ::System::Int32&))((::PBYTE)hIl2Cpp + HJDCDEKBOAL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
