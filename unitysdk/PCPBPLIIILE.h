#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IDFCIPCFNJC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PCPBPLIIILE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PCPBPLIIILE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8060F0)
#define PCPBPLIIILE_EPLNDJIJONJ_1_OFFSET UNITYSDK_OFFSET(0x1AD96540)
#define PCPBPLIIILE_EPLNDJIJONJ_OFFSET UNITYSDK_OFFSET(0x1AD964E0)
#define PCPBPLIIILE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PCPBPLIIILE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PCPBPLIIILE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x806130)
#define PCPBPLIIILE___INIT_OFFSET UNITYSDK_OFFSET(0x8060D0)

inline static constexpr unsigned int PCPBPLIIILE_TypeDefinitionIndex = 16320;

struct alignas(8) PCPBPLIIILE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPBPLIIILE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PCPBPLIIILE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PCPBPLIIILE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PCPBPLIIILE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PCPBPLIIILE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPBPLIIILE_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IDFCIPCFNJC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IDFCIPCFNJC&))((::PBYTE)hIl2Cpp + PCPBPLIIILE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PCPBPLIIILE EPLNDJIJONJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PCPBPLIIILE EIFONLCJOPG)
	{
		return ((::PCPBPLIIILE(*)(::FlatBuffers::ByteBuffer*, ::PCPBPLIIILE))((::PBYTE)hIl2Cpp + PCPBPLIIILE_EPLNDJIJONJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::UInt64>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPBPLIIILE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PCPBPLIIILE EPLNDJIJONJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PCPBPLIIILE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PCPBPLIIILE_EPLNDJIJONJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
