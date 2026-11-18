#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LHNOBLMFEAN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KJDJEOPKBMN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KJDJEOPKBMN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x812F60)
#define KJDJEOPKBMN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KJDJEOPKBMN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KJDJEOPKBMN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x812FA0)
#define KJDJEOPKBMN_MMBBEPLKNKE_1_OFFSET UNITYSDK_OFFSET(0x1B7E5860)
#define KJDJEOPKBMN_MMBBEPLKNKE_OFFSET UNITYSDK_OFFSET(0x1B7E5720)
#define KJDJEOPKBMN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x812FB0)
#define KJDJEOPKBMN___INIT_OFFSET UNITYSDK_OFFSET(0x812F40)

inline static constexpr unsigned int KJDJEOPKBMN_TypeDefinitionIndex = 10973;

struct alignas(8) KJDJEOPKBMN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDJEOPKBMN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJDJEOPKBMN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KJDJEOPKBMN MMBBEPLKNKE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KJDJEOPKBMN EIFONLCJOPG)
	{
		return ((::KJDJEOPKBMN(*)(::FlatBuffers::ByteBuffer*, ::KJDJEOPKBMN))((::PBYTE)hIl2Cpp + KJDJEOPKBMN_MMBBEPLKNKE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LHNOBLMFEAN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LHNOBLMFEAN&))((::PBYTE)hIl2Cpp + KJDJEOPKBMN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::KJDJEOPKBMN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KJDJEOPKBMN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJDJEOPKBMN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KJDJEOPKBMN MMBBEPLKNKE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KJDJEOPKBMN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJDJEOPKBMN_MMBBEPLKNKE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LHNOBLMFEAN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LHNOBLMFEAN&, ::System::Int32&))((::PBYTE)hIl2Cpp + KJDJEOPKBMN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDJEOPKBMN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDJEOPKBMN_GHKKNCCLPAN_OFFSET))(this);
	}
};
