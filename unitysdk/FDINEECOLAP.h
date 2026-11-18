#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EGFJBMBJBMK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FDINEECOLAP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FDINEECOLAP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8178D0)
#define FDINEECOLAP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FDINEECOLAP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FDINEECOLAP_JPACFDEJAPI_1_OFFSET UNITYSDK_OFFSET(0x1B9C1DF0)
#define FDINEECOLAP_JPACFDEJAPI_OFFSET UNITYSDK_OFFSET(0x1B9C1D30)
#define FDINEECOLAP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x817920)
#define FDINEECOLAP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x817910)
#define FDINEECOLAP___INIT_OFFSET UNITYSDK_OFFSET(0x8178B0)

inline static constexpr unsigned int FDINEECOLAP_TypeDefinitionIndex = 17400;

struct alignas(8) FDINEECOLAP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDINEECOLAP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDINEECOLAP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FDINEECOLAP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FDINEECOLAP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDINEECOLAP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EGFJBMBJBMK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EGFJBMBJBMK&))((::PBYTE)hIl2Cpp + FDINEECOLAP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FDINEECOLAP JPACFDEJAPI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FDINEECOLAP EIFONLCJOPG)
	{
		return ((::FDINEECOLAP(*)(::FlatBuffers::ByteBuffer*, ::FDINEECOLAP))((::PBYTE)hIl2Cpp + FDINEECOLAP_JPACFDEJAPI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDINEECOLAP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::FDINEECOLAP JPACFDEJAPI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FDINEECOLAP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDINEECOLAP_JPACFDEJAPI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDINEECOLAP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EGFJBMBJBMK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EGFJBMBJBMK&, ::System::Int32&))((::PBYTE)hIl2Cpp + FDINEECOLAP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
