#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IAILMGKJKIP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IHHHHKOHHNB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IHHHHKOHHNB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x812580)
#define IHHHHKOHHNB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IHHHHKOHHNB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IHHHHKOHHNB_KLNDNEKEOKB_1_OFFSET UNITYSDK_OFFSET(0x1B7CD3C0)
#define IHHHHKOHHNB_KLNDNEKEOKB_OFFSET UNITYSDK_OFFSET(0x1B7CD360)
#define IHHHHKOHHNB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8125C0)
#define IHHHHKOHHNB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8125D0)
#define IHHHHKOHHNB___INIT_OFFSET UNITYSDK_OFFSET(0x812560)

inline static constexpr unsigned int IHHHHKOHHNB_TypeDefinitionIndex = 17520;

struct alignas(8) IHHHHKOHHNB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHHHKOHHNB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IHHHHKOHHNB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::IHHHHKOHHNB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IHHHHKOHHNB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IHHHHKOHHNB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHHHKOHHNB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IAILMGKJKIP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IAILMGKJKIP&, ::System::Int32&))((::PBYTE)hIl2Cpp + IHHHHKOHHNB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IAILMGKJKIP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IAILMGKJKIP&))((::PBYTE)hIl2Cpp + IHHHHKOHHNB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHHHKOHHNB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::IHHHHKOHHNB KLNDNEKEOKB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IHHHHKOHHNB EIFONLCJOPG)
	{
		return ((::IHHHHKOHHNB(*)(::FlatBuffers::ByteBuffer*, ::IHHHHKOHHNB))((::PBYTE)hIl2Cpp + IHHHHKOHHNB_KLNDNEKEOKB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::IHHHHKOHHNB KLNDNEKEOKB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IHHHHKOHHNB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IHHHHKOHHNB_KLNDNEKEOKB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
