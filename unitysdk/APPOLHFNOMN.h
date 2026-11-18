#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define APPOLHFNOMN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E20F0)
#define APPOLHFNOMN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define APPOLHFNOMN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define APPOLHFNOMN_GNEKCFCCKCE_1_OFFSET UNITYSDK_OFFSET(0x194F4BD0)
#define APPOLHFNOMN_GNEKCFCCKCE_OFFSET UNITYSDK_OFFSET(0x194F4B60)
#define APPOLHFNOMN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E20E0)
#define APPOLHFNOMN___INIT_OFFSET UNITYSDK_OFFSET(0x7E20C0)

inline static constexpr unsigned int APPOLHFNOMN_TypeDefinitionIndex = 15455;

struct alignas(8) APPOLHFNOMN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + APPOLHFNOMN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APPOLHFNOMN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::APPOLHFNOMN GNEKCFCCKCE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::APPOLHFNOMN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APPOLHFNOMN_GNEKCFCCKCE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::APPOLHFNOMN GNEKCFCCKCE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::APPOLHFNOMN EIFONLCJOPG)
	{
		return ((::APPOLHFNOMN(*)(::FlatBuffers::ByteBuffer*, ::APPOLHFNOMN))((::PBYTE)hIl2Cpp + APPOLHFNOMN_GNEKCFCCKCE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APPOLHFNOMN_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APPOLHFNOMN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::APPOLHFNOMN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::APPOLHFNOMN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APPOLHFNOMN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
