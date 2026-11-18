#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CAJNJGJIOJD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x826890)
#define CAJNJGJIOJD_DDGEDHCAMCH_1_OFFSET UNITYSDK_OFFSET(0x1C526110)
#define CAJNJGJIOJD_DDGEDHCAMCH_OFFSET UNITYSDK_OFFSET(0x1C526070)
#define CAJNJGJIOJD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CAJNJGJIOJD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CAJNJGJIOJD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8268D0)
#define CAJNJGJIOJD___INIT_OFFSET UNITYSDK_OFFSET(0x826870)

inline static constexpr unsigned int CAJNJGJIOJD_TypeDefinitionIndex = 14705;

struct alignas(8) CAJNJGJIOJD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJNJGJIOJD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAJNJGJIOJD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJNJGJIOJD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::CAJNJGJIOJD DDGEDHCAMCH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CAJNJGJIOJD EIFONLCJOPG)
	{
		return ((::CAJNJGJIOJD(*)(::FlatBuffers::ByteBuffer*, ::CAJNJGJIOJD))((::PBYTE)hIl2Cpp + CAJNJGJIOJD_DDGEDHCAMCH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::CAJNJGJIOJD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CAJNJGJIOJD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAJNJGJIOJD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJNJGJIOJD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CAJNJGJIOJD DDGEDHCAMCH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CAJNJGJIOJD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAJNJGJIOJD_DDGEDHCAMCH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
