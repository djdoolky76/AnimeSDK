#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EPEMBLDFFFN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FBF50)
#define EPEMBLDFFFN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EPEMBLDFFFN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EPEMBLDFFFN_PFJBHOGFLIB_1_OFFSET UNITYSDK_OFFSET(0x1A5A0D20)
#define EPEMBLDFFFN_PFJBHOGFLIB_OFFSET UNITYSDK_OFFSET(0x1A5A0C80)
#define EPEMBLDFFFN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FBF40)
#define EPEMBLDFFFN___INIT_OFFSET UNITYSDK_OFFSET(0x7FBF20)

inline static constexpr unsigned int EPEMBLDFFFN_TypeDefinitionIndex = 12922;

struct alignas(8) EPEMBLDFFFN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPEMBLDFFFN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPEMBLDFFFN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EPEMBLDFFFN PFJBHOGFLIB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EPEMBLDFFFN EIFONLCJOPG)
	{
		return ((::EPEMBLDFFFN(*)(::FlatBuffers::ByteBuffer*, ::EPEMBLDFFFN))((::PBYTE)hIl2Cpp + EPEMBLDFFFN_PFJBHOGFLIB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::EPEMBLDFFFN PFJBHOGFLIB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EPEMBLDFFFN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPEMBLDFFFN_PFJBHOGFLIB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPEMBLDFFFN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPEMBLDFFFN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::EPEMBLDFFFN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EPEMBLDFFFN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPEMBLDFFFN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
