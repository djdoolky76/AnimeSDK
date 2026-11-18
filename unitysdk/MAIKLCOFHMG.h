#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HLNMAOLKGLM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MAIKLCOFHMG_BAIJAAFDPOA_1_OFFSET UNITYSDK_OFFSET(0x1B30DD60)
#define MAIKLCOFHMG_BAIJAAFDPOA_OFFSET UNITYSDK_OFFSET(0x1B30DCF0)
#define MAIKLCOFHMG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MAIKLCOFHMG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80B600)
#define MAIKLCOFHMG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MAIKLCOFHMG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MAIKLCOFHMG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80B640)
#define MAIKLCOFHMG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80B650)
#define MAIKLCOFHMG___INIT_OFFSET UNITYSDK_OFFSET(0x80B5E0)

inline static constexpr unsigned int MAIKLCOFHMG_TypeDefinitionIndex = 13267;

struct alignas(8) MAIKLCOFHMG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAIKLCOFHMG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MAIKLCOFHMG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MAIKLCOFHMG BAIJAAFDPOA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MAIKLCOFHMG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MAIKLCOFHMG_BAIJAAFDPOA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::MAIKLCOFHMG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MAIKLCOFHMG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MAIKLCOFHMG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAIKLCOFHMG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HLNMAOLKGLM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HLNMAOLKGLM&, ::System::Int32&))((::PBYTE)hIl2Cpp + MAIKLCOFHMG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HLNMAOLKGLM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HLNMAOLKGLM&))((::PBYTE)hIl2Cpp + MAIKLCOFHMG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MAIKLCOFHMG BAIJAAFDPOA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MAIKLCOFHMG EIFONLCJOPG)
	{
		return ((::MAIKLCOFHMG(*)(::FlatBuffers::ByteBuffer*, ::MAIKLCOFHMG))((::PBYTE)hIl2Cpp + MAIKLCOFHMG_BAIJAAFDPOA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAIKLCOFHMG_PPOMNIFACOL_OFFSET))(this);
	}
};
