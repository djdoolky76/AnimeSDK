#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GCANEFJGAJH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NFJNBBLNBOG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NFJNBBLNBOG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D8040)
#define NFJNBBLNBOG_CKGEBEJNLLA_1_OFFSET UNITYSDK_OFFSET(0x18E1D590)
#define NFJNBBLNBOG_CKGEBEJNLLA_OFFSET UNITYSDK_OFFSET(0x18E1D520)
#define NFJNBBLNBOG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NFJNBBLNBOG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NFJNBBLNBOG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D8080)
#define NFJNBBLNBOG___INIT_OFFSET UNITYSDK_OFFSET(0x7D8020)

inline static constexpr unsigned int NFJNBBLNBOG_TypeDefinitionIndex = 16550;

struct alignas(8) NFJNBBLNBOG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJNBBLNBOG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFJNBBLNBOG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJNBBLNBOG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GCANEFJGAJH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GCANEFJGAJH&))((::PBYTE)hIl2Cpp + NFJNBBLNBOG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::NFJNBBLNBOG CKGEBEJNLLA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NFJNBBLNBOG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFJNBBLNBOG_CKGEBEJNLLA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::NFJNBBLNBOG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NFJNBBLNBOG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFJNBBLNBOG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJNBBLNBOG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NFJNBBLNBOG CKGEBEJNLLA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NFJNBBLNBOG EIFONLCJOPG)
	{
		return ((::NFJNBBLNBOG(*)(::FlatBuffers::ByteBuffer*, ::NFJNBBLNBOG))((::PBYTE)hIl2Cpp + NFJNBBLNBOG_CKGEBEJNLLA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
