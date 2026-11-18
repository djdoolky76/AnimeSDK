#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CBGNAALPFHH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KCBPBBKADEJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KCBPBBKADEJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80B090)
#define KCBPBBKADEJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KCBPBBKADEJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KCBPBBKADEJ_KKNJHBEJDGA_1_OFFSET UNITYSDK_OFFSET(0x1B143900)
#define KCBPBBKADEJ_KKNJHBEJDGA_OFFSET UNITYSDK_OFFSET(0x1B143760)
#define KCBPBBKADEJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80B080)
#define KCBPBBKADEJ___INIT_OFFSET UNITYSDK_OFFSET(0x80B060)

inline static constexpr unsigned int KCBPBBKADEJ_TypeDefinitionIndex = 13392;

struct alignas(8) KCBPBBKADEJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBPBBKADEJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCBPBBKADEJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KCBPBBKADEJ KKNJHBEJDGA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KCBPBBKADEJ EIFONLCJOPG)
	{
		return ((::KCBPBBKADEJ(*)(::FlatBuffers::ByteBuffer*, ::KCBPBBKADEJ))((::PBYTE)hIl2Cpp + KCBPBBKADEJ_KKNJHBEJDGA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CBGNAALPFHH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CBGNAALPFHH&))((::PBYTE)hIl2Cpp + KCBPBBKADEJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBPBBKADEJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBPBBKADEJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::KCBPBBKADEJ KKNJHBEJDGA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KCBPBBKADEJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCBPBBKADEJ_KKNJHBEJDGA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::KCBPBBKADEJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KCBPBBKADEJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCBPBBKADEJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
