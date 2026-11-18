#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HDDMJBAJBNA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NDCPBAGEPAJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NDCPBAGEPAJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8203D0)
#define NDCPBAGEPAJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NDCPBAGEPAJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NDCPBAGEPAJ_GLEEHKPHNMM_1_OFFSET UNITYSDK_OFFSET(0x1C189280)
#define NDCPBAGEPAJ_GLEEHKPHNMM_OFFSET UNITYSDK_OFFSET(0x1C189220)
#define NDCPBAGEPAJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x820410)
#define NDCPBAGEPAJ___INIT_OFFSET UNITYSDK_OFFSET(0x8203B0)

inline static constexpr unsigned int NDCPBAGEPAJ_TypeDefinitionIndex = 17145;

struct alignas(8) NDCPBAGEPAJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDCPBAGEPAJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDCPBAGEPAJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NDCPBAGEPAJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NDCPBAGEPAJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDCPBAGEPAJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HDDMJBAJBNA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HDDMJBAJBNA&))((::PBYTE)hIl2Cpp + NDCPBAGEPAJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDCPBAGEPAJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NDCPBAGEPAJ GLEEHKPHNMM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NDCPBAGEPAJ EIFONLCJOPG)
	{
		return ((::NDCPBAGEPAJ(*)(::FlatBuffers::ByteBuffer*, ::NDCPBAGEPAJ))((::PBYTE)hIl2Cpp + NDCPBAGEPAJ_GLEEHKPHNMM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::NDCPBAGEPAJ GLEEHKPHNMM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NDCPBAGEPAJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDCPBAGEPAJ_GLEEHKPHNMM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDCPBAGEPAJ_GHKKNCCLPAN_OFFSET))(this);
	}
};
