#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AEFMEMAOMBN_AGAKFBKKLLP_1_OFFSET UNITYSDK_OFFSET(0x19F09BC0)
#define AEFMEMAOMBN_AGAKFBKKLLP_OFFSET UNITYSDK_OFFSET(0x19F09B00)
#define AEFMEMAOMBN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F1250)
#define AEFMEMAOMBN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AEFMEMAOMBN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AEFMEMAOMBN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F1290)
#define AEFMEMAOMBN___INIT_OFFSET UNITYSDK_OFFSET(0x7F1230)

inline static constexpr unsigned int AEFMEMAOMBN_TypeDefinitionIndex = 11508;

struct alignas(8) AEFMEMAOMBN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFMEMAOMBN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEFMEMAOMBN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::AEFMEMAOMBN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AEFMEMAOMBN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEFMEMAOMBN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AEFMEMAOMBN AGAKFBKKLLP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AEFMEMAOMBN EIFONLCJOPG)
	{
		return ((::AEFMEMAOMBN(*)(::FlatBuffers::ByteBuffer*, ::AEFMEMAOMBN))((::PBYTE)hIl2Cpp + AEFMEMAOMBN_AGAKFBKKLLP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFMEMAOMBN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFMEMAOMBN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::AEFMEMAOMBN AGAKFBKKLLP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AEFMEMAOMBN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEFMEMAOMBN_AGAKFBKKLLP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
