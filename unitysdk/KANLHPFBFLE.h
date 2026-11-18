#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JPGNPOPEGJP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KANLHPFBFLE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KANLHPFBFLE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80E9D0)
#define KANLHPFBFLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KANLHPFBFLE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KANLHPFBFLE_HBNDCNHFMAL_1_OFFSET UNITYSDK_OFFSET(0x1B4FED40)
#define KANLHPFBFLE_HBNDCNHFMAL_OFFSET UNITYSDK_OFFSET(0x1B4FECD0)
#define KANLHPFBFLE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80EA10)
#define KANLHPFBFLE___INIT_OFFSET UNITYSDK_OFFSET(0x80E9B0)

inline static constexpr unsigned int KANLHPFBFLE_TypeDefinitionIndex = 11376;

struct alignas(8) KANLHPFBFLE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KANLHPFBFLE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KANLHPFBFLE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KANLHPFBFLE HBNDCNHFMAL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KANLHPFBFLE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KANLHPFBFLE_HBNDCNHFMAL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JPGNPOPEGJP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JPGNPOPEGJP&))((::PBYTE)hIl2Cpp + KANLHPFBFLE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KANLHPFBFLE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::KANLHPFBFLE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KANLHPFBFLE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KANLHPFBFLE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KANLHPFBFLE HBNDCNHFMAL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KANLHPFBFLE EIFONLCJOPG)
	{
		return ((::KANLHPFBFLE(*)(::FlatBuffers::ByteBuffer*, ::KANLHPFBFLE))((::PBYTE)hIl2Cpp + KANLHPFBFLE_HBNDCNHFMAL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KANLHPFBFLE_PPOMNIFACOL_OFFSET))(this);
	}
};
