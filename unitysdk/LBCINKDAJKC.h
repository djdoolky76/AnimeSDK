#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/INJKGOIDIFK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LBCINKDAJKC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LBCINKDAJKC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81C940)
#define LBCINKDAJKC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LBCINKDAJKC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LBCINKDAJKC_JNGIKDDFIAB_1_OFFSET UNITYSDK_OFFSET(0x1BB0A550)
#define LBCINKDAJKC_JNGIKDDFIAB_OFFSET UNITYSDK_OFFSET(0x1BB0A4E0)
#define LBCINKDAJKC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81C990)
#define LBCINKDAJKC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81C980)
#define LBCINKDAJKC___INIT_OFFSET UNITYSDK_OFFSET(0x81C920)

inline static constexpr unsigned int LBCINKDAJKC_TypeDefinitionIndex = 12125;

struct alignas(8) LBCINKDAJKC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCINKDAJKC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBCINKDAJKC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCINKDAJKC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::LBCINKDAJKC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LBCINKDAJKC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBCINKDAJKC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCINKDAJKC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::INJKGOIDIFK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::INJKGOIDIFK&, ::System::Int32&))((::PBYTE)hIl2Cpp + LBCINKDAJKC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LBCINKDAJKC JNGIKDDFIAB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LBCINKDAJKC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBCINKDAJKC_JNGIKDDFIAB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::LBCINKDAJKC JNGIKDDFIAB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LBCINKDAJKC EIFONLCJOPG)
	{
		return ((::LBCINKDAJKC(*)(::FlatBuffers::ByteBuffer*, ::LBCINKDAJKC))((::PBYTE)hIl2Cpp + LBCINKDAJKC_JNGIKDDFIAB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::INJKGOIDIFK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::INJKGOIDIFK&))((::PBYTE)hIl2Cpp + LBCINKDAJKC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
