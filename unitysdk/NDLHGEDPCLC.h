#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HHCJJHFHMNK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NDLHGEDPCLC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NDLHGEDPCLC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x805480)
#define NDLHGEDPCLC_CBCBOLIBOHH_1_OFFSET UNITYSDK_OFFSET(0x1AD7C5F0)
#define NDLHGEDPCLC_CBCBOLIBOHH_OFFSET UNITYSDK_OFFSET(0x1AD7C530)
#define NDLHGEDPCLC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NDLHGEDPCLC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NDLHGEDPCLC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8054C0)
#define NDLHGEDPCLC___INIT_OFFSET UNITYSDK_OFFSET(0x805460)

inline static constexpr unsigned int NDLHGEDPCLC_TypeDefinitionIndex = 9138;

struct alignas(8) NDLHGEDPCLC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLHGEDPCLC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDLHGEDPCLC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HHCJJHFHMNK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HHCJJHFHMNK&))((::PBYTE)hIl2Cpp + NDLHGEDPCLC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::NDLHGEDPCLC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NDLHGEDPCLC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDLHGEDPCLC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NDLHGEDPCLC CBCBOLIBOHH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NDLHGEDPCLC EIFONLCJOPG)
	{
		return ((::NDLHGEDPCLC(*)(::FlatBuffers::ByteBuffer*, ::NDLHGEDPCLC))((::PBYTE)hIl2Cpp + NDLHGEDPCLC_CBCBOLIBOHH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLHGEDPCLC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NDLHGEDPCLC CBCBOLIBOHH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NDLHGEDPCLC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDLHGEDPCLC_CBCBOLIBOHH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLHGEDPCLC_PPOMNIFACOL_OFFSET))(this);
	}
};
