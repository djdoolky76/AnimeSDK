#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EHICJMPCFHH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OKBHPPLLKNH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OKBHPPLLKNH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80C770)
#define OKBHPPLLKNH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OKBHPPLLKNH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OKBHPPLLKNH_OAOPMNDIJHO_1_OFFSET UNITYSDK_OFFSET(0x1B340360)
#define OKBHPPLLKNH_OAOPMNDIJHO_OFFSET UNITYSDK_OFFSET(0x1B340300)
#define OKBHPPLLKNH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80C7B0)
#define OKBHPPLLKNH___INIT_OFFSET UNITYSDK_OFFSET(0x80C750)

inline static constexpr unsigned int OKBHPPLLKNH_TypeDefinitionIndex = 17087;

struct alignas(8) OKBHPPLLKNH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBHPPLLKNH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OKBHPPLLKNH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EHICJMPCFHH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EHICJMPCFHH&))((::PBYTE)hIl2Cpp + OKBHPPLLKNH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::OKBHPPLLKNH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OKBHPPLLKNH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OKBHPPLLKNH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBHPPLLKNH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OKBHPPLLKNH OAOPMNDIJHO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OKBHPPLLKNH EIFONLCJOPG)
	{
		return ((::OKBHPPLLKNH(*)(::FlatBuffers::ByteBuffer*, ::OKBHPPLLKNH))((::PBYTE)hIl2Cpp + OKBHPPLLKNH_OAOPMNDIJHO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::OKBHPPLLKNH OAOPMNDIJHO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OKBHPPLLKNH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OKBHPPLLKNH_OAOPMNDIJHO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBHPPLLKNH_PPOMNIFACOL_OFFSET))(this);
	}
};
