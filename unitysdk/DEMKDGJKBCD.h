#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FNIGJFNCBDC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DEMKDGJKBCD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DEMKDGJKBCD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x816E30)
#define DEMKDGJKBCD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DEMKDGJKBCD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DEMKDGJKBCD_GJMALLPHNBD_1_OFFSET UNITYSDK_OFFSET(0x1B9A5370)
#define DEMKDGJKBCD_GJMALLPHNBD_OFFSET UNITYSDK_OFFSET(0x1B9A5310)
#define DEMKDGJKBCD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x816E10)
#define DEMKDGJKBCD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x816E20)
#define DEMKDGJKBCD___INIT_OFFSET UNITYSDK_OFFSET(0x816DF0)

inline static constexpr unsigned int DEMKDGJKBCD_TypeDefinitionIndex = 14887;

struct alignas(8) DEMKDGJKBCD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMKDGJKBCD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEMKDGJKBCD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FNIGJFNCBDC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FNIGJFNCBDC&))((::PBYTE)hIl2Cpp + DEMKDGJKBCD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FNIGJFNCBDC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FNIGJFNCBDC&, ::System::Int32&))((::PBYTE)hIl2Cpp + DEMKDGJKBCD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMKDGJKBCD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::DEMKDGJKBCD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DEMKDGJKBCD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEMKDGJKBCD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMKDGJKBCD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DEMKDGJKBCD GJMALLPHNBD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DEMKDGJKBCD EIFONLCJOPG)
	{
		return ((::DEMKDGJKBCD(*)(::FlatBuffers::ByteBuffer*, ::DEMKDGJKBCD))((::PBYTE)hIl2Cpp + DEMKDGJKBCD_GJMALLPHNBD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::DEMKDGJKBCD GJMALLPHNBD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DEMKDGJKBCD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEMKDGJKBCD_GJMALLPHNBD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
