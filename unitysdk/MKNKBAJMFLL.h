#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LKGEHCNEKCI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MKNKBAJMFLL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MKNKBAJMFLL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C4390)
#define MKNKBAJMFLL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MKNKBAJMFLL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MKNKBAJMFLL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C43D0)
#define MKNKBAJMFLL_MBLCFNDPKKB_1_OFFSET UNITYSDK_OFFSET(0x17FC88E0)
#define MKNKBAJMFLL_MBLCFNDPKKB_OFFSET UNITYSDK_OFFSET(0x17FC87A0)
#define MKNKBAJMFLL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C4380)
#define MKNKBAJMFLL___INIT_OFFSET UNITYSDK_OFFSET(0x7C4360)

inline static constexpr unsigned int MKNKBAJMFLL_TypeDefinitionIndex = 17068;

struct alignas(8) MKNKBAJMFLL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNKBAJMFLL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKNKBAJMFLL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNKBAJMFLL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MKNKBAJMFLL MBLCFNDPKKB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MKNKBAJMFLL EIFONLCJOPG)
	{
		return ((::MKNKBAJMFLL(*)(::FlatBuffers::ByteBuffer*, ::MKNKBAJMFLL))((::PBYTE)hIl2Cpp + MKNKBAJMFLL_MBLCFNDPKKB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNKBAJMFLL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::MKNKBAJMFLL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKNKBAJMFLL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKNKBAJMFLL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LKGEHCNEKCI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LKGEHCNEKCI&))((::PBYTE)hIl2Cpp + MKNKBAJMFLL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MKNKBAJMFLL MBLCFNDPKKB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKNKBAJMFLL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKNKBAJMFLL_MBLCFNDPKKB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LKGEHCNEKCI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LKGEHCNEKCI&, ::System::Int32&))((::PBYTE)hIl2Cpp + MKNKBAJMFLL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
