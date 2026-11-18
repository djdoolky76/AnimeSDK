#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FHMIGBAHOPN_BGNANEFPJJG_1_OFFSET UNITYSDK_OFFSET(0x19AF3740)
#define FHMIGBAHOPN_BGNANEFPJJG_OFFSET UNITYSDK_OFFSET(0x19ACB7E0)
#define FHMIGBAHOPN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EB100)
#define FHMIGBAHOPN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FHMIGBAHOPN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FHMIGBAHOPN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EB0F0)
#define FHMIGBAHOPN___INIT_OFFSET UNITYSDK_OFFSET(0x7EB0D0)

inline static constexpr unsigned int FHMIGBAHOPN_TypeDefinitionIndex = 13163;

struct alignas(8) FHMIGBAHOPN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMIGBAHOPN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHMIGBAHOPN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FHMIGBAHOPN BGNANEFPJJG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHMIGBAHOPN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHMIGBAHOPN_BGNANEFPJJG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::FHMIGBAHOPN BGNANEFPJJG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FHMIGBAHOPN EIFONLCJOPG)
	{
		return ((::FHMIGBAHOPN(*)(::FlatBuffers::ByteBuffer*, ::FHMIGBAHOPN))((::PBYTE)hIl2Cpp + FHMIGBAHOPN_BGNANEFPJJG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMIGBAHOPN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::FHMIGBAHOPN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHMIGBAHOPN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHMIGBAHOPN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMIGBAHOPN_GHKKNCCLPAN_OFFSET))(this);
	}
};
