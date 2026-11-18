#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MDJEKAPDEKJ.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IJKKEDINKNH_AHJDFENEGHB_1_OFFSET UNITYSDK_OFFSET(0x18BBD790)
#define IJKKEDINKNH_AHJDFENEGHB_OFFSET UNITYSDK_OFFSET(0x18BBD720)
#define IJKKEDINKNH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D5160)
#define IJKKEDINKNH_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define IJKKEDINKNH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IJKKEDINKNH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IJKKEDINKNH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D51A0)
#define IJKKEDINKNH___INIT_OFFSET UNITYSDK_OFFSET(0x7D5140)

inline static constexpr unsigned int IJKKEDINKNH_TypeDefinitionIndex = 13941;

struct alignas(8) IJKKEDINKNH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKKEDINKNH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJKKEDINKNH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Nullable_1<::MDJEKAPDEKJ> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::MDJEKAPDEKJ>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IJKKEDINKNH_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}

	/*
	::IJKKEDINKNH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IJKKEDINKNH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJKKEDINKNH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IJKKEDINKNH AHJDFENEGHB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IJKKEDINKNH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJKKEDINKNH_AHJDFENEGHB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::IJKKEDINKNH AHJDFENEGHB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IJKKEDINKNH EIFONLCJOPG)
	{
		return ((::IJKKEDINKNH(*)(::FlatBuffers::ByteBuffer*, ::IJKKEDINKNH))((::PBYTE)hIl2Cpp + IJKKEDINKNH_AHJDFENEGHB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKKEDINKNH_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKKEDINKNH_PPOMNIFACOL_OFFSET))(this);
	}
};
