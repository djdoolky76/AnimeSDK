#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LODGBKPFOIF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CMHHNCCMMNA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CMHHNCCMMNA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D0990)
#define CMHHNCCMMNA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CMHHNCCMMNA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CMHHNCCMMNA_GHOJNMLIEAH_1_OFFSET UNITYSDK_OFFSET(0x1878D800)
#define CMHHNCCMMNA_GHOJNMLIEAH_OFFSET UNITYSDK_OFFSET(0x1878D790)
#define CMHHNCCMMNA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D0980)
#define CMHHNCCMMNA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D09D0)
#define CMHHNCCMMNA___INIT_OFFSET UNITYSDK_OFFSET(0x7D0960)

inline static constexpr unsigned int CMHHNCCMMNA_TypeDefinitionIndex = 16755;

struct alignas(8) CMHHNCCMMNA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHHNCCMMNA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMHHNCCMMNA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LODGBKPFOIF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LODGBKPFOIF&, ::System::Int32&))((::PBYTE)hIl2Cpp + CMHHNCCMMNA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::CMHHNCCMMNA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMHHNCCMMNA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMHHNCCMMNA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHHNCCMMNA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::CMHHNCCMMNA GHOJNMLIEAH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMHHNCCMMNA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMHHNCCMMNA_GHOJNMLIEAH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHHNCCMMNA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CMHHNCCMMNA GHOJNMLIEAH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CMHHNCCMMNA EIFONLCJOPG)
	{
		return ((::CMHHNCCMMNA(*)(::FlatBuffers::ByteBuffer*, ::CMHHNCCMMNA))((::PBYTE)hIl2Cpp + CMHHNCCMMNA_GHOJNMLIEAH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LODGBKPFOIF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LODGBKPFOIF&))((::PBYTE)hIl2Cpp + CMHHNCCMMNA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
