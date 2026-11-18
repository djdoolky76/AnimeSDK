#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NDOGMOAJDCH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NDHKCLDODEE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NDHKCLDODEE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x820460)
#define NDHKCLDODEE_CFFPNDMHJGH_1_OFFSET UNITYSDK_OFFSET(0x1C189810)
#define NDHKCLDODEE_CFFPNDMHJGH_OFFSET UNITYSDK_OFFSET(0x1C1897B0)
#define NDHKCLDODEE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NDHKCLDODEE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NDHKCLDODEE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8204B0)
#define NDHKCLDODEE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8204A0)
#define NDHKCLDODEE___INIT_OFFSET UNITYSDK_OFFSET(0x820440)

inline static constexpr unsigned int NDHKCLDODEE_TypeDefinitionIndex = 11694;

struct alignas(8) NDHKCLDODEE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHKCLDODEE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDHKCLDODEE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHKCLDODEE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::NDHKCLDODEE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NDHKCLDODEE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDHKCLDODEE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NDHKCLDODEE CFFPNDMHJGH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NDHKCLDODEE EIFONLCJOPG)
	{
		return ((::NDHKCLDODEE(*)(::FlatBuffers::ByteBuffer*, ::NDHKCLDODEE))((::PBYTE)hIl2Cpp + NDHKCLDODEE_CFFPNDMHJGH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::NDHKCLDODEE CFFPNDMHJGH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NDHKCLDODEE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDHKCLDODEE_CFFPNDMHJGH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHKCLDODEE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NDOGMOAJDCH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NDOGMOAJDCH&))((::PBYTE)hIl2Cpp + NDHKCLDODEE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NDOGMOAJDCH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NDOGMOAJDCH&, ::System::Int32&))((::PBYTE)hIl2Cpp + NDHKCLDODEE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
