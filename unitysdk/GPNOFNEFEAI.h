#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NCBLPPDCJJN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GPNOFNEFEAI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GPNOFNEFEAI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x78B590)
#define GPNOFNEFEAI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GPNOFNEFEAI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GPNOFNEFEAI_JIJGMHDMIGH_1_OFFSET UNITYSDK_OFFSET(0x16653CE0)
#define GPNOFNEFEAI_JIJGMHDMIGH_OFFSET UNITYSDK_OFFSET(0x16653C40)
#define GPNOFNEFEAI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x78B5D0)
#define GPNOFNEFEAI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x78B580)
#define GPNOFNEFEAI___INIT_OFFSET UNITYSDK_OFFSET(0x78B560)

inline static constexpr unsigned int GPNOFNEFEAI_TypeDefinitionIndex = 9900;

struct alignas(8) GPNOFNEFEAI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNOFNEFEAI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPNOFNEFEAI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNOFNEFEAI_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNOFNEFEAI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GPNOFNEFEAI JIJGMHDMIGH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GPNOFNEFEAI EIFONLCJOPG)
	{
		return ((::GPNOFNEFEAI(*)(::FlatBuffers::ByteBuffer*, ::GPNOFNEFEAI))((::PBYTE)hIl2Cpp + GPNOFNEFEAI_JIJGMHDMIGH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::GPNOFNEFEAI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GPNOFNEFEAI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPNOFNEFEAI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GPNOFNEFEAI JIJGMHDMIGH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GPNOFNEFEAI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPNOFNEFEAI_JIJGMHDMIGH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NCBLPPDCJJN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NCBLPPDCJJN&, ::System::Int32&))((::PBYTE)hIl2Cpp + GPNOFNEFEAI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NCBLPPDCJJN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NCBLPPDCJJN&))((::PBYTE)hIl2Cpp + GPNOFNEFEAI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
