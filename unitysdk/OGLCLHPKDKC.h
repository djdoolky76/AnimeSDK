#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PKFHPLCKHKL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OGLCLHPKDKC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OGLCLHPKDKC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x820A70)
#define OGLCLHPKDKC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OGLCLHPKDKC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OGLCLHPKDKC_LLFOBCBDBHE_1_OFFSET UNITYSDK_OFFSET(0x1C19EEA0)
#define OGLCLHPKDKC_LLFOBCBDBHE_OFFSET UNITYSDK_OFFSET(0x1C19ECA0)
#define OGLCLHPKDKC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x820AB0)
#define OGLCLHPKDKC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x820A60)
#define OGLCLHPKDKC___INIT_OFFSET UNITYSDK_OFFSET(0x820A40)

inline static constexpr unsigned int OGLCLHPKDKC_TypeDefinitionIndex = 10030;

struct alignas(8) OGLCLHPKDKC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLCLHPKDKC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGLCLHPKDKC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PKFHPLCKHKL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PKFHPLCKHKL&))((::PBYTE)hIl2Cpp + OGLCLHPKDKC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLCLHPKDKC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLCLHPKDKC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OGLCLHPKDKC LLFOBCBDBHE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OGLCLHPKDKC EIFONLCJOPG)
	{
		return ((::OGLCLHPKDKC(*)(::FlatBuffers::ByteBuffer*, ::OGLCLHPKDKC))((::PBYTE)hIl2Cpp + OGLCLHPKDKC_LLFOBCBDBHE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::OGLCLHPKDKC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OGLCLHPKDKC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGLCLHPKDKC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PKFHPLCKHKL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PKFHPLCKHKL&, ::System::Int32&))((::PBYTE)hIl2Cpp + OGLCLHPKDKC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::OGLCLHPKDKC LLFOBCBDBHE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OGLCLHPKDKC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGLCLHPKDKC_LLFOBCBDBHE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
