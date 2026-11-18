#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HENIDDICPFP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HPMPPHHFNFK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HPMPPHHFNFK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80A4D0)
#define HPMPPHHFNFK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HPMPPHHFNFK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HPMPPHHFNFK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80A4C0)
#define HPMPPHHFNFK_MDMFLOGNBAM_1_OFFSET UNITYSDK_OFFSET(0x1B127B80)
#define HPMPPHHFNFK_MDMFLOGNBAM_OFFSET UNITYSDK_OFFSET(0x1B127B10)
#define HPMPPHHFNFK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80A510)
#define HPMPPHHFNFK___INIT_OFFSET UNITYSDK_OFFSET(0x80A4A0)

inline static constexpr unsigned int HPMPPHHFNFK_TypeDefinitionIndex = 14340;

struct alignas(8) HPMPPHHFNFK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMPPHHFNFK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPMPPHHFNFK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HENIDDICPFP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HENIDDICPFP&, ::System::Int32&))((::PBYTE)hIl2Cpp + HPMPPHHFNFK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::HPMPPHHFNFK MDMFLOGNBAM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HPMPPHHFNFK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPMPPHHFNFK_MDMFLOGNBAM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMPPHHFNFK_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HENIDDICPFP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HENIDDICPFP&))((::PBYTE)hIl2Cpp + HPMPPHHFNFK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HPMPPHHFNFK MDMFLOGNBAM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HPMPPHHFNFK EIFONLCJOPG)
	{
		return ((::HPMPPHHFNFK(*)(::FlatBuffers::ByteBuffer*, ::HPMPPHHFNFK))((::PBYTE)hIl2Cpp + HPMPPHHFNFK_MDMFLOGNBAM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HPMPPHHFNFK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HPMPPHHFNFK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPMPPHHFNFK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMPPHHFNFK_PPOMNIFACOL_OFFSET))(this);
	}
};
