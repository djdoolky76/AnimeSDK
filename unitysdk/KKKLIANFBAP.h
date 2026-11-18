#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GFEMPAOGMGF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KKKLIANFBAP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KKKLIANFBAP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x758B30)
#define KKKLIANFBAP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KKKLIANFBAP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KKKLIANFBAP_LFDINGMGDDK_1_OFFSET UNITYSDK_OFFSET(0x153042F0)
#define KKKLIANFBAP_LFDINGMGDDK_OFFSET UNITYSDK_OFFSET(0x153041B0)
#define KKKLIANFBAP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x758B70)
#define KKKLIANFBAP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x758B80)
#define KKKLIANFBAP___INIT_OFFSET UNITYSDK_OFFSET(0x758B10)

inline static constexpr unsigned int KKKLIANFBAP_TypeDefinitionIndex = 9362;

struct alignas(8) KKKLIANFBAP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKLIANFBAP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKKLIANFBAP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKLIANFBAP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KKKLIANFBAP LFDINGMGDDK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KKKLIANFBAP EIFONLCJOPG)
	{
		return ((::KKKLIANFBAP(*)(::FlatBuffers::ByteBuffer*, ::KKKLIANFBAP))((::PBYTE)hIl2Cpp + KKKLIANFBAP_LFDINGMGDDK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::KKKLIANFBAP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KKKLIANFBAP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKKLIANFBAP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GFEMPAOGMGF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GFEMPAOGMGF&))((::PBYTE)hIl2Cpp + KKKLIANFBAP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KKKLIANFBAP LFDINGMGDDK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KKKLIANFBAP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKKLIANFBAP_LFDINGMGDDK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GFEMPAOGMGF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GFEMPAOGMGF&, ::System::Int32&))((::PBYTE)hIl2Cpp + KKKLIANFBAP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKLIANFBAP_PPOMNIFACOL_OFFSET))(this);
	}
};
