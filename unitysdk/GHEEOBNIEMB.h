#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ODPILFLGJAI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GHEEOBNIEMB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GHEEOBNIEMB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x78AF50)
#define GHEEOBNIEMB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GHEEOBNIEMB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GHEEOBNIEMB_GKMMDIEIBFF_1_OFFSET UNITYSDK_OFFSET(0x16649B80)
#define GHEEOBNIEMB_GKMMDIEIBFF_OFFSET UNITYSDK_OFFSET(0x16649AE0)
#define GHEEOBNIEMB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x78AF90)
#define GHEEOBNIEMB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x78AF40)
#define GHEEOBNIEMB___INIT_OFFSET UNITYSDK_OFFSET(0x78AF20)

inline static constexpr unsigned int GHEEOBNIEMB_TypeDefinitionIndex = 17010;

struct alignas(8) GHEEOBNIEMB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEEOBNIEMB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHEEOBNIEMB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GHEEOBNIEMB GKMMDIEIBFF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GHEEOBNIEMB EIFONLCJOPG)
	{
		return ((::GHEEOBNIEMB(*)(::FlatBuffers::ByteBuffer*, ::GHEEOBNIEMB))((::PBYTE)hIl2Cpp + GHEEOBNIEMB_GKMMDIEIBFF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::GHEEOBNIEMB GKMMDIEIBFF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GHEEOBNIEMB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHEEOBNIEMB_GKMMDIEIBFF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEEOBNIEMB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEEOBNIEMB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ODPILFLGJAI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ODPILFLGJAI&))((::PBYTE)hIl2Cpp + GHEEOBNIEMB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::GHEEOBNIEMB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GHEEOBNIEMB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHEEOBNIEMB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ODPILFLGJAI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ODPILFLGJAI&, ::System::Int32&))((::PBYTE)hIl2Cpp + GHEEOBNIEMB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
