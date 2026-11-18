#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FMIFFDNGEMD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EB1B0)
#define FMIFFDNGEMD_EKPICJMGBNJ_1_OFFSET UNITYSDK_OFFSET(0x19AF5830)
#define FMIFFDNGEMD_EKPICJMGBNJ_OFFSET UNITYSDK_OFFSET(0x19AF57C0)
#define FMIFFDNGEMD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FMIFFDNGEMD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FMIFFDNGEMD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EB1A0)
#define FMIFFDNGEMD___INIT_OFFSET UNITYSDK_OFFSET(0x7EB180)

inline static constexpr unsigned int FMIFFDNGEMD_TypeDefinitionIndex = 16553;

struct alignas(8) FMIFFDNGEMD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMIFFDNGEMD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMIFFDNGEMD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMIFFDNGEMD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::FMIFFDNGEMD EKPICJMGBNJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMIFFDNGEMD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMIFFDNGEMD_EKPICJMGBNJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::FMIFFDNGEMD EKPICJMGBNJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FMIFFDNGEMD EIFONLCJOPG)
	{
		return ((::FMIFFDNGEMD(*)(::FlatBuffers::ByteBuffer*, ::FMIFFDNGEMD))((::PBYTE)hIl2Cpp + FMIFFDNGEMD_EKPICJMGBNJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMIFFDNGEMD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::FMIFFDNGEMD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMIFFDNGEMD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMIFFDNGEMD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
