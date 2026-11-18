#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PCNEMIJOHAI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NJAJKJMJIGM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NJAJKJMJIGM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x805700)
#define NJAJKJMJIGM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NJAJKJMJIGM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NJAJKJMJIGM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x805750)
#define NJAJKJMJIGM_NCGADGCHFCC_1_OFFSET UNITYSDK_OFFSET(0x1AD80E90)
#define NJAJKJMJIGM_NCGADGCHFCC_OFFSET UNITYSDK_OFFSET(0x1AD80E20)
#define NJAJKJMJIGM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x805740)
#define NJAJKJMJIGM___INIT_OFFSET UNITYSDK_OFFSET(0x8056E0)

inline static constexpr unsigned int NJAJKJMJIGM_TypeDefinitionIndex = 11386;

struct alignas(8) NJAJKJMJIGM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJAJKJMJIGM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJAJKJMJIGM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NJAJKJMJIGM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NJAJKJMJIGM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJAJKJMJIGM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NJAJKJMJIGM NCGADGCHFCC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NJAJKJMJIGM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJAJKJMJIGM_NCGADGCHFCC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PCNEMIJOHAI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PCNEMIJOHAI&))((::PBYTE)hIl2Cpp + NJAJKJMJIGM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJAJKJMJIGM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NJAJKJMJIGM NCGADGCHFCC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NJAJKJMJIGM EIFONLCJOPG)
	{
		return ((::NJAJKJMJIGM(*)(::FlatBuffers::ByteBuffer*, ::NJAJKJMJIGM))((::PBYTE)hIl2Cpp + NJAJKJMJIGM_NCGADGCHFCC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJAJKJMJIGM_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PCNEMIJOHAI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PCNEMIJOHAI&, ::System::Int32&))((::PBYTE)hIl2Cpp + NJAJKJMJIGM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
