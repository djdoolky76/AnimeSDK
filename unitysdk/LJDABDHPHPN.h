#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HFPAOFLECHA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LJDABDHPHPN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LJDABDHPHPN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x819BF0)
#define LJDABDHPHPN_CFJCNPPIENF_1_OFFSET UNITYSDK_OFFSET(0x1BA88E10)
#define LJDABDHPHPN_CFJCNPPIENF_OFFSET UNITYSDK_OFFSET(0x1BA88DA0)
#define LJDABDHPHPN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LJDABDHPHPN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LJDABDHPHPN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x819C30)
#define LJDABDHPHPN___INIT_OFFSET UNITYSDK_OFFSET(0x819BD0)

inline static constexpr unsigned int LJDABDHPHPN_TypeDefinitionIndex = 17565;

struct alignas(8) LJDABDHPHPN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDABDHPHPN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJDABDHPHPN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDABDHPHPN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LJDABDHPHPN CFJCNPPIENF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LJDABDHPHPN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJDABDHPHPN_CFJCNPPIENF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::LJDABDHPHPN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LJDABDHPHPN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJDABDHPHPN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDABDHPHPN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LJDABDHPHPN CFJCNPPIENF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LJDABDHPHPN EIFONLCJOPG)
	{
		return ((::LJDABDHPHPN(*)(::FlatBuffers::ByteBuffer*, ::LJDABDHPHPN))((::PBYTE)hIl2Cpp + LJDABDHPHPN_CFJCNPPIENF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HFPAOFLECHA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HFPAOFLECHA&))((::PBYTE)hIl2Cpp + LJDABDHPHPN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
