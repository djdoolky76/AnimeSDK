#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EIENLLEJCMD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HOGBCDCNKDD_AJPPFDPNNPH_1_OFFSET UNITYSDK_OFFSET(0x1BAE1910)
#define HOGBCDCNKDD_AJPPFDPNNPH_OFFSET UNITYSDK_OFFSET(0x1BAE18A0)
#define HOGBCDCNKDD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HOGBCDCNKDD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81BAE0)
#define HOGBCDCNKDD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HOGBCDCNKDD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HOGBCDCNKDD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81BB20)
#define HOGBCDCNKDD___INIT_OFFSET UNITYSDK_OFFSET(0x81BAC0)

inline static constexpr unsigned int HOGBCDCNKDD_TypeDefinitionIndex = 14435;

struct alignas(8) HOGBCDCNKDD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGBCDCNKDD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOGBCDCNKDD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HOGBCDCNKDD AJPPFDPNNPH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HOGBCDCNKDD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOGBCDCNKDD_AJPPFDPNNPH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::HOGBCDCNKDD AJPPFDPNNPH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HOGBCDCNKDD EIFONLCJOPG)
	{
		return ((::HOGBCDCNKDD(*)(::FlatBuffers::ByteBuffer*, ::HOGBCDCNKDD))((::PBYTE)hIl2Cpp + HOGBCDCNKDD_AJPPFDPNNPH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HOGBCDCNKDD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HOGBCDCNKDD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOGBCDCNKDD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EIENLLEJCMD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EIENLLEJCMD&))((::PBYTE)hIl2Cpp + HOGBCDCNKDD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGBCDCNKDD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGBCDCNKDD_GHKKNCCLPAN_OFFSET))(this);
	}
};
