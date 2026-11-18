#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IGHKFAOKPNA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x758190)
#define IGHKFAOKPNA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IGHKFAOKPNA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IGHKFAOKPNA_LOKPLOKEJAP_1_OFFSET UNITYSDK_OFFSET(0x152E3C30)
#define IGHKFAOKPNA_LOKPLOKEJAP_OFFSET UNITYSDK_OFFSET(0x152E3BC0)
#define IGHKFAOKPNA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7581D0)
#define IGHKFAOKPNA___INIT_OFFSET UNITYSDK_OFFSET(0x758170)

inline static constexpr unsigned int IGHKFAOKPNA_TypeDefinitionIndex = 9923;

struct alignas(8) IGHKFAOKPNA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGHKFAOKPNA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGHKFAOKPNA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGHKFAOKPNA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::IGHKFAOKPNA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IGHKFAOKPNA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGHKFAOKPNA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGHKFAOKPNA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::IGHKFAOKPNA LOKPLOKEJAP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IGHKFAOKPNA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGHKFAOKPNA_LOKPLOKEJAP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::IGHKFAOKPNA LOKPLOKEJAP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IGHKFAOKPNA EIFONLCJOPG)
	{
		return ((::IGHKFAOKPNA(*)(::FlatBuffers::ByteBuffer*, ::IGHKFAOKPNA))((::PBYTE)hIl2Cpp + IGHKFAOKPNA_LOKPLOKEJAP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
