#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MJEDGBONIBB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EF790)
#define MJEDGBONIBB_FJBBGOBFPOG_1_OFFSET UNITYSDK_OFFSET(0x19DB55E0)
#define MJEDGBONIBB_FJBBGOBFPOG_OFFSET UNITYSDK_OFFSET(0x19DB5570)
#define MJEDGBONIBB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MJEDGBONIBB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MJEDGBONIBB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EF7D0)
#define MJEDGBONIBB___INIT_OFFSET UNITYSDK_OFFSET(0x7EF770)

inline static constexpr unsigned int MJEDGBONIBB_TypeDefinitionIndex = 11967;

struct alignas(8) MJEDGBONIBB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEDGBONIBB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJEDGBONIBB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MJEDGBONIBB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MJEDGBONIBB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJEDGBONIBB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MJEDGBONIBB FJBBGOBFPOG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MJEDGBONIBB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJEDGBONIBB_FJBBGOBFPOG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEDGBONIBB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MJEDGBONIBB FJBBGOBFPOG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MJEDGBONIBB EIFONLCJOPG)
	{
		return ((::MJEDGBONIBB(*)(::FlatBuffers::ByteBuffer*, ::MJEDGBONIBB))((::PBYTE)hIl2Cpp + MJEDGBONIBB_FJBBGOBFPOG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEDGBONIBB_PPOMNIFACOL_OFFSET))(this);
	}
};
