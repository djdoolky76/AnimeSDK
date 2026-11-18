#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NOGBAPBJDPK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CDCEEGKDINL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CDCEEGKDINL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F5170)
#define CDCEEGKDINL_CBEOFDNFPMD_1_OFFSET UNITYSDK_OFFSET(0x1A179270)
#define CDCEEGKDINL_CBEOFDNFPMD_OFFSET UNITYSDK_OFFSET(0x1A179200)
#define CDCEEGKDINL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CDCEEGKDINL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CDCEEGKDINL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F51B0)
#define CDCEEGKDINL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F5160)
#define CDCEEGKDINL___INIT_OFFSET UNITYSDK_OFFSET(0x7F5140)

inline static constexpr unsigned int CDCEEGKDINL_TypeDefinitionIndex = 14069;

struct alignas(8) CDCEEGKDINL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCEEGKDINL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDCEEGKDINL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCEEGKDINL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CDCEEGKDINL CBEOFDNFPMD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CDCEEGKDINL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDCEEGKDINL_CBEOFDNFPMD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::CDCEEGKDINL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CDCEEGKDINL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDCEEGKDINL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CDCEEGKDINL CBEOFDNFPMD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CDCEEGKDINL EIFONLCJOPG)
	{
		return ((::CDCEEGKDINL(*)(::FlatBuffers::ByteBuffer*, ::CDCEEGKDINL))((::PBYTE)hIl2Cpp + CDCEEGKDINL_CBEOFDNFPMD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NOGBAPBJDPK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NOGBAPBJDPK&))((::PBYTE)hIl2Cpp + CDCEEGKDINL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NOGBAPBJDPK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NOGBAPBJDPK&, ::System::Int32&))((::PBYTE)hIl2Cpp + CDCEEGKDINL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCEEGKDINL_GHKKNCCLPAN_OFFSET))(this);
	}
};
