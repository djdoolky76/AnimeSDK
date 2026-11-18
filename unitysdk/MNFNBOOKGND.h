#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DLDDFONBNBO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNFNBOOKGND_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MNFNBOOKGND_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C4590)
#define MNFNBOOKGND_CGPBCAENBEH_1_OFFSET UNITYSDK_OFFSET(0x17FCC560)
#define MNFNBOOKGND_CGPBCAENBEH_OFFSET UNITYSDK_OFFSET(0x17FCC460)
#define MNFNBOOKGND_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MNFNBOOKGND_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MNFNBOOKGND_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C4570)
#define MNFNBOOKGND_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C4580)
#define MNFNBOOKGND___INIT_OFFSET UNITYSDK_OFFSET(0x7C4550)

inline static constexpr unsigned int MNFNBOOKGND_TypeDefinitionIndex = 12112;

struct alignas(8) MNFNBOOKGND
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFNBOOKGND_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNFNBOOKGND___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DLDDFONBNBO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DLDDFONBNBO&))((::PBYTE)hIl2Cpp + MNFNBOOKGND_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DLDDFONBNBO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DLDDFONBNBO&, ::System::Int32&))((::PBYTE)hIl2Cpp + MNFNBOOKGND_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::MNFNBOOKGND CGPBCAENBEH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MNFNBOOKGND EIFONLCJOPG)
	{
		return ((::MNFNBOOKGND(*)(::FlatBuffers::ByteBuffer*, ::MNFNBOOKGND))((::PBYTE)hIl2Cpp + MNFNBOOKGND_CGPBCAENBEH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFNBOOKGND_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFNBOOKGND_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MNFNBOOKGND CGPBCAENBEH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MNFNBOOKGND(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNFNBOOKGND_CGPBCAENBEH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::MNFNBOOKGND BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MNFNBOOKGND(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNFNBOOKGND_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
