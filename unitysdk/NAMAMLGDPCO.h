#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ANIKDIFFHFK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAMAMLGDPCO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NAMAMLGDPCO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AEF20)
#define NAMAMLGDPCO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NAMAMLGDPCO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NAMAMLGDPCO_IAFBKOOKFJG_1_OFFSET UNITYSDK_OFFSET(0x1D0BF840)
#define NAMAMLGDPCO_IAFBKOOKFJG_OFFSET UNITYSDK_OFFSET(0x1D0BF700)
#define NAMAMLGDPCO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AEF10)
#define NAMAMLGDPCO___INIT_OFFSET UNITYSDK_OFFSET(0x8AEEF0)

inline static constexpr unsigned int NAMAMLGDPCO_TypeDefinitionIndex = 15777;

struct alignas(8) NAMAMLGDPCO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMAMLGDPCO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NAMAMLGDPCO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMAMLGDPCO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NAMAMLGDPCO IAFBKOOKFJG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NAMAMLGDPCO EIFONLCJOPG)
	{
		return ((::NAMAMLGDPCO(*)(::FlatBuffers::ByteBuffer*, ::NAMAMLGDPCO))((::PBYTE)hIl2Cpp + NAMAMLGDPCO_IAFBKOOKFJG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::NAMAMLGDPCO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NAMAMLGDPCO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NAMAMLGDPCO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ANIKDIFFHFK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ANIKDIFFHFK&))((::PBYTE)hIl2Cpp + NAMAMLGDPCO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::NAMAMLGDPCO IAFBKOOKFJG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NAMAMLGDPCO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NAMAMLGDPCO_IAFBKOOKFJG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMAMLGDPCO_GHKKNCCLPAN_OFFSET))(this);
	}
};
