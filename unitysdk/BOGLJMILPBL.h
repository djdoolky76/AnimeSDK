#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OHMDCFCNKIM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BOGLJMILPBL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BOGLJMILPBL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E2390)
#define BOGLJMILPBL_CIOJILOJBGF_1_OFFSET UNITYSDK_OFFSET(0x194FC330)
#define BOGLJMILPBL_CIOJILOJBGF_OFFSET UNITYSDK_OFFSET(0x194FC2C0)
#define BOGLJMILPBL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BOGLJMILPBL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BOGLJMILPBL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E23D0)
#define BOGLJMILPBL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E2380)
#define BOGLJMILPBL___INIT_OFFSET UNITYSDK_OFFSET(0x7E2360)

inline static constexpr unsigned int BOGLJMILPBL_TypeDefinitionIndex = 14941;

struct alignas(8) BOGLJMILPBL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGLJMILPBL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOGLJMILPBL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGLJMILPBL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BOGLJMILPBL CIOJILOJBGF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BOGLJMILPBL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOGLJMILPBL_CIOJILOJBGF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::BOGLJMILPBL CIOJILOJBGF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BOGLJMILPBL EIFONLCJOPG)
	{
		return ((::BOGLJMILPBL(*)(::FlatBuffers::ByteBuffer*, ::BOGLJMILPBL))((::PBYTE)hIl2Cpp + BOGLJMILPBL_CIOJILOJBGF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGLJMILPBL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::BOGLJMILPBL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BOGLJMILPBL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOGLJMILPBL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OHMDCFCNKIM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OHMDCFCNKIM&))((::PBYTE)hIl2Cpp + BOGLJMILPBL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OHMDCFCNKIM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OHMDCFCNKIM&, ::System::Int32&))((::PBYTE)hIl2Cpp + BOGLJMILPBL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
