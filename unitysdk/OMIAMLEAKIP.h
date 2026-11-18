#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BOEOIIMNDBK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OMIAMLEAKIP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OMIAMLEAKIP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x805D30)
#define OMIAMLEAKIP_FKLOAPNDLJJ_1_OFFSET UNITYSDK_OFFSET(0x1AD908C0)
#define OMIAMLEAKIP_FKLOAPNDLJJ_OFFSET UNITYSDK_OFFSET(0x1AD90820)
#define OMIAMLEAKIP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OMIAMLEAKIP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OMIAMLEAKIP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x805D80)
#define OMIAMLEAKIP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x805D70)
#define OMIAMLEAKIP___INIT_OFFSET UNITYSDK_OFFSET(0x805D10)

inline static constexpr unsigned int OMIAMLEAKIP_TypeDefinitionIndex = 14522;

struct alignas(8) OMIAMLEAKIP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIAMLEAKIP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMIAMLEAKIP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIAMLEAKIP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OMIAMLEAKIP FKLOAPNDLJJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OMIAMLEAKIP EIFONLCJOPG)
	{
		return ((::OMIAMLEAKIP(*)(::FlatBuffers::ByteBuffer*, ::OMIAMLEAKIP))((::PBYTE)hIl2Cpp + OMIAMLEAKIP_FKLOAPNDLJJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::OMIAMLEAKIP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OMIAMLEAKIP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMIAMLEAKIP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIAMLEAKIP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OMIAMLEAKIP FKLOAPNDLJJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OMIAMLEAKIP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMIAMLEAKIP_FKLOAPNDLJJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BOEOIIMNDBK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BOEOIIMNDBK&))((::PBYTE)hIl2Cpp + OMIAMLEAKIP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BOEOIIMNDBK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BOEOIIMNDBK&, ::System::Int32&))((::PBYTE)hIl2Cpp + OMIAMLEAKIP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
