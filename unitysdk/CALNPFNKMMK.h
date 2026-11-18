#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FFHCEOFGDMB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CALNPFNKMMK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CALNPFNKMMK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F5010)
#define CALNPFNKMMK_BPBABBCAJBK_1_OFFSET UNITYSDK_OFFSET(0x1A174B90)
#define CALNPFNKMMK_BPBABBCAJBK_OFFSET UNITYSDK_OFFSET(0x1A174AF0)
#define CALNPFNKMMK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CALNPFNKMMK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CALNPFNKMMK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F5050)
#define CALNPFNKMMK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F5000)
#define CALNPFNKMMK___INIT_OFFSET UNITYSDK_OFFSET(0x7F4FE0)

inline static constexpr unsigned int CALNPFNKMMK_TypeDefinitionIndex = 13114;

struct alignas(8) CALNPFNKMMK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CALNPFNKMMK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CALNPFNKMMK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CALNPFNKMMK_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FFHCEOFGDMB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FFHCEOFGDMB&))((::PBYTE)hIl2Cpp + CALNPFNKMMK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CALNPFNKMMK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CALNPFNKMMK BPBABBCAJBK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CALNPFNKMMK EIFONLCJOPG)
	{
		return ((::CALNPFNKMMK(*)(::FlatBuffers::ByteBuffer*, ::CALNPFNKMMK))((::PBYTE)hIl2Cpp + CALNPFNKMMK_BPBABBCAJBK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::CALNPFNKMMK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CALNPFNKMMK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CALNPFNKMMK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CALNPFNKMMK BPBABBCAJBK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CALNPFNKMMK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CALNPFNKMMK_BPBABBCAJBK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FFHCEOFGDMB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FFHCEOFGDMB&, ::System::Int32&))((::PBYTE)hIl2Cpp + CALNPFNKMMK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
