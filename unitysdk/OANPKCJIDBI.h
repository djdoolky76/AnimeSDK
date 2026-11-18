#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EMMEFMEKNJM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OANPKCJIDBI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OANPKCJIDBI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81F730)
#define OANPKCJIDBI_CEEAKDINCCN_1_OFFSET UNITYSDK_OFFSET(0x1C09B450)
#define OANPKCJIDBI_CEEAKDINCCN_OFFSET UNITYSDK_OFFSET(0x1C09B3F0)
#define OANPKCJIDBI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OANPKCJIDBI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OANPKCJIDBI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81F770)
#define OANPKCJIDBI___INIT_OFFSET UNITYSDK_OFFSET(0x81F710)

inline static constexpr unsigned int OANPKCJIDBI_TypeDefinitionIndex = 17592;

struct alignas(8) OANPKCJIDBI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OANPKCJIDBI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OANPKCJIDBI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OANPKCJIDBI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::OANPKCJIDBI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OANPKCJIDBI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OANPKCJIDBI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OANPKCJIDBI CEEAKDINCCN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OANPKCJIDBI EIFONLCJOPG)
	{
		return ((::OANPKCJIDBI(*)(::FlatBuffers::ByteBuffer*, ::OANPKCJIDBI))((::PBYTE)hIl2Cpp + OANPKCJIDBI_CEEAKDINCCN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OANPKCJIDBI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OANPKCJIDBI CEEAKDINCCN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OANPKCJIDBI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OANPKCJIDBI_CEEAKDINCCN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EMMEFMEKNJM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EMMEFMEKNJM&))((::PBYTE)hIl2Cpp + OANPKCJIDBI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
