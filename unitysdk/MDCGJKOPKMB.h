#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KDBJMLEODIL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MDCGJKOPKMB_ALFHMKCDFKI_1_OFFSET UNITYSDK_OFFSET(0x1B3113A0)
#define MDCGJKOPKMB_ALFHMKCDFKI_OFFSET UNITYSDK_OFFSET(0x1B3112A0)
#define MDCGJKOPKMB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MDCGJKOPKMB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80B760)
#define MDCGJKOPKMB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MDCGJKOPKMB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MDCGJKOPKMB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80B7A0)
#define MDCGJKOPKMB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80B7B0)
#define MDCGJKOPKMB___INIT_OFFSET UNITYSDK_OFFSET(0x80B740)

inline static constexpr unsigned int MDCGJKOPKMB_TypeDefinitionIndex = 9197;

struct alignas(8) MDCGJKOPKMB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCGJKOPKMB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDCGJKOPKMB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MDCGJKOPKMB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MDCGJKOPKMB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDCGJKOPKMB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MDCGJKOPKMB ALFHMKCDFKI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MDCGJKOPKMB EIFONLCJOPG)
	{
		return ((::MDCGJKOPKMB(*)(::FlatBuffers::ByteBuffer*, ::MDCGJKOPKMB))((::PBYTE)hIl2Cpp + MDCGJKOPKMB_ALFHMKCDFKI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KDBJMLEODIL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KDBJMLEODIL&))((::PBYTE)hIl2Cpp + MDCGJKOPKMB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MDCGJKOPKMB ALFHMKCDFKI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MDCGJKOPKMB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDCGJKOPKMB_ALFHMKCDFKI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCGJKOPKMB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KDBJMLEODIL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KDBJMLEODIL&, ::System::Int32&))((::PBYTE)hIl2Cpp + MDCGJKOPKMB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCGJKOPKMB_PPOMNIFACOL_OFFSET))(this);
	}
};
