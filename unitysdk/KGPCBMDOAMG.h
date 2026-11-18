#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ODAEEEDNNGG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KGPCBMDOAMG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KGPCBMDOAMG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x815550)
#define KGPCBMDOAMG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KGPCBMDOAMG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KGPCBMDOAMG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x815530)
#define KGPCBMDOAMG_OJJAFKCKPBH_1_OFFSET UNITYSDK_OFFSET(0x1B8A3320)
#define KGPCBMDOAMG_OJJAFKCKPBH_OFFSET UNITYSDK_OFFSET(0x1B8A32B0)
#define KGPCBMDOAMG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x815540)
#define KGPCBMDOAMG___INIT_OFFSET UNITYSDK_OFFSET(0x815510)

inline static constexpr unsigned int KGPCBMDOAMG_TypeDefinitionIndex = 11678;

struct alignas(8) KGPCBMDOAMG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPCBMDOAMG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGPCBMDOAMG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ODAEEEDNNGG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ODAEEEDNNGG&))((::PBYTE)hIl2Cpp + KGPCBMDOAMG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPCBMDOAMG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ODAEEEDNNGG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ODAEEEDNNGG&, ::System::Int32&))((::PBYTE)hIl2Cpp + KGPCBMDOAMG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPCBMDOAMG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::KGPCBMDOAMG OJJAFKCKPBH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KGPCBMDOAMG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGPCBMDOAMG_OJJAFKCKPBH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::KGPCBMDOAMG OJJAFKCKPBH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KGPCBMDOAMG EIFONLCJOPG)
	{
		return ((::KGPCBMDOAMG(*)(::FlatBuffers::ByteBuffer*, ::KGPCBMDOAMG))((::PBYTE)hIl2Cpp + KGPCBMDOAMG_OJJAFKCKPBH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::KGPCBMDOAMG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KGPCBMDOAMG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGPCBMDOAMG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
