#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CDHGEJMDOPG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KJGFMBFGOHC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KJGFMBFGOHC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F8F50)
#define KJGFMBFGOHC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KJGFMBFGOHC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KJGFMBFGOHC_HNPAEGDAAGL_1_OFFSET UNITYSDK_OFFSET(0x1A50CA30)
#define KJGFMBFGOHC_HNPAEGDAAGL_OFFSET UNITYSDK_OFFSET(0x1A50C9C0)
#define KJGFMBFGOHC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F8F30)
#define KJGFMBFGOHC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F8F40)
#define KJGFMBFGOHC___INIT_OFFSET UNITYSDK_OFFSET(0x7F8F10)

inline static constexpr unsigned int KJGFMBFGOHC_TypeDefinitionIndex = 15457;

struct alignas(8) KJGFMBFGOHC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGFMBFGOHC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJGFMBFGOHC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CDHGEJMDOPG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CDHGEJMDOPG&, ::System::Int32&))((::PBYTE)hIl2Cpp + KJGFMBFGOHC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::KJGFMBFGOHC HNPAEGDAAGL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KJGFMBFGOHC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJGFMBFGOHC_HNPAEGDAAGL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGFMBFGOHC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::KJGFMBFGOHC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KJGFMBFGOHC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJGFMBFGOHC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CDHGEJMDOPG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CDHGEJMDOPG&))((::PBYTE)hIl2Cpp + KJGFMBFGOHC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KJGFMBFGOHC HNPAEGDAAGL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KJGFMBFGOHC EIFONLCJOPG)
	{
		return ((::KJGFMBFGOHC(*)(::FlatBuffers::ByteBuffer*, ::KJGFMBFGOHC))((::PBYTE)hIl2Cpp + KJGFMBFGOHC_HNPAEGDAAGL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGFMBFGOHC_GHKKNCCLPAN_OFFSET))(this);
	}
};
