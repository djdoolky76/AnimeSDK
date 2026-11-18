#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FFPIBPLJPDK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LEANFKBEJEB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LEANFKBEJEB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FE050)
#define LEANFKBEJEB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LEANFKBEJEB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LEANFKBEJEB_GNDKBMALOKO_1_OFFSET UNITYSDK_OFFSET(0x1A602B40)
#define LEANFKBEJEB_GNDKBMALOKO_OFFSET UNITYSDK_OFFSET(0x1A602840)
#define LEANFKBEJEB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FE090)
#define LEANFKBEJEB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FE0A0)
#define LEANFKBEJEB___INIT_OFFSET UNITYSDK_OFFSET(0x7FE030)

inline static constexpr unsigned int LEANFKBEJEB_TypeDefinitionIndex = 16070;

struct alignas(8) LEANFKBEJEB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEANFKBEJEB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEANFKBEJEB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LEANFKBEJEB GNDKBMALOKO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LEANFKBEJEB EIFONLCJOPG)
	{
		return ((::LEANFKBEJEB(*)(::FlatBuffers::ByteBuffer*, ::LEANFKBEJEB))((::PBYTE)hIl2Cpp + LEANFKBEJEB_GNDKBMALOKO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::LEANFKBEJEB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LEANFKBEJEB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEANFKBEJEB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FFPIBPLJPDK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FFPIBPLJPDK&, ::System::Int32&))((::PBYTE)hIl2Cpp + LEANFKBEJEB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEANFKBEJEB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEANFKBEJEB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FFPIBPLJPDK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FFPIBPLJPDK&))((::PBYTE)hIl2Cpp + LEANFKBEJEB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::LEANFKBEJEB GNDKBMALOKO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LEANFKBEJEB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEANFKBEJEB_GNDKBMALOKO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
