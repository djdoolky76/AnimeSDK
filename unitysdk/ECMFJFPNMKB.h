#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LDEFEKIJKLL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ECMFJFPNMKB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ECMFJFPNMKB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x766490)
#define ECMFJFPNMKB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ECMFJFPNMKB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ECMFJFPNMKB_LLEJNCMCFCL_1_OFFSET UNITYSDK_OFFSET(0x157ACAB0)
#define ECMFJFPNMKB_LLEJNCMCFCL_OFFSET UNITYSDK_OFFSET(0x157AC9B0)
#define ECMFJFPNMKB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7664E0)
#define ECMFJFPNMKB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7664D0)
#define ECMFJFPNMKB___INIT_OFFSET UNITYSDK_OFFSET(0x766470)

inline static constexpr unsigned int ECMFJFPNMKB_TypeDefinitionIndex = 10022;

struct alignas(8) ECMFJFPNMKB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMFJFPNMKB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECMFJFPNMKB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::ECMFJFPNMKB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ECMFJFPNMKB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECMFJFPNMKB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMFJFPNMKB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ECMFJFPNMKB LLEJNCMCFCL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ECMFJFPNMKB EIFONLCJOPG)
	{
		return ((::ECMFJFPNMKB(*)(::FlatBuffers::ByteBuffer*, ::ECMFJFPNMKB))((::PBYTE)hIl2Cpp + ECMFJFPNMKB_LLEJNCMCFCL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMFJFPNMKB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LDEFEKIJKLL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LDEFEKIJKLL&))((::PBYTE)hIl2Cpp + ECMFJFPNMKB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ECMFJFPNMKB LLEJNCMCFCL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ECMFJFPNMKB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECMFJFPNMKB_LLEJNCMCFCL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LDEFEKIJKLL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LDEFEKIJKLL&, ::System::Int32&))((::PBYTE)hIl2Cpp + ECMFJFPNMKB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
