#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KAJMPGPLPKD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BJPNBMCAOIF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BJPNBMCAOIF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C16F0)
#define BJPNBMCAOIF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BJPNBMCAOIF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BJPNBMCAOIF_IBNIACGPOOK_1_OFFSET UNITYSDK_OFFSET(0x17EF5760)
#define BJPNBMCAOIF_IBNIACGPOOK_OFFSET UNITYSDK_OFFSET(0x17EF56C0)
#define BJPNBMCAOIF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C16D0)
#define BJPNBMCAOIF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C16E0)
#define BJPNBMCAOIF___INIT_OFFSET UNITYSDK_OFFSET(0x7C16B0)

inline static constexpr unsigned int BJPNBMCAOIF_TypeDefinitionIndex = 12172;

struct alignas(8) BJPNBMCAOIF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPNBMCAOIF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BJPNBMCAOIF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BJPNBMCAOIF IBNIACGPOOK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BJPNBMCAOIF EIFONLCJOPG)
	{
		return ((::BJPNBMCAOIF(*)(::FlatBuffers::ByteBuffer*, ::BJPNBMCAOIF))((::PBYTE)hIl2Cpp + BJPNBMCAOIF_IBNIACGPOOK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::BJPNBMCAOIF IBNIACGPOOK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BJPNBMCAOIF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BJPNBMCAOIF_IBNIACGPOOK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPNBMCAOIF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KAJMPGPLPKD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KAJMPGPLPKD&, ::System::Int32&))((::PBYTE)hIl2Cpp + BJPNBMCAOIF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KAJMPGPLPKD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KAJMPGPLPKD&))((::PBYTE)hIl2Cpp + BJPNBMCAOIF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPNBMCAOIF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::BJPNBMCAOIF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BJPNBMCAOIF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BJPNBMCAOIF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
