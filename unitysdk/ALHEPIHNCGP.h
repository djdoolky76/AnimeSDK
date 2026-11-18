#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HJDOHHCCCND.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ALHEPIHNCGP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ALHEPIHNCGP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8259F0)
#define ALHEPIHNCGP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ALHEPIHNCGP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ALHEPIHNCGP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x825A30)
#define ALHEPIHNCGP_PAPLAEBLFCE_1_OFFSET UNITYSDK_OFFSET(0x1C50AB20)
#define ALHEPIHNCGP_PAPLAEBLFCE_OFFSET UNITYSDK_OFFSET(0x1C50AAB0)
#define ALHEPIHNCGP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8259E0)
#define ALHEPIHNCGP___INIT_OFFSET UNITYSDK_OFFSET(0x8259C0)

inline static constexpr unsigned int ALHEPIHNCGP_TypeDefinitionIndex = 9706;

struct alignas(8) ALHEPIHNCGP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHEPIHNCGP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ALHEPIHNCGP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ALHEPIHNCGP PAPLAEBLFCE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ALHEPIHNCGP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ALHEPIHNCGP_PAPLAEBLFCE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::ALHEPIHNCGP PAPLAEBLFCE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ALHEPIHNCGP EIFONLCJOPG)
	{
		return ((::ALHEPIHNCGP(*)(::FlatBuffers::ByteBuffer*, ::ALHEPIHNCGP))((::PBYTE)hIl2Cpp + ALHEPIHNCGP_PAPLAEBLFCE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHEPIHNCGP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::ALHEPIHNCGP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ALHEPIHNCGP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ALHEPIHNCGP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HJDOHHCCCND& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HJDOHHCCCND&, ::System::Int32&))((::PBYTE)hIl2Cpp + ALHEPIHNCGP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HJDOHHCCCND& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HJDOHHCCCND&))((::PBYTE)hIl2Cpp + ALHEPIHNCGP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHEPIHNCGP_GHKKNCCLPAN_OFFSET))(this);
	}
};
