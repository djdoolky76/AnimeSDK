#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HHFDPCFPNPG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LBDPANHIMOA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LBDPANHIMOA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D5D20)
#define LBDPANHIMOA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LBDPANHIMOA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LBDPANHIMOA_KBLJNJCADJD_1_OFFSET UNITYSDK_OFFSET(0x18BDF6F0)
#define LBDPANHIMOA_KBLJNJCADJD_OFFSET UNITYSDK_OFFSET(0x18BDF680)
#define LBDPANHIMOA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D5D70)
#define LBDPANHIMOA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D5D60)
#define LBDPANHIMOA___INIT_OFFSET UNITYSDK_OFFSET(0x7D5D00)

inline static constexpr unsigned int LBDPANHIMOA_TypeDefinitionIndex = 13527;

struct alignas(8) LBDPANHIMOA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDPANHIMOA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBDPANHIMOA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HHFDPCFPNPG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HHFDPCFPNPG&))((::PBYTE)hIl2Cpp + LBDPANHIMOA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::LBDPANHIMOA KBLJNJCADJD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LBDPANHIMOA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBDPANHIMOA_KBLJNJCADJD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::LBDPANHIMOA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LBDPANHIMOA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBDPANHIMOA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDPANHIMOA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LBDPANHIMOA KBLJNJCADJD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LBDPANHIMOA EIFONLCJOPG)
	{
		return ((::LBDPANHIMOA(*)(::FlatBuffers::ByteBuffer*, ::LBDPANHIMOA))((::PBYTE)hIl2Cpp + LBDPANHIMOA_KBLJNJCADJD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDPANHIMOA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HHFDPCFPNPG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HHFDPCFPNPG&, ::System::Int32&))((::PBYTE)hIl2Cpp + LBDPANHIMOA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
