#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ECLNKDKGHDK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BFDDEJNELEO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BFDDEJNELEO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FB2C0)
#define BFDDEJNELEO_EFHNGBCLALH_1_OFFSET UNITYSDK_OFFSET(0x1A5791B0)
#define BFDDEJNELEO_EFHNGBCLALH_OFFSET UNITYSDK_OFFSET(0x1A578FB0)
#define BFDDEJNELEO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BFDDEJNELEO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BFDDEJNELEO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FB2B0)
#define BFDDEJNELEO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FB2A0)
#define BFDDEJNELEO___INIT_OFFSET UNITYSDK_OFFSET(0x7FB280)

inline static constexpr unsigned int BFDDEJNELEO_TypeDefinitionIndex = 14639;

struct alignas(8) BFDDEJNELEO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDDEJNELEO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFDDEJNELEO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDDEJNELEO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ECLNKDKGHDK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ECLNKDKGHDK&))((::PBYTE)hIl2Cpp + BFDDEJNELEO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::BFDDEJNELEO EFHNGBCLALH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BFDDEJNELEO EIFONLCJOPG)
	{
		return ((::BFDDEJNELEO(*)(::FlatBuffers::ByteBuffer*, ::BFDDEJNELEO))((::PBYTE)hIl2Cpp + BFDDEJNELEO_EFHNGBCLALH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDDEJNELEO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ECLNKDKGHDK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ECLNKDKGHDK&, ::System::Int32&))((::PBYTE)hIl2Cpp + BFDDEJNELEO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::BFDDEJNELEO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BFDDEJNELEO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFDDEJNELEO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BFDDEJNELEO EFHNGBCLALH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BFDDEJNELEO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFDDEJNELEO_EFHNGBCLALH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
