#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OGNIAKLKEEH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LCIPFDJGIBE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LCIPFDJGIBE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D5DE0)
#define LCIPFDJGIBE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LCIPFDJGIBE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LCIPFDJGIBE_OADNBAFNELN_1_OFFSET UNITYSDK_OFFSET(0x18BE0590)
#define LCIPFDJGIBE_OADNBAFNELN_OFFSET UNITYSDK_OFFSET(0x18BE0520)
#define LCIPFDJGIBE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D5E20)
#define LCIPFDJGIBE___INIT_OFFSET UNITYSDK_OFFSET(0x7D5DC0)

inline static constexpr unsigned int LCIPFDJGIBE_TypeDefinitionIndex = 14543;

struct alignas(8) LCIPFDJGIBE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCIPFDJGIBE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCIPFDJGIBE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LCIPFDJGIBE OADNBAFNELN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCIPFDJGIBE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCIPFDJGIBE_OADNBAFNELN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::LCIPFDJGIBE OADNBAFNELN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LCIPFDJGIBE EIFONLCJOPG)
	{
		return ((::LCIPFDJGIBE(*)(::FlatBuffers::ByteBuffer*, ::LCIPFDJGIBE))((::PBYTE)hIl2Cpp + LCIPFDJGIBE_OADNBAFNELN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::LCIPFDJGIBE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCIPFDJGIBE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCIPFDJGIBE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OGNIAKLKEEH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OGNIAKLKEEH&))((::PBYTE)hIl2Cpp + LCIPFDJGIBE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCIPFDJGIBE_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCIPFDJGIBE_PPOMNIFACOL_OFFSET))(this);
	}
};
