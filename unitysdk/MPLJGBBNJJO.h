#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LOOJEIHNNEE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MPLJGBBNJJO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MPLJGBBNJJO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8052D0)
#define MPLJGBBNJJO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MPLJGBBNJJO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MPLJGBBNJJO_JPMJBNPEDJF_1_OFFSET UNITYSDK_OFFSET(0x1AD7A290)
#define MPLJGBBNJJO_JPMJBNPEDJF_OFFSET UNITYSDK_OFFSET(0x1AD7A190)
#define MPLJGBBNJJO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8052B0)
#define MPLJGBBNJJO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8052C0)
#define MPLJGBBNJJO___INIT_OFFSET UNITYSDK_OFFSET(0x805290)

inline static constexpr unsigned int MPLJGBBNJJO_TypeDefinitionIndex = 17126;

struct alignas(8) MPLJGBBNJJO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLJGBBNJJO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPLJGBBNJJO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LOOJEIHNNEE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LOOJEIHNNEE&, ::System::Int32&))((::PBYTE)hIl2Cpp + MPLJGBBNJJO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LOOJEIHNNEE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LOOJEIHNNEE&))((::PBYTE)hIl2Cpp + MPLJGBBNJJO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MPLJGBBNJJO JPMJBNPEDJF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MPLJGBBNJJO EIFONLCJOPG)
	{
		return ((::MPLJGBBNJJO(*)(::FlatBuffers::ByteBuffer*, ::MPLJGBBNJJO))((::PBYTE)hIl2Cpp + MPLJGBBNJJO_JPMJBNPEDJF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLJGBBNJJO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::MPLJGBBNJJO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MPLJGBBNJJO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPLJGBBNJJO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MPLJGBBNJJO JPMJBNPEDJF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MPLJGBBNJJO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPLJGBBNJJO_JPMJBNPEDJF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLJGBBNJJO_GHKKNCCLPAN_OFFSET))(this);
	}
};
