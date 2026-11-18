#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OBHDIGJCEOD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EAJPFEFBGHN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EAJPFEFBGHN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F22A0)
#define EAJPFEFBGHN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EAJPFEFBGHN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EAJPFEFBGHN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F2290)
#define EAJPFEFBGHN_MENHBMAKKCI_1_OFFSET UNITYSDK_OFFSET(0x19F426C0)
#define EAJPFEFBGHN_MENHBMAKKCI_OFFSET UNITYSDK_OFFSET(0x19F42620)
#define EAJPFEFBGHN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F22E0)
#define EAJPFEFBGHN___INIT_OFFSET UNITYSDK_OFFSET(0x7F2270)

inline static constexpr unsigned int EAJPFEFBGHN_TypeDefinitionIndex = 10725;

struct alignas(8) EAJPFEFBGHN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJPFEFBGHN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EAJPFEFBGHN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJPFEFBGHN_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OBHDIGJCEOD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OBHDIGJCEOD&))((::PBYTE)hIl2Cpp + EAJPFEFBGHN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OBHDIGJCEOD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OBHDIGJCEOD&, ::System::Int32&))((::PBYTE)hIl2Cpp + EAJPFEFBGHN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::EAJPFEFBGHN MENHBMAKKCI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EAJPFEFBGHN EIFONLCJOPG)
	{
		return ((::EAJPFEFBGHN(*)(::FlatBuffers::ByteBuffer*, ::EAJPFEFBGHN))((::PBYTE)hIl2Cpp + EAJPFEFBGHN_MENHBMAKKCI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::EAJPFEFBGHN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EAJPFEFBGHN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EAJPFEFBGHN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJPFEFBGHN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::EAJPFEFBGHN MENHBMAKKCI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EAJPFEFBGHN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EAJPFEFBGHN_MENHBMAKKCI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
