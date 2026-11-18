#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MKGNCAPOMHE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C4300)
#define MKGNCAPOMHE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MKGNCAPOMHE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MKGNCAPOMHE_MCELFILCDBC_1_OFFSET UNITYSDK_OFFSET(0x17FC8220)
#define MKGNCAPOMHE_MCELFILCDBC_OFFSET UNITYSDK_OFFSET(0x17FC81B0)
#define MKGNCAPOMHE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C42F0)
#define MKGNCAPOMHE___INIT_OFFSET UNITYSDK_OFFSET(0x7C42D0)

inline static constexpr unsigned int MKGNCAPOMHE_TypeDefinitionIndex = 14039;

struct alignas(8) MKGNCAPOMHE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGNCAPOMHE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKGNCAPOMHE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MKGNCAPOMHE MCELFILCDBC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKGNCAPOMHE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKGNCAPOMHE_MCELFILCDBC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGNCAPOMHE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGNCAPOMHE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::MKGNCAPOMHE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKGNCAPOMHE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKGNCAPOMHE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MKGNCAPOMHE MCELFILCDBC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MKGNCAPOMHE EIFONLCJOPG)
	{
		return ((::MKGNCAPOMHE(*)(::FlatBuffers::ByteBuffer*, ::MKGNCAPOMHE))((::PBYTE)hIl2Cpp + MKGNCAPOMHE_MCELFILCDBC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
