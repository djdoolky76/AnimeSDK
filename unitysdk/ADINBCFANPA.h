#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ADINBCFANPA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8068E0)
#define ADINBCFANPA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ADINBCFANPA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ADINBCFANPA_IAMNABMMPEB_1_OFFSET UNITYSDK_OFFSET(0x1ADA0B70)
#define ADINBCFANPA_IAMNABMMPEB_OFFSET UNITYSDK_OFFSET(0x1ADA0B00)
#define ADINBCFANPA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x806920)
#define ADINBCFANPA___INIT_OFFSET UNITYSDK_OFFSET(0x8068C0)

inline static constexpr unsigned int ADINBCFANPA_TypeDefinitionIndex = 12075;

struct alignas(8) ADINBCFANPA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADINBCFANPA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ADINBCFANPA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::ADINBCFANPA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ADINBCFANPA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ADINBCFANPA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADINBCFANPA_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADINBCFANPA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ADINBCFANPA IAMNABMMPEB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ADINBCFANPA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ADINBCFANPA_IAMNABMMPEB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::ADINBCFANPA IAMNABMMPEB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ADINBCFANPA EIFONLCJOPG)
	{
		return ((::ADINBCFANPA(*)(::FlatBuffers::ByteBuffer*, ::ADINBCFANPA))((::PBYTE)hIl2Cpp + ADINBCFANPA_IAMNABMMPEB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
