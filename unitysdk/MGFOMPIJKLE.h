#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LFDJNJBKOIG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MGFOMPIJKLE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MGFOMPIJKLE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81DD90)
#define MGFOMPIJKLE_DADAILFGPBP_1_OFFSET UNITYSDK_OFFSET(0x1BF5E9E0)
#define MGFOMPIJKLE_DADAILFGPBP_OFFSET UNITYSDK_OFFSET(0x1BF5E8E0)
#define MGFOMPIJKLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MGFOMPIJKLE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MGFOMPIJKLE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81DD80)
#define MGFOMPIJKLE___INIT_OFFSET UNITYSDK_OFFSET(0x81DD60)

inline static constexpr unsigned int MGFOMPIJKLE_TypeDefinitionIndex = 11555;

struct alignas(8) MGFOMPIJKLE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFOMPIJKLE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGFOMPIJKLE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MGFOMPIJKLE DADAILFGPBP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MGFOMPIJKLE EIFONLCJOPG)
	{
		return ((::MGFOMPIJKLE(*)(::FlatBuffers::ByteBuffer*, ::MGFOMPIJKLE))((::PBYTE)hIl2Cpp + MGFOMPIJKLE_DADAILFGPBP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFOMPIJKLE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MGFOMPIJKLE DADAILFGPBP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MGFOMPIJKLE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGFOMPIJKLE_DADAILFGPBP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LFDJNJBKOIG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LFDJNJBKOIG&))((::PBYTE)hIl2Cpp + MGFOMPIJKLE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFOMPIJKLE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::MGFOMPIJKLE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MGFOMPIJKLE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGFOMPIJKLE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
