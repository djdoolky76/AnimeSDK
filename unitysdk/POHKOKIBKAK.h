#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define POHKOKIBKAK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x821300)
#define POHKOKIBKAK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define POHKOKIBKAK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define POHKOKIBKAK_NHMIMNNEJPA_1_OFFSET UNITYSDK_OFFSET(0x1C1B5080)
#define POHKOKIBKAK_NHMIMNNEJPA_OFFSET UNITYSDK_OFFSET(0x1C1B5010)
#define POHKOKIBKAK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8212F0)
#define POHKOKIBKAK___INIT_OFFSET UNITYSDK_OFFSET(0x8212D0)

inline static constexpr unsigned int POHKOKIBKAK_TypeDefinitionIndex = 16388;

struct alignas(8) POHKOKIBKAK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHKOKIBKAK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POHKOKIBKAK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POHKOKIBKAK_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHKOKIBKAK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::POHKOKIBKAK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POHKOKIBKAK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POHKOKIBKAK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::POHKOKIBKAK NHMIMNNEJPA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POHKOKIBKAK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POHKOKIBKAK_NHMIMNNEJPA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::POHKOKIBKAK NHMIMNNEJPA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::POHKOKIBKAK EIFONLCJOPG)
	{
		return ((::POHKOKIBKAK(*)(::FlatBuffers::ByteBuffer*, ::POHKOKIBKAK))((::PBYTE)hIl2Cpp + POHKOKIBKAK_NHMIMNNEJPA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
