#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNIPPPIOBKA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81A2A0)
#define MNIPPPIOBKA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MNIPPPIOBKA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MNIPPPIOBKA_HKDBLFJODAM_1_OFFSET UNITYSDK_OFFSET(0x1BA9F780)
#define MNIPPPIOBKA_HKDBLFJODAM_OFFSET UNITYSDK_OFFSET(0x1BA9F710)
#define MNIPPPIOBKA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81A2E0)
#define MNIPPPIOBKA___INIT_OFFSET UNITYSDK_OFFSET(0x81A280)

inline static constexpr unsigned int MNIPPPIOBKA_TypeDefinitionIndex = 15488;

struct alignas(8) MNIPPPIOBKA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIPPPIOBKA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNIPPPIOBKA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MNIPPPIOBKA HKDBLFJODAM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MNIPPPIOBKA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNIPPPIOBKA_HKDBLFJODAM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::MNIPPPIOBKA HKDBLFJODAM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MNIPPPIOBKA EIFONLCJOPG)
	{
		return ((::MNIPPPIOBKA(*)(::FlatBuffers::ByteBuffer*, ::MNIPPPIOBKA))((::PBYTE)hIl2Cpp + MNIPPPIOBKA_HKDBLFJODAM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::MNIPPPIOBKA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MNIPPPIOBKA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNIPPPIOBKA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIPPPIOBKA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIPPPIOBKA_GHKKNCCLPAN_OFFSET))(this);
	}
};
