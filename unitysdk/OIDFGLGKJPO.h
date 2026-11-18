#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OIDFGLGKJPO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8037A0)
#define OIDFGLGKJPO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OIDFGLGKJPO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OIDFGLGKJPO_MFAAIBOBNNE_1_OFFSET UNITYSDK_OFFSET(0x1AB31CA0)
#define OIDFGLGKJPO_MFAAIBOBNNE_OFFSET UNITYSDK_OFFSET(0x1AB31C30)
#define OIDFGLGKJPO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8037E0)
#define OIDFGLGKJPO___INIT_OFFSET UNITYSDK_OFFSET(0x803780)

inline static constexpr unsigned int OIDFGLGKJPO_TypeDefinitionIndex = 17754;

struct alignas(8) OIDFGLGKJPO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDFGLGKJPO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OIDFGLGKJPO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OIDFGLGKJPO MFAAIBOBNNE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OIDFGLGKJPO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OIDFGLGKJPO_MFAAIBOBNNE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::OIDFGLGKJPO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OIDFGLGKJPO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OIDFGLGKJPO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDFGLGKJPO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OIDFGLGKJPO MFAAIBOBNNE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OIDFGLGKJPO EIFONLCJOPG)
	{
		return ((::OIDFGLGKJPO(*)(::FlatBuffers::ByteBuffer*, ::OIDFGLGKJPO))((::PBYTE)hIl2Cpp + OIDFGLGKJPO_MFAAIBOBNNE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDFGLGKJPO_GHKKNCCLPAN_OFFSET))(this);
	}
};
