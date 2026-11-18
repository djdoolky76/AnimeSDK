#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NDKCEPAJNDJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPCDPKMLFHG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DPCDPKMLFHG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B2630)
#define DPCDPKMLFHG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DPCDPKMLFHG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DPCDPKMLFHG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B2680)
#define DPCDPKMLFHG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B2670)
#define DPCDPKMLFHG_PPPLDJIPIAF_1_OFFSET UNITYSDK_OFFSET(0x17A9EE60)
#define DPCDPKMLFHG_PPPLDJIPIAF_OFFSET UNITYSDK_OFFSET(0x17A9ECC0)
#define DPCDPKMLFHG___INIT_OFFSET UNITYSDK_OFFSET(0x7B2610)

inline static constexpr unsigned int DPCDPKMLFHG_TypeDefinitionIndex = 16217;

struct alignas(8) DPCDPKMLFHG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCDPKMLFHG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPCDPKMLFHG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DPCDPKMLFHG PPPLDJIPIAF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DPCDPKMLFHG EIFONLCJOPG)
	{
		return ((::DPCDPKMLFHG(*)(::FlatBuffers::ByteBuffer*, ::DPCDPKMLFHG))((::PBYTE)hIl2Cpp + DPCDPKMLFHG_PPPLDJIPIAF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::DPCDPKMLFHG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPCDPKMLFHG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPCDPKMLFHG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NDKCEPAJNDJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NDKCEPAJNDJ&))((::PBYTE)hIl2Cpp + DPCDPKMLFHG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCDPKMLFHG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DPCDPKMLFHG PPPLDJIPIAF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPCDPKMLFHG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPCDPKMLFHG_PPPLDJIPIAF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCDPKMLFHG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NDKCEPAJNDJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NDKCEPAJNDJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + DPCDPKMLFHG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
