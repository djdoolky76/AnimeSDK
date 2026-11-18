#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BMOFEMCCJFE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HFCKAOPLPFD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HFCKAOPLPFD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80A060)
#define HFCKAOPLPFD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HFCKAOPLPFD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HFCKAOPLPFD_ICMDEEALEKH_1_OFFSET UNITYSDK_OFFSET(0x1B121F80)
#define HFCKAOPLPFD_ICMDEEALEKH_OFFSET UNITYSDK_OFFSET(0x1B121F10)
#define HFCKAOPLPFD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80A0A0)
#define HFCKAOPLPFD___INIT_OFFSET UNITYSDK_OFFSET(0x80A040)

inline static constexpr unsigned int HFCKAOPLPFD_TypeDefinitionIndex = 9695;

struct alignas(8) HFCKAOPLPFD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCKAOPLPFD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFCKAOPLPFD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HFCKAOPLPFD ICMDEEALEKH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HFCKAOPLPFD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFCKAOPLPFD_ICMDEEALEKH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BMOFEMCCJFE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BMOFEMCCJFE&))((::PBYTE)hIl2Cpp + HFCKAOPLPFD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCKAOPLPFD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HFCKAOPLPFD ICMDEEALEKH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HFCKAOPLPFD EIFONLCJOPG)
	{
		return ((::HFCKAOPLPFD(*)(::FlatBuffers::ByteBuffer*, ::HFCKAOPLPFD))((::PBYTE)hIl2Cpp + HFCKAOPLPFD_ICMDEEALEKH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HFCKAOPLPFD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HFCKAOPLPFD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFCKAOPLPFD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCKAOPLPFD_PPOMNIFACOL_OFFSET))(this);
	}
};
