#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PEHDLCMNJHE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MAOPDACNBCI_APKIBIACGPK_1_OFFSET UNITYSDK_OFFSET(0x1959A410)
#define MAOPDACNBCI_APKIBIACGPK_OFFSET UNITYSDK_OFFSET(0x1959A3A0)
#define MAOPDACNBCI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MAOPDACNBCI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E62F0)
#define MAOPDACNBCI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MAOPDACNBCI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MAOPDACNBCI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E62E0)
#define MAOPDACNBCI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E62D0)
#define MAOPDACNBCI___INIT_OFFSET UNITYSDK_OFFSET(0x7E62B0)

inline static constexpr unsigned int MAOPDACNBCI_TypeDefinitionIndex = 12463;

struct alignas(8) MAOPDACNBCI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOPDACNBCI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MAOPDACNBCI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOPDACNBCI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MAOPDACNBCI APKIBIACGPK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MAOPDACNBCI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MAOPDACNBCI_APKIBIACGPK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PEHDLCMNJHE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PEHDLCMNJHE&, ::System::Int32&))((::PBYTE)hIl2Cpp + MAOPDACNBCI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::MAOPDACNBCI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MAOPDACNBCI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MAOPDACNBCI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PEHDLCMNJHE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PEHDLCMNJHE&))((::PBYTE)hIl2Cpp + MAOPDACNBCI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOPDACNBCI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MAOPDACNBCI APKIBIACGPK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MAOPDACNBCI EIFONLCJOPG)
	{
		return ((::MAOPDACNBCI(*)(::FlatBuffers::ByteBuffer*, ::MAOPDACNBCI))((::PBYTE)hIl2Cpp + MAOPDACNBCI_APKIBIACGPK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
