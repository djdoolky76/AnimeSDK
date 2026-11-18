#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KCCOHDNFMEJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KLGCCBHKKMI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KLGCCBHKKMI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x758C00)
#define KLGCCBHKKMI_BINKEOAGNLF_1_OFFSET UNITYSDK_OFFSET(0x15305AD0)
#define KLGCCBHKKMI_BINKEOAGNLF_OFFSET UNITYSDK_OFFSET(0x15305A60)
#define KLGCCBHKKMI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KLGCCBHKKMI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KLGCCBHKKMI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x758C40)
#define KLGCCBHKKMI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x758BF0)
#define KLGCCBHKKMI___INIT_OFFSET UNITYSDK_OFFSET(0x758BD0)

inline static constexpr unsigned int KLGCCBHKKMI_TypeDefinitionIndex = 15463;

struct alignas(8) KLGCCBHKKMI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGCCBHKKMI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLGCCBHKKMI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGCCBHKKMI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KLGCCBHKKMI BINKEOAGNLF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KLGCCBHKKMI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLGCCBHKKMI_BINKEOAGNLF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGCCBHKKMI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::KLGCCBHKKMI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KLGCCBHKKMI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLGCCBHKKMI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KCCOHDNFMEJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KCCOHDNFMEJ&))((::PBYTE)hIl2Cpp + KLGCCBHKKMI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KLGCCBHKKMI BINKEOAGNLF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KLGCCBHKKMI EIFONLCJOPG)
	{
		return ((::KLGCCBHKKMI(*)(::FlatBuffers::ByteBuffer*, ::KLGCCBHKKMI))((::PBYTE)hIl2Cpp + KLGCCBHKKMI_BINKEOAGNLF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KCCOHDNFMEJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KCCOHDNFMEJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + KLGCCBHKKMI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
