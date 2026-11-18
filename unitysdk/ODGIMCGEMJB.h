#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PMFMOMKLCLL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ODGIMCGEMJB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ODGIMCGEMJB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81E6B0)
#define ODGIMCGEMJB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ODGIMCGEMJB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ODGIMCGEMJB_KEPJJGDJJBH_1_OFFSET UNITYSDK_OFFSET(0x1BF78080)
#define ODGIMCGEMJB_KEPJJGDJJBH_OFFSET UNITYSDK_OFFSET(0x1BF78010)
#define ODGIMCGEMJB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81E700)
#define ODGIMCGEMJB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81E6F0)
#define ODGIMCGEMJB___INIT_OFFSET UNITYSDK_OFFSET(0x81E690)

inline static constexpr unsigned int ODGIMCGEMJB_TypeDefinitionIndex = 14049;

struct alignas(8) ODGIMCGEMJB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGIMCGEMJB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODGIMCGEMJB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGIMCGEMJB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::ODGIMCGEMJB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ODGIMCGEMJB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODGIMCGEMJB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGIMCGEMJB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PMFMOMKLCLL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PMFMOMKLCLL&))((::PBYTE)hIl2Cpp + ODGIMCGEMJB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ODGIMCGEMJB KEPJJGDJJBH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ODGIMCGEMJB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODGIMCGEMJB_KEPJJGDJJBH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PMFMOMKLCLL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PMFMOMKLCLL&, ::System::Int32&))((::PBYTE)hIl2Cpp + ODGIMCGEMJB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::ODGIMCGEMJB KEPJJGDJJBH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ODGIMCGEMJB EIFONLCJOPG)
	{
		return ((::ODGIMCGEMJB(*)(::FlatBuffers::ByteBuffer*, ::ODGIMCGEMJB))((::PBYTE)hIl2Cpp + ODGIMCGEMJB_KEPJJGDJJBH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
