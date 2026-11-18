#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JPENFPIAOON.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AMNKOPKNMLC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AMNKOPKNMLC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F9470)
#define AMNKOPKNMLC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AMNKOPKNMLC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AMNKOPKNMLC_IJGPKGODFLF_1_OFFSET UNITYSDK_OFFSET(0x1A525090)
#define AMNKOPKNMLC_IJGPKGODFLF_OFFSET UNITYSDK_OFFSET(0x1A525020)
#define AMNKOPKNMLC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F9450)
#define AMNKOPKNMLC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F9460)
#define AMNKOPKNMLC___INIT_OFFSET UNITYSDK_OFFSET(0x7F9430)

inline static constexpr unsigned int AMNKOPKNMLC_TypeDefinitionIndex = 11646;

struct alignas(8) AMNKOPKNMLC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNKOPKNMLC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMNKOPKNMLC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JPENFPIAOON& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JPENFPIAOON&, ::System::Int32&))((::PBYTE)hIl2Cpp + AMNKOPKNMLC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNKOPKNMLC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JPENFPIAOON& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JPENFPIAOON&))((::PBYTE)hIl2Cpp + AMNKOPKNMLC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNKOPKNMLC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::AMNKOPKNMLC IJGPKGODFLF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AMNKOPKNMLC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMNKOPKNMLC_IJGPKGODFLF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::AMNKOPKNMLC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AMNKOPKNMLC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMNKOPKNMLC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AMNKOPKNMLC IJGPKGODFLF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AMNKOPKNMLC EIFONLCJOPG)
	{
		return ((::AMNKOPKNMLC(*)(::FlatBuffers::ByteBuffer*, ::AMNKOPKNMLC))((::PBYTE)hIl2Cpp + AMNKOPKNMLC_IJGPKGODFLF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
