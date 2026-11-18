#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LHCOLPDKKNN_BGMPNNOGHKL_1_OFFSET UNITYSDK_OFFSET(0x1958E890)
#define LHCOLPDKKNN_BGMPNNOGHKL_OFFSET UNITYSDK_OFFSET(0x1958E820)
#define LHCOLPDKKNN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E60A0)
#define LHCOLPDKKNN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LHCOLPDKKNN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LHCOLPDKKNN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E60E0)
#define LHCOLPDKKNN___INIT_OFFSET UNITYSDK_OFFSET(0x7E6080)

inline static constexpr unsigned int LHCOLPDKKNN_TypeDefinitionIndex = 10278;

struct alignas(8) LHCOLPDKKNN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCOLPDKKNN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHCOLPDKKNN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LHCOLPDKKNN BGMPNNOGHKL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LHCOLPDKKNN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHCOLPDKKNN_BGMPNNOGHKL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::LHCOLPDKKNN BGMPNNOGHKL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LHCOLPDKKNN EIFONLCJOPG)
	{
		return ((::LHCOLPDKKNN(*)(::FlatBuffers::ByteBuffer*, ::LHCOLPDKKNN))((::PBYTE)hIl2Cpp + LHCOLPDKKNN_BGMPNNOGHKL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCOLPDKKNN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::LHCOLPDKKNN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LHCOLPDKKNN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHCOLPDKKNN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCOLPDKKNN_PPOMNIFACOL_OFFSET))(this);
	}
};
