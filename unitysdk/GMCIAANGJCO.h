#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OLKPENDFONE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GMCIAANGJCO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GMCIAANGJCO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x78B180)
#define GMCIAANGJCO_BKLIFFCKIHD_1_OFFSET UNITYSDK_OFFSET(0x1664F0B0)
#define GMCIAANGJCO_BKLIFFCKIHD_OFFSET UNITYSDK_OFFSET(0x1664F040)
#define GMCIAANGJCO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GMCIAANGJCO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GMCIAANGJCO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x78B160)
#define GMCIAANGJCO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x78B170)
#define GMCIAANGJCO___INIT_OFFSET UNITYSDK_OFFSET(0x78B140)

inline static constexpr unsigned int GMCIAANGJCO_TypeDefinitionIndex = 17202;

struct alignas(8) GMCIAANGJCO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCIAANGJCO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GMCIAANGJCO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OLKPENDFONE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OLKPENDFONE&, ::System::Int32&))((::PBYTE)hIl2Cpp + GMCIAANGJCO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCIAANGJCO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OLKPENDFONE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OLKPENDFONE&))((::PBYTE)hIl2Cpp + GMCIAANGJCO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GMCIAANGJCO BKLIFFCKIHD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GMCIAANGJCO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GMCIAANGJCO_BKLIFFCKIHD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::GMCIAANGJCO BKLIFFCKIHD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GMCIAANGJCO EIFONLCJOPG)
	{
		return ((::GMCIAANGJCO(*)(::FlatBuffers::ByteBuffer*, ::GMCIAANGJCO))((::PBYTE)hIl2Cpp + GMCIAANGJCO_BKLIFFCKIHD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::GMCIAANGJCO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GMCIAANGJCO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GMCIAANGJCO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCIAANGJCO_GHKKNCCLPAN_OFFSET))(this);
	}
};
