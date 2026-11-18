#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LHNHFINPCOM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x810E00)
#define LHNHFINPCOM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LHNHFINPCOM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LHNHFINPCOM_LDCLLDGDNPF_1_OFFSET UNITYSDK_OFFSET(0x1B64F210)
#define LHNHFINPCOM_LDCLLDGDNPF_OFFSET UNITYSDK_OFFSET(0x1B64F1A0)
#define LHNHFINPCOM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x810DF0)
#define LHNHFINPCOM___INIT_OFFSET UNITYSDK_OFFSET(0x810DD0)

inline static constexpr unsigned int LHNHFINPCOM_TypeDefinitionIndex = 17686;

struct alignas(8) LHNHFINPCOM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNHFINPCOM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHNHFINPCOM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNHFINPCOM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LHNHFINPCOM LDCLLDGDNPF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LHNHFINPCOM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHNHFINPCOM_LDCLLDGDNPF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::LHNHFINPCOM LDCLLDGDNPF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LHNHFINPCOM EIFONLCJOPG)
	{
		return ((::LHNHFINPCOM(*)(::FlatBuffers::ByteBuffer*, ::LHNHFINPCOM))((::PBYTE)hIl2Cpp + LHNHFINPCOM_LDCLLDGDNPF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNHFINPCOM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::LHNHFINPCOM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LHNHFINPCOM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHNHFINPCOM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
