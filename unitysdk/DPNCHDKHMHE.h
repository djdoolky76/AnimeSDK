#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JCOOOLCKGLM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPNCHDKHMHE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DPNCHDKHMHE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x817270)
#define DPNCHDKHMHE_FCNBOOMGFAC_1_OFFSET UNITYSDK_OFFSET(0x1B9AF870)
#define DPNCHDKHMHE_FCNBOOMGFAC_OFFSET UNITYSDK_OFFSET(0x1B9AF5D0)
#define DPNCHDKHMHE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DPNCHDKHMHE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DPNCHDKHMHE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x817260)
#define DPNCHDKHMHE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8172B0)
#define DPNCHDKHMHE___INIT_OFFSET UNITYSDK_OFFSET(0x817240)

inline static constexpr unsigned int DPNCHDKHMHE_TypeDefinitionIndex = 12947;

struct alignas(8) DPNCHDKHMHE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNCHDKHMHE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPNCHDKHMHE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNCHDKHMHE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DPNCHDKHMHE FCNBOOMGFAC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DPNCHDKHMHE EIFONLCJOPG)
	{
		return ((::DPNCHDKHMHE(*)(::FlatBuffers::ByteBuffer*, ::DPNCHDKHMHE))((::PBYTE)hIl2Cpp + DPNCHDKHMHE_FCNBOOMGFAC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JCOOOLCKGLM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JCOOOLCKGLM&, ::System::Int32&))((::PBYTE)hIl2Cpp + DPNCHDKHMHE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::DPNCHDKHMHE FCNBOOMGFAC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPNCHDKHMHE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPNCHDKHMHE_FCNBOOMGFAC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JCOOOLCKGLM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JCOOOLCKGLM&))((::PBYTE)hIl2Cpp + DPNCHDKHMHE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::DPNCHDKHMHE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPNCHDKHMHE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPNCHDKHMHE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNCHDKHMHE_PPOMNIFACOL_OFFSET))(this);
	}
};
