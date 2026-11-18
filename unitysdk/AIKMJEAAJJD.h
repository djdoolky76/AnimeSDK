#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AIKMJEAAJJD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x806AF0)
#define AIKMJEAAJJD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AIKMJEAAJJD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AIKMJEAAJJD_GNDDLIBBJJM_1_OFFSET UNITYSDK_OFFSET(0x1ADA91A0)
#define AIKMJEAAJJD_GNDDLIBBJJM_OFFSET UNITYSDK_OFFSET(0x1ADA9100)
#define AIKMJEAAJJD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x806B30)
#define AIKMJEAAJJD___INIT_OFFSET UNITYSDK_OFFSET(0x806AD0)

inline static constexpr unsigned int AIKMJEAAJJD_TypeDefinitionIndex = 9260;

struct alignas(8) AIKMJEAAJJD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKMJEAAJJD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIKMJEAAJJD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AIKMJEAAJJD GNDDLIBBJJM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AIKMJEAAJJD EIFONLCJOPG)
	{
		return ((::AIKMJEAAJJD(*)(::FlatBuffers::ByteBuffer*, ::AIKMJEAAJJD))((::PBYTE)hIl2Cpp + AIKMJEAAJJD_GNDDLIBBJJM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::AIKMJEAAJJD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AIKMJEAAJJD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIKMJEAAJJD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AIKMJEAAJJD GNDDLIBBJJM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AIKMJEAAJJD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIKMJEAAJJD_GNDDLIBBJJM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKMJEAAJJD_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKMJEAAJJD_PPOMNIFACOL_OFFSET))(this);
	}
};
