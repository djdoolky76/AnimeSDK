#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DPKCJPJMBOF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MBNJKFDPNID_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MBNJKFDPNID_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80B6E0)
#define MBNJKFDPNID_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MBNJKFDPNID_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MBNJKFDPNID_IBKJFINMBAE_1_OFFSET UNITYSDK_OFFSET(0x1B30F030)
#define MBNJKFDPNID_IBKJFINMBAE_OFFSET UNITYSDK_OFFSET(0x1B30EF90)
#define MBNJKFDPNID_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80B6D0)
#define MBNJKFDPNID_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80B6C0)
#define MBNJKFDPNID___INIT_OFFSET UNITYSDK_OFFSET(0x80B6A0)

inline static constexpr unsigned int MBNJKFDPNID_TypeDefinitionIndex = 11244;

struct alignas(8) MBNJKFDPNID
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNJKFDPNID_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MBNJKFDPNID___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNJKFDPNID_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MBNJKFDPNID IBKJFINMBAE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MBNJKFDPNID EIFONLCJOPG)
	{
		return ((::MBNJKFDPNID(*)(::FlatBuffers::ByteBuffer*, ::MBNJKFDPNID))((::PBYTE)hIl2Cpp + MBNJKFDPNID_IBKJFINMBAE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::MBNJKFDPNID IBKJFINMBAE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MBNJKFDPNID(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MBNJKFDPNID_IBKJFINMBAE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DPKCJPJMBOF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DPKCJPJMBOF&, ::System::Int32&))((::PBYTE)hIl2Cpp + MBNJKFDPNID_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::MBNJKFDPNID BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MBNJKFDPNID(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MBNJKFDPNID_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DPKCJPJMBOF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DPKCJPJMBOF&))((::PBYTE)hIl2Cpp + MBNJKFDPNID_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNJKFDPNID_GHKKNCCLPAN_OFFSET))(this);
	}
};
