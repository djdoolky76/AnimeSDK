#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IONKMMOCFMM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GHLILLJOFJF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GHLILLJOFJF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D47E0)
#define GHLILLJOFJF_CDHPHHKHHDN_1_OFFSET UNITYSDK_OFFSET(0x18BA4310)
#define GHLILLJOFJF_CDHPHHKHHDN_OFFSET UNITYSDK_OFFSET(0x18BA4270)
#define GHLILLJOFJF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GHLILLJOFJF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GHLILLJOFJF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D47D0)
#define GHLILLJOFJF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D4820)
#define GHLILLJOFJF___INIT_OFFSET UNITYSDK_OFFSET(0x7D47B0)

inline static constexpr unsigned int GHLILLJOFJF_TypeDefinitionIndex = 11110;

struct alignas(8) GHLILLJOFJF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLILLJOFJF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHLILLJOFJF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IONKMMOCFMM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IONKMMOCFMM&, ::System::Int32&))((::PBYTE)hIl2Cpp + GHLILLJOFJF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::GHLILLJOFJF CDHPHHKHHDN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GHLILLJOFJF EIFONLCJOPG)
	{
		return ((::GHLILLJOFJF(*)(::FlatBuffers::ByteBuffer*, ::GHLILLJOFJF))((::PBYTE)hIl2Cpp + GHLILLJOFJF_CDHPHHKHHDN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IONKMMOCFMM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IONKMMOCFMM&))((::PBYTE)hIl2Cpp + GHLILLJOFJF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::GHLILLJOFJF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GHLILLJOFJF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHLILLJOFJF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GHLILLJOFJF CDHPHHKHHDN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GHLILLJOFJF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHLILLJOFJF_CDHPHHKHHDN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLILLJOFJF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLILLJOFJF_GHKKNCCLPAN_OFFSET))(this);
	}
};
