#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PJNOBFGDEAP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CMPHPGIADGC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CMPHPGIADGC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F9E60)
#define CMPHPGIADGC_CLLHABBBLNG_1_OFFSET UNITYSDK_OFFSET(0x1A5494A0)
#define CMPHPGIADGC_CLLHABBBLNG_OFFSET UNITYSDK_OFFSET(0x1A549440)
#define CMPHPGIADGC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CMPHPGIADGC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CMPHPGIADGC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F9EB0)
#define CMPHPGIADGC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F9EA0)
#define CMPHPGIADGC___INIT_OFFSET UNITYSDK_OFFSET(0x7F9E40)

inline static constexpr unsigned int CMPHPGIADGC_TypeDefinitionIndex = 15775;

struct alignas(8) CMPHPGIADGC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPHPGIADGC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMPHPGIADGC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PJNOBFGDEAP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PJNOBFGDEAP&))((::PBYTE)hIl2Cpp + CMPHPGIADGC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::CMPHPGIADGC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMPHPGIADGC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMPHPGIADGC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPHPGIADGC_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPHPGIADGC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CMPHPGIADGC CLLHABBBLNG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CMPHPGIADGC EIFONLCJOPG)
	{
		return ((::CMPHPGIADGC(*)(::FlatBuffers::ByteBuffer*, ::CMPHPGIADGC))((::PBYTE)hIl2Cpp + CMPHPGIADGC_CLLHABBBLNG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::CMPHPGIADGC CLLHABBBLNG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMPHPGIADGC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMPHPGIADGC_CLLHABBBLNG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PJNOBFGDEAP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PJNOBFGDEAP&, ::System::Int32&))((::PBYTE)hIl2Cpp + CMPHPGIADGC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
