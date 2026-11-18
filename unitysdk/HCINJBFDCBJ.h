#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CBNENIDLGGK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HCINJBFDCBJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HCINJBFDCBJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x78B6B0)
#define HCINJBFDCBJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HCINJBFDCBJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HCINJBFDCBJ_JIDHJFHAJCN_1_OFFSET UNITYSDK_OFFSET(0x16656D20)
#define HCINJBFDCBJ_JIDHJFHAJCN_OFFSET UNITYSDK_OFFSET(0x16656CB0)
#define HCINJBFDCBJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x78B6A0)
#define HCINJBFDCBJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x78B6F0)
#define HCINJBFDCBJ___INIT_OFFSET UNITYSDK_OFFSET(0x78B680)

inline static constexpr unsigned int HCINJBFDCBJ_TypeDefinitionIndex = 17110;

struct alignas(8) HCINJBFDCBJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCINJBFDCBJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCINJBFDCBJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CBNENIDLGGK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CBNENIDLGGK&, ::System::Int32&))((::PBYTE)hIl2Cpp + HCINJBFDCBJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCINJBFDCBJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HCINJBFDCBJ JIDHJFHAJCN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCINJBFDCBJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCINJBFDCBJ_JIDHJFHAJCN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::HCINJBFDCBJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCINJBFDCBJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCINJBFDCBJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCINJBFDCBJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HCINJBFDCBJ JIDHJFHAJCN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HCINJBFDCBJ EIFONLCJOPG)
	{
		return ((::HCINJBFDCBJ(*)(::FlatBuffers::ByteBuffer*, ::HCINJBFDCBJ))((::PBYTE)hIl2Cpp + HCINJBFDCBJ_JIDHJFHAJCN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CBNENIDLGGK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CBNENIDLGGK&))((::PBYTE)hIl2Cpp + HCINJBFDCBJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
