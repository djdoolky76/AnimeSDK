#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EBKAFNDHBHE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HEPBIBECFCK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HEPBIBECFCK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x756E30)
#define HEPBIBECFCK_BJGEPPHCHHP_1_OFFSET UNITYSDK_OFFSET(0x152D91D0)
#define HEPBIBECFCK_BJGEPPHCHHP_OFFSET UNITYSDK_OFFSET(0x152D9160)
#define HEPBIBECFCK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HEPBIBECFCK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HEPBIBECFCK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x756E10)
#define HEPBIBECFCK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x756E20)
#define HEPBIBECFCK___INIT_OFFSET UNITYSDK_OFFSET(0x756DF0)

inline static constexpr unsigned int HEPBIBECFCK_TypeDefinitionIndex = 12409;

struct alignas(8) HEPBIBECFCK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPBIBECFCK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEPBIBECFCK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPBIBECFCK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HEPBIBECFCK BJGEPPHCHHP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HEPBIBECFCK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEPBIBECFCK_BJGEPPHCHHP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EBKAFNDHBHE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EBKAFNDHBHE&, ::System::Int32&))((::PBYTE)hIl2Cpp + HEPBIBECFCK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPBIBECFCK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EBKAFNDHBHE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EBKAFNDHBHE&))((::PBYTE)hIl2Cpp + HEPBIBECFCK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HEPBIBECFCK BJGEPPHCHHP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HEPBIBECFCK EIFONLCJOPG)
	{
		return ((::HEPBIBECFCK(*)(::FlatBuffers::ByteBuffer*, ::HEPBIBECFCK))((::PBYTE)hIl2Cpp + HEPBIBECFCK_BJGEPPHCHHP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HEPBIBECFCK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HEPBIBECFCK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEPBIBECFCK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
