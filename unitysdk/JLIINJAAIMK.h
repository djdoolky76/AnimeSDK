#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PLEALOJJOAP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JLIINJAAIMK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JLIINJAAIMK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76FD10)
#define JLIINJAAIMK_CKJJNCJFNBG_1_OFFSET UNITYSDK_OFFSET(0x15AAC7D0)
#define JLIINJAAIMK_CKJJNCJFNBG_OFFSET UNITYSDK_OFFSET(0x15AAC760)
#define JLIINJAAIMK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JLIINJAAIMK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JLIINJAAIMK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x76FD00)
#define JLIINJAAIMK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76FD50)
#define JLIINJAAIMK___INIT_OFFSET UNITYSDK_OFFSET(0x76FCE0)

inline static constexpr unsigned int JLIINJAAIMK_TypeDefinitionIndex = 11554;

struct alignas(8) JLIINJAAIMK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLIINJAAIMK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JLIINJAAIMK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PLEALOJJOAP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PLEALOJJOAP&))((::PBYTE)hIl2Cpp + JLIINJAAIMK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PLEALOJJOAP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PLEALOJJOAP&, ::System::Int32&))((::PBYTE)hIl2Cpp + JLIINJAAIMK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::JLIINJAAIMK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JLIINJAAIMK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JLIINJAAIMK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JLIINJAAIMK CKJJNCJFNBG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JLIINJAAIMK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JLIINJAAIMK_CKJJNCJFNBG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::JLIINJAAIMK CKJJNCJFNBG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JLIINJAAIMK EIFONLCJOPG)
	{
		return ((::JLIINJAAIMK(*)(::FlatBuffers::ByteBuffer*, ::JLIINJAAIMK))((::PBYTE)hIl2Cpp + JLIINJAAIMK_CKJJNCJFNBG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLIINJAAIMK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLIINJAAIMK_GHKKNCCLPAN_OFFSET))(this);
	}
};
