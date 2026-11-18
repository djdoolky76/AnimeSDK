#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DPCMCPOMJKL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FMDDLFMNFMD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FMDDLFMNFMD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x755B60)
#define FMDDLFMNFMD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FMDDLFMNFMD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FMDDLFMNFMD_KPBAPJPNBGD_1_OFFSET UNITYSDK_OFFSET(0x152C5C20)
#define FMDDLFMNFMD_KPBAPJPNBGD_OFFSET UNITYSDK_OFFSET(0x152C5AC0)
#define FMDDLFMNFMD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x755BA0)
#define FMDDLFMNFMD___INIT_OFFSET UNITYSDK_OFFSET(0x755B40)

inline static constexpr unsigned int FMDDLFMNFMD_TypeDefinitionIndex = 13878;

struct alignas(8) FMDDLFMNFMD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDDLFMNFMD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMDDLFMNFMD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FMDDLFMNFMD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMDDLFMNFMD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMDDLFMNFMD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FMDDLFMNFMD KPBAPJPNBGD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FMDDLFMNFMD EIFONLCJOPG)
	{
		return ((::FMDDLFMNFMD(*)(::FlatBuffers::ByteBuffer*, ::FMDDLFMNFMD))((::PBYTE)hIl2Cpp + FMDDLFMNFMD_KPBAPJPNBGD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DPCMCPOMJKL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DPCMCPOMJKL&))((::PBYTE)hIl2Cpp + FMDDLFMNFMD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDDLFMNFMD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FMDDLFMNFMD KPBAPJPNBGD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMDDLFMNFMD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMDDLFMNFMD_KPBAPJPNBGD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDDLFMNFMD_PPOMNIFACOL_OFFSET))(this);
	}
};
