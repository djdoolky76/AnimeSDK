#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MCIBBLHEPPE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JICJBFNOBCC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JICJBFNOBCC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81C120)
#define JICJBFNOBCC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JICJBFNOBCC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JICJBFNOBCC_LADOMODLFOM_1_OFFSET UNITYSDK_OFFSET(0x1BAF8360)
#define JICJBFNOBCC_LADOMODLFOM_OFFSET UNITYSDK_OFFSET(0x1BAF82F0)
#define JICJBFNOBCC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81C110)
#define JICJBFNOBCC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81C160)
#define JICJBFNOBCC___INIT_OFFSET UNITYSDK_OFFSET(0x81C0F0)

inline static constexpr unsigned int JICJBFNOBCC_TypeDefinitionIndex = 17221;

struct alignas(8) JICJBFNOBCC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JICJBFNOBCC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JICJBFNOBCC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JICJBFNOBCC LADOMODLFOM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JICJBFNOBCC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JICJBFNOBCC_LADOMODLFOM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MCIBBLHEPPE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MCIBBLHEPPE&))((::PBYTE)hIl2Cpp + JICJBFNOBCC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MCIBBLHEPPE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MCIBBLHEPPE&, ::System::Int32&))((::PBYTE)hIl2Cpp + JICJBFNOBCC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::JICJBFNOBCC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JICJBFNOBCC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JICJBFNOBCC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JICJBFNOBCC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JICJBFNOBCC LADOMODLFOM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JICJBFNOBCC EIFONLCJOPG)
	{
		return ((::JICJBFNOBCC(*)(::FlatBuffers::ByteBuffer*, ::JICJBFNOBCC))((::PBYTE)hIl2Cpp + JICJBFNOBCC_LADOMODLFOM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JICJBFNOBCC_GHKKNCCLPAN_OFFSET))(this);
	}
};
