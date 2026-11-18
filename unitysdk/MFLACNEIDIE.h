#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GCFBBDPCJDH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MFLACNEIDIE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MFLACNEIDIE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80B910)
#define MFLACNEIDIE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MFLACNEIDIE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MFLACNEIDIE_MOBBEFFGIPH_1_OFFSET UNITYSDK_OFFSET(0x1B313E50)
#define MFLACNEIDIE_MOBBEFFGIPH_OFFSET UNITYSDK_OFFSET(0x1B313DE0)
#define MFLACNEIDIE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80B900)
#define MFLACNEIDIE___INIT_OFFSET UNITYSDK_OFFSET(0x80B8E0)

inline static constexpr unsigned int MFLACNEIDIE_TypeDefinitionIndex = 15078;

struct alignas(8) MFLACNEIDIE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFLACNEIDIE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFLACNEIDIE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MFLACNEIDIE MOBBEFFGIPH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MFLACNEIDIE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFLACNEIDIE_MOBBEFFGIPH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFLACNEIDIE_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFLACNEIDIE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GCFBBDPCJDH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GCFBBDPCJDH&))((::PBYTE)hIl2Cpp + MFLACNEIDIE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::MFLACNEIDIE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MFLACNEIDIE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFLACNEIDIE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MFLACNEIDIE MOBBEFFGIPH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MFLACNEIDIE EIFONLCJOPG)
	{
		return ((::MFLACNEIDIE(*)(::FlatBuffers::ByteBuffer*, ::MFLACNEIDIE))((::PBYTE)hIl2Cpp + MFLACNEIDIE_MOBBEFFGIPH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
