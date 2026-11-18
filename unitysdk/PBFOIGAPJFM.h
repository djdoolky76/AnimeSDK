#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PBFOIGAPJFM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x806070)
#define PBFOIGAPJFM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PBFOIGAPJFM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PBFOIGAPJFM_LKDOPCMKCOM_1_OFFSET UNITYSDK_OFFSET(0x1AD95E60)
#define PBFOIGAPJFM_LKDOPCMKCOM_OFFSET UNITYSDK_OFFSET(0x1AD95DF0)
#define PBFOIGAPJFM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x806060)
#define PBFOIGAPJFM___INIT_OFFSET UNITYSDK_OFFSET(0x806040)

inline static constexpr unsigned int PBFOIGAPJFM_TypeDefinitionIndex = 11129;

struct alignas(8) PBFOIGAPJFM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFOIGAPJFM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBFOIGAPJFM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PBFOIGAPJFM LKDOPCMKCOM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PBFOIGAPJFM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBFOIGAPJFM_LKDOPCMKCOM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFOIGAPJFM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFOIGAPJFM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::PBFOIGAPJFM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PBFOIGAPJFM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBFOIGAPJFM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PBFOIGAPJFM LKDOPCMKCOM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PBFOIGAPJFM EIFONLCJOPG)
	{
		return ((::PBFOIGAPJFM(*)(::FlatBuffers::ByteBuffer*, ::PBFOIGAPJFM))((::PBYTE)hIl2Cpp + PBFOIGAPJFM_LKDOPCMKCOM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
