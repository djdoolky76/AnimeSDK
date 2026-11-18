#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MCIILMLCPJL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PMGACAKKEFG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PMGACAKKEFG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8066E0)
#define PMGACAKKEFG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PMGACAKKEFG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PMGACAKKEFG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x806720)
#define PMGACAKKEFG_MHGKMBLJDJB_1_OFFSET UNITYSDK_OFFSET(0x1AD9D0F0)
#define PMGACAKKEFG_MHGKMBLJDJB_OFFSET UNITYSDK_OFFSET(0x1AD9D080)
#define PMGACAKKEFG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x806730)
#define PMGACAKKEFG___INIT_OFFSET UNITYSDK_OFFSET(0x8066C0)

inline static constexpr unsigned int PMGACAKKEFG_TypeDefinitionIndex = 10538;

struct alignas(8) PMGACAKKEFG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGACAKKEFG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMGACAKKEFG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PMGACAKKEFG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PMGACAKKEFG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMGACAKKEFG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGACAKKEFG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PMGACAKKEFG MHGKMBLJDJB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PMGACAKKEFG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMGACAKKEFG_MHGKMBLJDJB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::PMGACAKKEFG MHGKMBLJDJB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PMGACAKKEFG EIFONLCJOPG)
	{
		return ((::PMGACAKKEFG(*)(::FlatBuffers::ByteBuffer*, ::PMGACAKKEFG))((::PBYTE)hIl2Cpp + PMGACAKKEFG_MHGKMBLJDJB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MCIILMLCPJL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MCIILMLCPJL&, ::System::Int32&))((::PBYTE)hIl2Cpp + PMGACAKKEFG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MCIILMLCPJL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MCIILMLCPJL&))((::PBYTE)hIl2Cpp + PMGACAKKEFG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGACAKKEFG_PPOMNIFACOL_OFFSET))(this);
	}
};
