#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AHLCEPFGHEF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ABFB0)
#define AHLCEPFGHEF_EKDAKGCMAKN_1_OFFSET UNITYSDK_OFFSET(0x17748150)
#define AHLCEPFGHEF_EKDAKGCMAKN_OFFSET UNITYSDK_OFFSET(0x177480E0)
#define AHLCEPFGHEF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AHLCEPFGHEF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AHLCEPFGHEF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ABFF0)
#define AHLCEPFGHEF___INIT_OFFSET UNITYSDK_OFFSET(0x7ABF90)

inline static constexpr unsigned int AHLCEPFGHEF_TypeDefinitionIndex = 11840;

struct alignas(8) AHLCEPFGHEF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLCEPFGHEF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHLCEPFGHEF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AHLCEPFGHEF EKDAKGCMAKN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AHLCEPFGHEF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHLCEPFGHEF_EKDAKGCMAKN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::AHLCEPFGHEF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AHLCEPFGHEF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHLCEPFGHEF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLCEPFGHEF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLCEPFGHEF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::AHLCEPFGHEF EKDAKGCMAKN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AHLCEPFGHEF EIFONLCJOPG)
	{
		return ((::AHLCEPFGHEF(*)(::FlatBuffers::ByteBuffer*, ::AHLCEPFGHEF))((::PBYTE)hIl2Cpp + AHLCEPFGHEF_EKDAKGCMAKN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
