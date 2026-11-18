#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MAJLBFFBJNP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FHAJKDKPEID_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FHAJKDKPEID_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E3550)
#define FHAJKDKPEID_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FHAJKDKPEID_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FHAJKDKPEID_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E3590)
#define FHAJKDKPEID_PAJDECDHEEK_1_OFFSET UNITYSDK_OFFSET(0x1952A1E0)
#define FHAJKDKPEID_PAJDECDHEEK_OFFSET UNITYSDK_OFFSET(0x1952A0A0)
#define FHAJKDKPEID_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E35A0)
#define FHAJKDKPEID___INIT_OFFSET UNITYSDK_OFFSET(0x7E3530)

inline static constexpr unsigned int FHAJKDKPEID_TypeDefinitionIndex = 13854;

struct alignas(8) FHAJKDKPEID
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAJKDKPEID_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHAJKDKPEID___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FHAJKDKPEID PAJDECDHEEK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FHAJKDKPEID EIFONLCJOPG)
	{
		return ((::FHAJKDKPEID(*)(::FlatBuffers::ByteBuffer*, ::FHAJKDKPEID))((::PBYTE)hIl2Cpp + FHAJKDKPEID_PAJDECDHEEK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MAJLBFFBJNP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MAJLBFFBJNP&))((::PBYTE)hIl2Cpp + FHAJKDKPEID_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FHAJKDKPEID PAJDECDHEEK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHAJKDKPEID(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHAJKDKPEID_PAJDECDHEEK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::FHAJKDKPEID BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHAJKDKPEID(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHAJKDKPEID_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MAJLBFFBJNP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MAJLBFFBJNP&, ::System::Int32&))((::PBYTE)hIl2Cpp + FHAJKDKPEID_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAJKDKPEID_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAJKDKPEID_PPOMNIFACOL_OFFSET))(this);
	}
};
