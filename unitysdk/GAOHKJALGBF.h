#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BGPOBLOJPHH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GAOHKJALGBF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GAOHKJALGBF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F7D60)
#define GAOHKJALGBF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GAOHKJALGBF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GAOHKJALGBF_INOHEPLOKIL_1_OFFSET UNITYSDK_OFFSET(0x1A4D17F0)
#define GAOHKJALGBF_INOHEPLOKIL_OFFSET UNITYSDK_OFFSET(0x1A4D1780)
#define GAOHKJALGBF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F7DA0)
#define GAOHKJALGBF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F7DB0)
#define GAOHKJALGBF___INIT_OFFSET UNITYSDK_OFFSET(0x7F7D40)

inline static constexpr unsigned int GAOHKJALGBF_TypeDefinitionIndex = 17345;

struct alignas(8) GAOHKJALGBF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAOHKJALGBF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GAOHKJALGBF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GAOHKJALGBF INOHEPLOKIL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GAOHKJALGBF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GAOHKJALGBF_INOHEPLOKIL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::GAOHKJALGBF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GAOHKJALGBF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GAOHKJALGBF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BGPOBLOJPHH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BGPOBLOJPHH&, ::System::Int32&))((::PBYTE)hIl2Cpp + GAOHKJALGBF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAOHKJALGBF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GAOHKJALGBF INOHEPLOKIL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GAOHKJALGBF EIFONLCJOPG)
	{
		return ((::GAOHKJALGBF(*)(::FlatBuffers::ByteBuffer*, ::GAOHKJALGBF))((::PBYTE)hIl2Cpp + GAOHKJALGBF_INOHEPLOKIL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAOHKJALGBF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BGPOBLOJPHH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BGPOBLOJPHH&))((::PBYTE)hIl2Cpp + GAOHKJALGBF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
