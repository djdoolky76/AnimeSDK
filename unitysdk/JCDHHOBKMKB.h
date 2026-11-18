#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CJNCNGBGKEB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JCDHHOBKMKB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JCDHHOBKMKB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7BF0F0)
#define JCDHHOBKMKB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JCDHHOBKMKB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JCDHHOBKMKB_PIEJGBCGEDA_1_OFFSET UNITYSDK_OFFSET(0x17C23B90)
#define JCDHHOBKMKB_PIEJGBCGEDA_OFFSET UNITYSDK_OFFSET(0x17C23B20)
#define JCDHHOBKMKB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7BF130)
#define JCDHHOBKMKB___INIT_OFFSET UNITYSDK_OFFSET(0x7BF0D0)

inline static constexpr unsigned int JCDHHOBKMKB_TypeDefinitionIndex = 11549;

struct alignas(8) JCDHHOBKMKB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDHHOBKMKB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCDHHOBKMKB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JCDHHOBKMKB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCDHHOBKMKB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCDHHOBKMKB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDHHOBKMKB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JCDHHOBKMKB PIEJGBCGEDA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCDHHOBKMKB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCDHHOBKMKB_PIEJGBCGEDA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CJNCNGBGKEB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CJNCNGBGKEB&))((::PBYTE)hIl2Cpp + JCDHHOBKMKB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDHHOBKMKB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JCDHHOBKMKB PIEJGBCGEDA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JCDHHOBKMKB EIFONLCJOPG)
	{
		return ((::JCDHHOBKMKB(*)(::FlatBuffers::ByteBuffer*, ::JCDHHOBKMKB))((::PBYTE)hIl2Cpp + JCDHHOBKMKB_PIEJGBCGEDA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
