#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LENLLMIAKLK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JFJNAOMCHOM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JFJNAOMCHOM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x758510)
#define JFJNAOMCHOM_DFCMFCINGBC_1_OFFSET UNITYSDK_OFFSET(0x152F51F0)
#define JFJNAOMCHOM_DFCMFCINGBC_OFFSET UNITYSDK_OFFSET(0x152F5180)
#define JFJNAOMCHOM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JFJNAOMCHOM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JFJNAOMCHOM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x758560)
#define JFJNAOMCHOM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x758550)
#define JFJNAOMCHOM___INIT_OFFSET UNITYSDK_OFFSET(0x7584F0)

inline static constexpr unsigned int JFJNAOMCHOM_TypeDefinitionIndex = 17112;

struct alignas(8) JFJNAOMCHOM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJNAOMCHOM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JFJNAOMCHOM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JFJNAOMCHOM DFCMFCINGBC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JFJNAOMCHOM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JFJNAOMCHOM_DFCMFCINGBC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::JFJNAOMCHOM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JFJNAOMCHOM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JFJNAOMCHOM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LENLLMIAKLK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LENLLMIAKLK&))((::PBYTE)hIl2Cpp + JFJNAOMCHOM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JFJNAOMCHOM DFCMFCINGBC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JFJNAOMCHOM EIFONLCJOPG)
	{
		return ((::JFJNAOMCHOM(*)(::FlatBuffers::ByteBuffer*, ::JFJNAOMCHOM))((::PBYTE)hIl2Cpp + JFJNAOMCHOM_DFCMFCINGBC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJNAOMCHOM_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJNAOMCHOM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LENLLMIAKLK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LENLLMIAKLK&, ::System::Int32&))((::PBYTE)hIl2Cpp + JFJNAOMCHOM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
