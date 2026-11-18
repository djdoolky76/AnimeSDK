#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BCJBOANHGAO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HCFEPEPBDFI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HCFEPEPBDFI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F8270)
#define HCFEPEPBDFI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HCFEPEPBDFI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HCFEPEPBDFI_KLEHNHBCAHG_1_OFFSET UNITYSDK_OFFSET(0x1A4E7380)
#define HCFEPEPBDFI_KLEHNHBCAHG_OFFSET UNITYSDK_OFFSET(0x1A4E72E0)
#define HCFEPEPBDFI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F8260)
#define HCFEPEPBDFI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F82B0)
#define HCFEPEPBDFI___INIT_OFFSET UNITYSDK_OFFSET(0x7F8240)

inline static constexpr unsigned int HCFEPEPBDFI_TypeDefinitionIndex = 16276;

struct alignas(8) HCFEPEPBDFI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFEPEPBDFI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCFEPEPBDFI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BCJBOANHGAO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BCJBOANHGAO&))((::PBYTE)hIl2Cpp + HCFEPEPBDFI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BCJBOANHGAO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BCJBOANHGAO&, ::System::Int32&))((::PBYTE)hIl2Cpp + HCFEPEPBDFI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::HCFEPEPBDFI KLEHNHBCAHG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HCFEPEPBDFI EIFONLCJOPG)
	{
		return ((::HCFEPEPBDFI(*)(::FlatBuffers::ByteBuffer*, ::HCFEPEPBDFI))((::PBYTE)hIl2Cpp + HCFEPEPBDFI_KLEHNHBCAHG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HCFEPEPBDFI KLEHNHBCAHG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCFEPEPBDFI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCFEPEPBDFI_KLEHNHBCAHG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::HCFEPEPBDFI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCFEPEPBDFI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCFEPEPBDFI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFEPEPBDFI_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFEPEPBDFI_PPOMNIFACOL_OFFSET))(this);
	}
};
