#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AJNOKMNMDFD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MKELOIDMIKD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MKELOIDMIKD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E6530)
#define MKELOIDMIKD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MKELOIDMIKD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MKELOIDMIKD_LHDOMIKFNMN_1_OFFSET UNITYSDK_OFFSET(0x195A6190)
#define MKELOIDMIKD_LHDOMIKFNMN_OFFSET UNITYSDK_OFFSET(0x195A6130)
#define MKELOIDMIKD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E6520)
#define MKELOIDMIKD___INIT_OFFSET UNITYSDK_OFFSET(0x7E6500)

inline static constexpr unsigned int MKELOIDMIKD_TypeDefinitionIndex = 13631;

struct alignas(8) MKELOIDMIKD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKELOIDMIKD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKELOIDMIKD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKELOIDMIKD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::MKELOIDMIKD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKELOIDMIKD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKELOIDMIKD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKELOIDMIKD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MKELOIDMIKD LHDOMIKFNMN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MKELOIDMIKD EIFONLCJOPG)
	{
		return ((::MKELOIDMIKD(*)(::FlatBuffers::ByteBuffer*, ::MKELOIDMIKD))((::PBYTE)hIl2Cpp + MKELOIDMIKD_LHDOMIKFNMN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::MKELOIDMIKD LHDOMIKFNMN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKELOIDMIKD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKELOIDMIKD_LHDOMIKFNMN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AJNOKMNMDFD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AJNOKMNMDFD&))((::PBYTE)hIl2Cpp + MKELOIDMIKD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
