#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MEPIDLENHEF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OBDEDKAOPCI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OBDEDKAOPCI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DA720)
#define OBDEDKAOPCI_BPBINPBELDF_1_OFFSET UNITYSDK_OFFSET(0x19127E00)
#define OBDEDKAOPCI_BPBINPBELDF_OFFSET UNITYSDK_OFFSET(0x19127D60)
#define OBDEDKAOPCI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OBDEDKAOPCI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OBDEDKAOPCI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DA700)
#define OBDEDKAOPCI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DA710)
#define OBDEDKAOPCI___INIT_OFFSET UNITYSDK_OFFSET(0x7DA6E0)

inline static constexpr unsigned int OBDEDKAOPCI_TypeDefinitionIndex = 9663;

struct alignas(8) OBDEDKAOPCI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDEDKAOPCI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBDEDKAOPCI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MEPIDLENHEF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MEPIDLENHEF&, ::System::Int32&))((::PBYTE)hIl2Cpp + OBDEDKAOPCI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MEPIDLENHEF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MEPIDLENHEF&))((::PBYTE)hIl2Cpp + OBDEDKAOPCI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDEDKAOPCI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OBDEDKAOPCI BPBINPBELDF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OBDEDKAOPCI EIFONLCJOPG)
	{
		return ((::OBDEDKAOPCI(*)(::FlatBuffers::ByteBuffer*, ::OBDEDKAOPCI))((::PBYTE)hIl2Cpp + OBDEDKAOPCI_BPBINPBELDF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::OBDEDKAOPCI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBDEDKAOPCI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBDEDKAOPCI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OBDEDKAOPCI BPBINPBELDF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBDEDKAOPCI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBDEDKAOPCI_BPBINPBELDF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDEDKAOPCI_GHKKNCCLPAN_OFFSET))(this);
	}
};
