#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LJHCCPIJLHJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPGICCAMMKL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NPGICCAMMKL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AB440)
#define NPGICCAMMKL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NPGICCAMMKL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NPGICCAMMKL_JLNFBHDDJNN_1_OFFSET UNITYSDK_OFFSET(0x1CFF01E0)
#define NPGICCAMMKL_JLNFBHDDJNN_OFFSET UNITYSDK_OFFSET(0x1CFF0180)
#define NPGICCAMMKL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AB430)
#define NPGICCAMMKL___INIT_OFFSET UNITYSDK_OFFSET(0x8AB410)

inline static constexpr unsigned int NPGICCAMMKL_TypeDefinitionIndex = 12769;

struct alignas(8) NPGICCAMMKL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGICCAMMKL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPGICCAMMKL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGICCAMMKL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LJHCCPIJLHJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LJHCCPIJLHJ&))((::PBYTE)hIl2Cpp + NPGICCAMMKL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::NPGICCAMMKL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NPGICCAMMKL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPGICCAMMKL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NPGICCAMMKL JLNFBHDDJNN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NPGICCAMMKL EIFONLCJOPG)
	{
		return ((::NPGICCAMMKL(*)(::FlatBuffers::ByteBuffer*, ::NPGICCAMMKL))((::PBYTE)hIl2Cpp + NPGICCAMMKL_JLNFBHDDJNN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::NPGICCAMMKL JLNFBHDDJNN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NPGICCAMMKL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPGICCAMMKL_JLNFBHDDJNN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGICCAMMKL_GHKKNCCLPAN_OFFSET))(this);
	}
};
