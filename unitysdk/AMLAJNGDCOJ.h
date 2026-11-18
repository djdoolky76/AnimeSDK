#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AMLAJNGDCOJ_AEIODMIKJEP_1_OFFSET UNITYSDK_OFFSET(0x19BDA4D0)
#define AMLAJNGDCOJ_AEIODMIKJEP_OFFSET UNITYSDK_OFFSET(0x19BDA460)
#define AMLAJNGDCOJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ECA90)
#define AMLAJNGDCOJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AMLAJNGDCOJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AMLAJNGDCOJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ECA80)
#define AMLAJNGDCOJ___INIT_OFFSET UNITYSDK_OFFSET(0x7ECA60)

inline static constexpr unsigned int AMLAJNGDCOJ_TypeDefinitionIndex = 9402;

struct alignas(8) AMLAJNGDCOJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLAJNGDCOJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMLAJNGDCOJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLAJNGDCOJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::AMLAJNGDCOJ AEIODMIKJEP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AMLAJNGDCOJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMLAJNGDCOJ_AEIODMIKJEP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::AMLAJNGDCOJ AEIODMIKJEP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AMLAJNGDCOJ EIFONLCJOPG)
	{
		return ((::AMLAJNGDCOJ(*)(::FlatBuffers::ByteBuffer*, ::AMLAJNGDCOJ))((::PBYTE)hIl2Cpp + AMLAJNGDCOJ_AEIODMIKJEP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLAJNGDCOJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::AMLAJNGDCOJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AMLAJNGDCOJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMLAJNGDCOJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
