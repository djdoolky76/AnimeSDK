#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KLNMONAHJAN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D7050)
#define KLNMONAHJAN_EEHFEHBKAPI_1_OFFSET UNITYSDK_OFFSET(0x18DEAD10)
#define KLNMONAHJAN_EEHFEHBKAPI_OFFSET UNITYSDK_OFFSET(0x18DEAC70)
#define KLNMONAHJAN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KLNMONAHJAN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KLNMONAHJAN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D7040)
#define KLNMONAHJAN___INIT_OFFSET UNITYSDK_OFFSET(0x7D7020)

inline static constexpr unsigned int KLNMONAHJAN_TypeDefinitionIndex = 9860;

struct alignas(8) KLNMONAHJAN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNMONAHJAN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLNMONAHJAN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNMONAHJAN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KLNMONAHJAN EEHFEHBKAPI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KLNMONAHJAN EIFONLCJOPG)
	{
		return ((::KLNMONAHJAN(*)(::FlatBuffers::ByteBuffer*, ::KLNMONAHJAN))((::PBYTE)hIl2Cpp + KLNMONAHJAN_EEHFEHBKAPI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::KLNMONAHJAN EEHFEHBKAPI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KLNMONAHJAN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLNMONAHJAN_EEHFEHBKAPI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNMONAHJAN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::KLNMONAHJAN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KLNMONAHJAN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLNMONAHJAN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
