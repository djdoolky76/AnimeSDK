#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AJAOPPLDCMA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DNEPNANIFKC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DNEPNANIFKC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EAA10)
#define DNEPNANIFKC_BHINBHCEMOE_1_OFFSET UNITYSDK_OFFSET(0x19ADFEA0)
#define DNEPNANIFKC_BHINBHCEMOE_OFFSET UNITYSDK_OFFSET(0x19ADFE40)
#define DNEPNANIFKC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DNEPNANIFKC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DNEPNANIFKC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EAA00)
#define DNEPNANIFKC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EAA50)
#define DNEPNANIFKC___INIT_OFFSET UNITYSDK_OFFSET(0x7EA9E0)

inline static constexpr unsigned int DNEPNANIFKC_TypeDefinitionIndex = 9928;

struct alignas(8) DNEPNANIFKC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEPNANIFKC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNEPNANIFKC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEPNANIFKC_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AJAOPPLDCMA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AJAOPPLDCMA&, ::System::Int32&))((::PBYTE)hIl2Cpp + DNEPNANIFKC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::DNEPNANIFKC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DNEPNANIFKC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNEPNANIFKC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEPNANIFKC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AJAOPPLDCMA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AJAOPPLDCMA&))((::PBYTE)hIl2Cpp + DNEPNANIFKC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DNEPNANIFKC BHINBHCEMOE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DNEPNANIFKC EIFONLCJOPG)
	{
		return ((::DNEPNANIFKC(*)(::FlatBuffers::ByteBuffer*, ::DNEPNANIFKC))((::PBYTE)hIl2Cpp + DNEPNANIFKC_BHINBHCEMOE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::DNEPNANIFKC BHINBHCEMOE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DNEPNANIFKC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNEPNANIFKC_BHINBHCEMOE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
