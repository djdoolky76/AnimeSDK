#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DLHDAEKLFIH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E2B50)
#define DLHDAEKLFIH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DLHDAEKLFIH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DLHDAEKLFIH_JIBOIPBBMHH_1_OFFSET UNITYSDK_OFFSET(0x19510F00)
#define DLHDAEKLFIH_JIBOIPBBMHH_OFFSET UNITYSDK_OFFSET(0x19510E00)
#define DLHDAEKLFIH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E2B40)
#define DLHDAEKLFIH___INIT_OFFSET UNITYSDK_OFFSET(0x7E2B20)

inline static constexpr unsigned int DLHDAEKLFIH_TypeDefinitionIndex = 17637;

struct alignas(8) DLHDAEKLFIH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHDAEKLFIH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DLHDAEKLFIH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DLHDAEKLFIH JIBOIPBBMHH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DLHDAEKLFIH EIFONLCJOPG)
	{
		return ((::DLHDAEKLFIH(*)(::FlatBuffers::ByteBuffer*, ::DLHDAEKLFIH))((::PBYTE)hIl2Cpp + DLHDAEKLFIH_JIBOIPBBMHH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHDAEKLFIH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DLHDAEKLFIH JIBOIPBBMHH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DLHDAEKLFIH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DLHDAEKLFIH_JIBOIPBBMHH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHDAEKLFIH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::DLHDAEKLFIH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DLHDAEKLFIH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DLHDAEKLFIH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
