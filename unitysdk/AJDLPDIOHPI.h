#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NAGKOLBCGHP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AJDLPDIOHPI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AJDLPDIOHPI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8160C0)
#define AJDLPDIOHPI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AJDLPDIOHPI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AJDLPDIOHPI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8160B0)
#define AJDLPDIOHPI_MALKKEFKLED_1_OFFSET UNITYSDK_OFFSET(0x1B987430)
#define AJDLPDIOHPI_MALKKEFKLED_OFFSET UNITYSDK_OFFSET(0x1B987190)
#define AJDLPDIOHPI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8160A0)
#define AJDLPDIOHPI___INIT_OFFSET UNITYSDK_OFFSET(0x816080)

inline static constexpr unsigned int AJDLPDIOHPI_TypeDefinitionIndex = 9268;

struct alignas(8) AJDLPDIOHPI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDLPDIOHPI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJDLPDIOHPI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDLPDIOHPI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::AJDLPDIOHPI MALKKEFKLED(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AJDLPDIOHPI EIFONLCJOPG)
	{
		return ((::AJDLPDIOHPI(*)(::FlatBuffers::ByteBuffer*, ::AJDLPDIOHPI))((::PBYTE)hIl2Cpp + AJDLPDIOHPI_MALKKEFKLED_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NAGKOLBCGHP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NAGKOLBCGHP&, ::System::Int32&))((::PBYTE)hIl2Cpp + AJDLPDIOHPI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::AJDLPDIOHPI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AJDLPDIOHPI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJDLPDIOHPI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDLPDIOHPI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::AJDLPDIOHPI MALKKEFKLED_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AJDLPDIOHPI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJDLPDIOHPI_MALKKEFKLED_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NAGKOLBCGHP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NAGKOLBCGHP&))((::PBYTE)hIl2Cpp + AJDLPDIOHPI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
