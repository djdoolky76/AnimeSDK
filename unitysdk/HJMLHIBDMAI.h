#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KBPKOPILAGK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HJMLHIBDMAI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HJMLHIBDMAI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F8550)
#define HJMLHIBDMAI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HJMLHIBDMAI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HJMLHIBDMAI_MMOMOPKBLPP_1_OFFSET UNITYSDK_OFFSET(0x1A4F1440)
#define HJMLHIBDMAI_MMOMOPKBLPP_OFFSET UNITYSDK_OFFSET(0x1A4F13A0)
#define HJMLHIBDMAI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F8540)
#define HJMLHIBDMAI___INIT_OFFSET UNITYSDK_OFFSET(0x7F8520)

inline static constexpr unsigned int HJMLHIBDMAI_TypeDefinitionIndex = 11705;

struct alignas(8) HJMLHIBDMAI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJMLHIBDMAI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJMLHIBDMAI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJMLHIBDMAI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KBPKOPILAGK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KBPKOPILAGK&))((::PBYTE)hIl2Cpp + HJMLHIBDMAI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HJMLHIBDMAI MMOMOPKBLPP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HJMLHIBDMAI EIFONLCJOPG)
	{
		return ((::HJMLHIBDMAI(*)(::FlatBuffers::ByteBuffer*, ::HJMLHIBDMAI))((::PBYTE)hIl2Cpp + HJMLHIBDMAI_MMOMOPKBLPP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJMLHIBDMAI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HJMLHIBDMAI MMOMOPKBLPP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HJMLHIBDMAI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJMLHIBDMAI_MMOMOPKBLPP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::HJMLHIBDMAI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HJMLHIBDMAI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJMLHIBDMAI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
