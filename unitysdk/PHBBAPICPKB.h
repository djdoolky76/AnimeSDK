#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DOEKGJBCDIF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHBBAPICPKB_AFNCEMMFCEJ_1_OFFSET UNITYSDK_OFFSET(0x1D004100)
#define PHBBAPICPKB_AFNCEMMFCEJ_OFFSET UNITYSDK_OFFSET(0x1D004000)
#define PHBBAPICPKB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PHBBAPICPKB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8ABE50)
#define PHBBAPICPKB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PHBBAPICPKB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PHBBAPICPKB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8ABE40)
#define PHBBAPICPKB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8ABE90)
#define PHBBAPICPKB___INIT_OFFSET UNITYSDK_OFFSET(0x8ABE20)

inline static constexpr unsigned int PHBBAPICPKB_TypeDefinitionIndex = 11210;

struct alignas(8) PHBBAPICPKB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBBAPICPKB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHBBAPICPKB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PHBBAPICPKB AFNCEMMFCEJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PHBBAPICPKB EIFONLCJOPG)
	{
		return ((::PHBBAPICPKB(*)(::FlatBuffers::ByteBuffer*, ::PHBBAPICPKB))((::PBYTE)hIl2Cpp + PHBBAPICPKB_AFNCEMMFCEJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBBAPICPKB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PHBBAPICPKB AFNCEMMFCEJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PHBBAPICPKB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHBBAPICPKB_AFNCEMMFCEJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DOEKGJBCDIF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DOEKGJBCDIF&, ::System::Int32&))((::PBYTE)hIl2Cpp + PHBBAPICPKB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::PHBBAPICPKB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PHBBAPICPKB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHBBAPICPKB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBBAPICPKB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DOEKGJBCDIF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DOEKGJBCDIF&))((::PBYTE)hIl2Cpp + PHBBAPICPKB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
