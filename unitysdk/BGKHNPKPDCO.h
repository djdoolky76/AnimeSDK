#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BLFGGFKGNBL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BGKHNPKPDCO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BGKHNPKPDCO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x761480)
#define BGKHNPKPDCO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BGKHNPKPDCO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BGKHNPKPDCO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7614C0)
#define BGKHNPKPDCO_MINIJBDHIHF_1_OFFSET UNITYSDK_OFFSET(0x15728B30)
#define BGKHNPKPDCO_MINIJBDHIHF_OFFSET UNITYSDK_OFFSET(0x15728AC0)
#define BGKHNPKPDCO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7614D0)
#define BGKHNPKPDCO___INIT_OFFSET UNITYSDK_OFFSET(0x761460)

inline static constexpr unsigned int BGKHNPKPDCO_TypeDefinitionIndex = 15914;

struct alignas(8) BGKHNPKPDCO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKHNPKPDCO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BGKHNPKPDCO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BGKHNPKPDCO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BGKHNPKPDCO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BGKHNPKPDCO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKHNPKPDCO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::BGKHNPKPDCO MINIJBDHIHF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BGKHNPKPDCO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BGKHNPKPDCO_MINIJBDHIHF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::BGKHNPKPDCO MINIJBDHIHF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BGKHNPKPDCO EIFONLCJOPG)
	{
		return ((::BGKHNPKPDCO(*)(::FlatBuffers::ByteBuffer*, ::BGKHNPKPDCO))((::PBYTE)hIl2Cpp + BGKHNPKPDCO_MINIJBDHIHF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BLFGGFKGNBL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BLFGGFKGNBL&, ::System::Int32&))((::PBYTE)hIl2Cpp + BGKHNPKPDCO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BLFGGFKGNBL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BLFGGFKGNBL&))((::PBYTE)hIl2Cpp + BGKHNPKPDCO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKHNPKPDCO_PPOMNIFACOL_OFFSET))(this);
	}
};
