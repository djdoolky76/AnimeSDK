#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CHKJBHDBFIP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HPGOJKGFIAH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HPGOJKGFIAH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x77A1C0)
#define HPGOJKGFIAH_EHGEKOPDOGM_1_OFFSET UNITYSDK_OFFSET(0x16100C80)
#define HPGOJKGFIAH_EHGEKOPDOGM_OFFSET UNITYSDK_OFFSET(0x16100A20)
#define HPGOJKGFIAH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HPGOJKGFIAH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HPGOJKGFIAH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x77A200)
#define HPGOJKGFIAH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x77A210)
#define HPGOJKGFIAH___INIT_OFFSET UNITYSDK_OFFSET(0x77A1A0)

inline static constexpr unsigned int HPGOJKGFIAH_TypeDefinitionIndex = 10257;

struct alignas(8) HPGOJKGFIAH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGOJKGFIAH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPGOJKGFIAH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HPGOJKGFIAH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HPGOJKGFIAH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPGOJKGFIAH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HPGOJKGFIAH EHGEKOPDOGM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HPGOJKGFIAH EIFONLCJOPG)
	{
		return ((::HPGOJKGFIAH(*)(::FlatBuffers::ByteBuffer*, ::HPGOJKGFIAH))((::PBYTE)hIl2Cpp + HPGOJKGFIAH_EHGEKOPDOGM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CHKJBHDBFIP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CHKJBHDBFIP&, ::System::Int32&))((::PBYTE)hIl2Cpp + HPGOJKGFIAH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CHKJBHDBFIP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CHKJBHDBFIP&))((::PBYTE)hIl2Cpp + HPGOJKGFIAH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HPGOJKGFIAH EHGEKOPDOGM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HPGOJKGFIAH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPGOJKGFIAH_EHGEKOPDOGM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGOJKGFIAH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGOJKGFIAH_GHKKNCCLPAN_OFFSET))(this);
	}
};
