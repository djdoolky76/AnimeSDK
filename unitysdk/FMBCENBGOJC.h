#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KKMAOECECLK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FMBCENBGOJC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FMBCENBGOJC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F7C30)
#define FMBCENBGOJC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FMBCENBGOJC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FMBCENBGOJC_HKOIIIGEFFJ_1_OFFSET UNITYSDK_OFFSET(0x1A4CA050)
#define FMBCENBGOJC_HKOIIIGEFFJ_OFFSET UNITYSDK_OFFSET(0x1A4C9FE0)
#define FMBCENBGOJC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F7C70)
#define FMBCENBGOJC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F7C20)
#define FMBCENBGOJC___INIT_OFFSET UNITYSDK_OFFSET(0x7F7C00)

inline static constexpr unsigned int FMBCENBGOJC_TypeDefinitionIndex = 9667;

struct alignas(8) FMBCENBGOJC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBCENBGOJC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMBCENBGOJC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBCENBGOJC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KKMAOECECLK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KKMAOECECLK&))((::PBYTE)hIl2Cpp + FMBCENBGOJC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBCENBGOJC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::FMBCENBGOJC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMBCENBGOJC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMBCENBGOJC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KKMAOECECLK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KKMAOECECLK&, ::System::Int32&))((::PBYTE)hIl2Cpp + FMBCENBGOJC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::FMBCENBGOJC HKOIIIGEFFJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMBCENBGOJC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMBCENBGOJC_HKOIIIGEFFJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::FMBCENBGOJC HKOIIIGEFFJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FMBCENBGOJC EIFONLCJOPG)
	{
		return ((::FMBCENBGOJC(*)(::FlatBuffers::ByteBuffer*, ::FMBCENBGOJC))((::PBYTE)hIl2Cpp + FMBCENBGOJC_HKOIIIGEFFJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
