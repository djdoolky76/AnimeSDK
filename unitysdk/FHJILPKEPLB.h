#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DALMPCOJIPM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FHJILPKEPLB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FHJILPKEPLB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7547F0)
#define FHJILPKEPLB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FHJILPKEPLB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FHJILPKEPLB_HGIFMGOKFCC_1_OFFSET UNITYSDK_OFFSET(0x152C02D0)
#define FHJILPKEPLB_HGIFMGOKFCC_OFFSET UNITYSDK_OFFSET(0x152C0260)
#define FHJILPKEPLB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7548D0)
#define FHJILPKEPLB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7548E0)
#define FHJILPKEPLB___INIT_OFFSET UNITYSDK_OFFSET(0x754770)

inline static constexpr unsigned int FHJILPKEPLB_TypeDefinitionIndex = 13689;

struct alignas(8) FHJILPKEPLB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJILPKEPLB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHJILPKEPLB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJILPKEPLB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::FHJILPKEPLB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHJILPKEPLB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHJILPKEPLB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DALMPCOJIPM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DALMPCOJIPM&))((::PBYTE)hIl2Cpp + FHJILPKEPLB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DALMPCOJIPM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DALMPCOJIPM&, ::System::Int32&))((::PBYTE)hIl2Cpp + FHJILPKEPLB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::FHJILPKEPLB HGIFMGOKFCC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHJILPKEPLB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHJILPKEPLB_HGIFMGOKFCC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJILPKEPLB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::FHJILPKEPLB HGIFMGOKFCC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FHJILPKEPLB EIFONLCJOPG)
	{
		return ((::FHJILPKEPLB(*)(::FlatBuffers::ByteBuffer*, ::FHJILPKEPLB))((::PBYTE)hIl2Cpp + FHJILPKEPLB_HGIFMGOKFCC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
