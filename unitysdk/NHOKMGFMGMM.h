#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NHOKMGFMGMM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81A560)
#define NHOKMGFMGMM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NHOKMGFMGMM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NHOKMGFMGMM_LNCJDFALAGJ_1_OFFSET UNITYSDK_OFFSET(0x1BAA5190)
#define NHOKMGFMGMM_LNCJDFALAGJ_OFFSET UNITYSDK_OFFSET(0x1BAA5130)
#define NHOKMGFMGMM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81A550)
#define NHOKMGFMGMM___INIT_OFFSET UNITYSDK_OFFSET(0x81A530)

inline static constexpr unsigned int NHOKMGFMGMM_TypeDefinitionIndex = 10158;

struct alignas(8) NHOKMGFMGMM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHOKMGFMGMM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NHOKMGFMGMM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHOKMGFMGMM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHOKMGFMGMM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::NHOKMGFMGMM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NHOKMGFMGMM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NHOKMGFMGMM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NHOKMGFMGMM LNCJDFALAGJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NHOKMGFMGMM EIFONLCJOPG)
	{
		return ((::NHOKMGFMGMM(*)(::FlatBuffers::ByteBuffer*, ::NHOKMGFMGMM))((::PBYTE)hIl2Cpp + NHOKMGFMGMM_LNCJDFALAGJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::NHOKMGFMGMM LNCJDFALAGJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NHOKMGFMGMM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NHOKMGFMGMM_LNCJDFALAGJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
