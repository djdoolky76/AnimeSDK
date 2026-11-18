#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LOAILIPINKG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GAPFKECOEHC_ANGAAOIANNA_1_OFFSET UNITYSDK_OFFSET(0x18B9FA20)
#define GAPFKECOEHC_ANGAAOIANNA_OFFSET UNITYSDK_OFFSET(0x18B9F880)
#define GAPFKECOEHC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GAPFKECOEHC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D45F0)
#define GAPFKECOEHC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GAPFKECOEHC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GAPFKECOEHC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D4630)
#define GAPFKECOEHC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D45E0)
#define GAPFKECOEHC___INIT_OFFSET UNITYSDK_OFFSET(0x7D45C0)

inline static constexpr unsigned int GAPFKECOEHC_TypeDefinitionIndex = 12427;

struct alignas(8) GAPFKECOEHC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPFKECOEHC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GAPFKECOEHC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GAPFKECOEHC ANGAAOIANNA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GAPFKECOEHC EIFONLCJOPG)
	{
		return ((::GAPFKECOEHC(*)(::FlatBuffers::ByteBuffer*, ::GAPFKECOEHC))((::PBYTE)hIl2Cpp + GAPFKECOEHC_ANGAAOIANNA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPFKECOEHC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LOAILIPINKG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LOAILIPINKG&))((::PBYTE)hIl2Cpp + GAPFKECOEHC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPFKECOEHC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::GAPFKECOEHC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GAPFKECOEHC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GAPFKECOEHC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GAPFKECOEHC ANGAAOIANNA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GAPFKECOEHC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GAPFKECOEHC_ANGAAOIANNA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LOAILIPINKG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LOAILIPINKG&, ::System::Int32&))((::PBYTE)hIl2Cpp + GAPFKECOEHC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
