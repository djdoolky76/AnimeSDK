#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KLOJDCANNOG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HKNKCLIJCAN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HKNKCLIJCAN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D4D10)
#define HKNKCLIJCAN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HKNKCLIJCAN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HKNKCLIJCAN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D4CF0)
#define HKNKCLIJCAN_PILPJBEGBKA_1_OFFSET UNITYSDK_OFFSET(0x18BB16E0)
#define HKNKCLIJCAN_PILPJBEGBKA_OFFSET UNITYSDK_OFFSET(0x18BB1440)
#define HKNKCLIJCAN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D4D00)
#define HKNKCLIJCAN___INIT_OFFSET UNITYSDK_OFFSET(0x7D4CD0)

inline static constexpr unsigned int HKNKCLIJCAN_TypeDefinitionIndex = 12534;

struct alignas(8) HKNKCLIJCAN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNKCLIJCAN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKNKCLIJCAN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HKNKCLIJCAN PILPJBEGBKA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HKNKCLIJCAN EIFONLCJOPG)
	{
		return ((::HKNKCLIJCAN(*)(::FlatBuffers::ByteBuffer*, ::HKNKCLIJCAN))((::PBYTE)hIl2Cpp + HKNKCLIJCAN_PILPJBEGBKA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KLOJDCANNOG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KLOJDCANNOG&, ::System::Int32&))((::PBYTE)hIl2Cpp + HKNKCLIJCAN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KLOJDCANNOG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KLOJDCANNOG&))((::PBYTE)hIl2Cpp + HKNKCLIJCAN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HKNKCLIJCAN PILPJBEGBKA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKNKCLIJCAN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKNKCLIJCAN_PILPJBEGBKA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNKCLIJCAN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::HKNKCLIJCAN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKNKCLIJCAN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKNKCLIJCAN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNKCLIJCAN_GHKKNCCLPAN_OFFSET))(this);
	}
};
