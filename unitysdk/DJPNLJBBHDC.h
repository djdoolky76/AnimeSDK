#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MFCKNAKJJKA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DJPNLJBBHDC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DJPNLJBBHDC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FA3F0)
#define DJPNLJBBHDC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DJPNLJBBHDC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DJPNLJBBHDC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FA3D0)
#define DJPNLJBBHDC_NDLPKDJJFPF_1_OFFSET UNITYSDK_OFFSET(0x1A5575E0)
#define DJPNLJBBHDC_NDLPKDJJFPF_OFFSET UNITYSDK_OFFSET(0x1A557540)
#define DJPNLJBBHDC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FA3E0)
#define DJPNLJBBHDC___INIT_OFFSET UNITYSDK_OFFSET(0x7FA3B0)

inline static constexpr unsigned int DJPNLJBBHDC_TypeDefinitionIndex = 17324;

struct alignas(8) DJPNLJBBHDC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPNLJBBHDC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJPNLJBBHDC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MFCKNAKJJKA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MFCKNAKJJKA&))((::PBYTE)hIl2Cpp + DJPNLJBBHDC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MFCKNAKJJKA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MFCKNAKJJKA&, ::System::Int32&))((::PBYTE)hIl2Cpp + DJPNLJBBHDC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPNLJBBHDC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DJPNLJBBHDC NDLPKDJJFPF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DJPNLJBBHDC EIFONLCJOPG)
	{
		return ((::DJPNLJBBHDC(*)(::FlatBuffers::ByteBuffer*, ::DJPNLJBBHDC))((::PBYTE)hIl2Cpp + DJPNLJBBHDC_NDLPKDJJFPF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::DJPNLJBBHDC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DJPNLJBBHDC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJPNLJBBHDC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPNLJBBHDC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DJPNLJBBHDC NDLPKDJJFPF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DJPNLJBBHDC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJPNLJBBHDC_NDLPKDJJFPF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
