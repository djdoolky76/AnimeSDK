#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CLLODAJIGCO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BIOMABDCDJB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BIOMABDCDJB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ACAB0)
#define BIOMABDCDJB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BIOMABDCDJB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BIOMABDCDJB_JJMOPFEJHCI_1_OFFSET UNITYSDK_OFFSET(0x1775CB20)
#define BIOMABDCDJB_JJMOPFEJHCI_OFFSET UNITYSDK_OFFSET(0x1775CAB0)
#define BIOMABDCDJB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7ACA90)
#define BIOMABDCDJB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ACAA0)
#define BIOMABDCDJB___INIT_OFFSET UNITYSDK_OFFSET(0x7ACA70)

inline static constexpr unsigned int BIOMABDCDJB_TypeDefinitionIndex = 12775;

struct alignas(8) BIOMABDCDJB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIOMABDCDJB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIOMABDCDJB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIOMABDCDJB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CLLODAJIGCO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CLLODAJIGCO&, ::System::Int32&))((::PBYTE)hIl2Cpp + BIOMABDCDJB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CLLODAJIGCO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CLLODAJIGCO&))((::PBYTE)hIl2Cpp + BIOMABDCDJB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIOMABDCDJB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::BIOMABDCDJB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BIOMABDCDJB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIOMABDCDJB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BIOMABDCDJB JJMOPFEJHCI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BIOMABDCDJB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIOMABDCDJB_JJMOPFEJHCI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::BIOMABDCDJB JJMOPFEJHCI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BIOMABDCDJB EIFONLCJOPG)
	{
		return ((::BIOMABDCDJB(*)(::FlatBuffers::ByteBuffer*, ::BIOMABDCDJB))((::PBYTE)hIl2Cpp + BIOMABDCDJB_JJMOPFEJHCI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
