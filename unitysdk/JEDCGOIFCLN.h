#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JEDCGOIFCLN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A89F0)
#define JEDCGOIFCLN_DOIIHCDLMLN_1_OFFSET UNITYSDK_OFFSET(0x17488610)
#define JEDCGOIFCLN_DOIIHCDLMLN_OFFSET UNITYSDK_OFFSET(0x174885A0)
#define JEDCGOIFCLN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JEDCGOIFCLN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JEDCGOIFCLN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A89E0)
#define JEDCGOIFCLN___INIT_OFFSET UNITYSDK_OFFSET(0x7A89C0)

inline static constexpr unsigned int JEDCGOIFCLN_TypeDefinitionIndex = 13232;

struct alignas(8) JEDCGOIFCLN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEDCGOIFCLN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEDCGOIFCLN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEDCGOIFCLN_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEDCGOIFCLN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JEDCGOIFCLN DOIIHCDLMLN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JEDCGOIFCLN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEDCGOIFCLN_DOIIHCDLMLN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::JEDCGOIFCLN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JEDCGOIFCLN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEDCGOIFCLN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JEDCGOIFCLN DOIIHCDLMLN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JEDCGOIFCLN EIFONLCJOPG)
	{
		return ((::JEDCGOIFCLN(*)(::FlatBuffers::ByteBuffer*, ::JEDCGOIFCLN))((::PBYTE)hIl2Cpp + JEDCGOIFCLN_DOIIHCDLMLN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
