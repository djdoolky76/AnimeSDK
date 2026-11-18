#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FHELBBGFPBA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x813A10)
#define FHELBBGFPBA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FHELBBGFPBA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FHELBBGFPBA_JNFHBECEKLF_1_OFFSET UNITYSDK_OFFSET(0x1B862010)
#define FHELBBGFPBA_JNFHBECEKLF_OFFSET UNITYSDK_OFFSET(0x1B861F10)
#define FHELBBGFPBA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x813A00)
#define FHELBBGFPBA___INIT_OFFSET UNITYSDK_OFFSET(0x8139E0)

inline static constexpr unsigned int FHELBBGFPBA_TypeDefinitionIndex = 12171;

struct alignas(8) FHELBBGFPBA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHELBBGFPBA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHELBBGFPBA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FHELBBGFPBA JNFHBECEKLF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FHELBBGFPBA EIFONLCJOPG)
	{
		return ((::FHELBBGFPBA(*)(::FlatBuffers::ByteBuffer*, ::FHELBBGFPBA))((::PBYTE)hIl2Cpp + FHELBBGFPBA_JNFHBECEKLF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHELBBGFPBA_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHELBBGFPBA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::FHELBBGFPBA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHELBBGFPBA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHELBBGFPBA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FHELBBGFPBA JNFHBECEKLF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHELBBGFPBA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHELBBGFPBA_JNFHBECEKLF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
