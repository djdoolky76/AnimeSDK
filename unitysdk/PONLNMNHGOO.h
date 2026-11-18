#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BCAFOJDHJIA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PONLNMNHGOO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PONLNMNHGOO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85EA80)
#define PONLNMNHGOO_DPJPFFBOCNE_1_OFFSET UNITYSDK_OFFSET(0x1CD0FAB0)
#define PONLNMNHGOO_DPJPFFBOCNE_OFFSET UNITYSDK_OFFSET(0x1CD0FA40)
#define PONLNMNHGOO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PONLNMNHGOO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PONLNMNHGOO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x85EA60)
#define PONLNMNHGOO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85EA70)
#define PONLNMNHGOO___INIT_OFFSET UNITYSDK_OFFSET(0x85EA40)

inline static constexpr unsigned int PONLNMNHGOO_TypeDefinitionIndex = 12310;

struct alignas(8) PONLNMNHGOO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PONLNMNHGOO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PONLNMNHGOO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PONLNMNHGOO DPJPFFBOCNE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PONLNMNHGOO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PONLNMNHGOO_DPJPFFBOCNE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BCAFOJDHJIA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BCAFOJDHJIA&))((::PBYTE)hIl2Cpp + PONLNMNHGOO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BCAFOJDHJIA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BCAFOJDHJIA&, ::System::Int32&))((::PBYTE)hIl2Cpp + PONLNMNHGOO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PONLNMNHGOO_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PONLNMNHGOO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PONLNMNHGOO DPJPFFBOCNE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PONLNMNHGOO EIFONLCJOPG)
	{
		return ((::PONLNMNHGOO(*)(::FlatBuffers::ByteBuffer*, ::PONLNMNHGOO))((::PBYTE)hIl2Cpp + PONLNMNHGOO_DPJPFFBOCNE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::PONLNMNHGOO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PONLNMNHGOO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PONLNMNHGOO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
