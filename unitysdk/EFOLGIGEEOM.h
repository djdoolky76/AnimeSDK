#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EFOLGIGEEOM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C3170)
#define EFOLGIGEEOM_CCNFDJHMMFA_1_OFFSET UNITYSDK_OFFSET(0x17F2ACE0)
#define EFOLGIGEEOM_CCNFDJHMMFA_OFFSET UNITYSDK_OFFSET(0x17F2AC80)
#define EFOLGIGEEOM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EFOLGIGEEOM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EFOLGIGEEOM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C31B0)
#define EFOLGIGEEOM___INIT_OFFSET UNITYSDK_OFFSET(0x7C3150)

inline static constexpr unsigned int EFOLGIGEEOM_TypeDefinitionIndex = 11155;

struct alignas(8) EFOLGIGEEOM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFOLGIGEEOM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFOLGIGEEOM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::EFOLGIGEEOM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EFOLGIGEEOM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFOLGIGEEOM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFOLGIGEEOM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::EFOLGIGEEOM CCNFDJHMMFA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EFOLGIGEEOM EIFONLCJOPG)
	{
		return ((::EFOLGIGEEOM(*)(::FlatBuffers::ByteBuffer*, ::EFOLGIGEEOM))((::PBYTE)hIl2Cpp + EFOLGIGEEOM_CCNFDJHMMFA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFOLGIGEEOM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::EFOLGIGEEOM CCNFDJHMMFA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EFOLGIGEEOM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFOLGIGEEOM_CCNFDJHMMFA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
