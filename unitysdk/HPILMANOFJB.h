#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FPLFHEENEBL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HPILMANOFJB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HPILMANOFJB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81BB80)
#define HPILMANOFJB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HPILMANOFJB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HPILMANOFJB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81BBC0)
#define HPILMANOFJB_ONGFGHIKBIA_1_OFFSET UNITYSDK_OFFSET(0x1BAE2C50)
#define HPILMANOFJB_ONGFGHIKBIA_OFFSET UNITYSDK_OFFSET(0x1BAE2BB0)
#define HPILMANOFJB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81BB70)
#define HPILMANOFJB___INIT_OFFSET UNITYSDK_OFFSET(0x81BB50)

inline static constexpr unsigned int HPILMANOFJB_TypeDefinitionIndex = 13776;

struct alignas(8) HPILMANOFJB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPILMANOFJB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPILMANOFJB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPILMANOFJB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HPILMANOFJB ONGFGHIKBIA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HPILMANOFJB EIFONLCJOPG)
	{
		return ((::HPILMANOFJB(*)(::FlatBuffers::ByteBuffer*, ::HPILMANOFJB))((::PBYTE)hIl2Cpp + HPILMANOFJB_ONGFGHIKBIA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HPILMANOFJB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HPILMANOFJB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPILMANOFJB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HPILMANOFJB ONGFGHIKBIA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HPILMANOFJB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPILMANOFJB_ONGFGHIKBIA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FPLFHEENEBL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FPLFHEENEBL&, ::System::Int32&))((::PBYTE)hIl2Cpp + HPILMANOFJB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FPLFHEENEBL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FPLFHEENEBL&))((::PBYTE)hIl2Cpp + HPILMANOFJB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPILMANOFJB_GHKKNCCLPAN_OFFSET))(this);
	}
};
