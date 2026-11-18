#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MANNBPDPBBN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EACCGNLGEBP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EACCGNLGEBP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F2200)
#define EACCGNLGEBP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EACCGNLGEBP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EACCGNLGEBP_HPODDHJMPNG_1_OFFSET UNITYSDK_OFFSET(0x19F41EE0)
#define EACCGNLGEBP_HPODDHJMPNG_OFFSET UNITYSDK_OFFSET(0x19F41E70)
#define EACCGNLGEBP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F21F0)
#define EACCGNLGEBP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F2240)
#define EACCGNLGEBP___INIT_OFFSET UNITYSDK_OFFSET(0x7F21D0)

inline static constexpr unsigned int EACCGNLGEBP_TypeDefinitionIndex = 15741;

struct alignas(8) EACCGNLGEBP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EACCGNLGEBP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EACCGNLGEBP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MANNBPDPBBN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MANNBPDPBBN&, ::System::Int32&))((::PBYTE)hIl2Cpp + EACCGNLGEBP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::EACCGNLGEBP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EACCGNLGEBP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EACCGNLGEBP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EACCGNLGEBP HPODDHJMPNG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EACCGNLGEBP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EACCGNLGEBP_HPODDHJMPNG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::EACCGNLGEBP HPODDHJMPNG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EACCGNLGEBP EIFONLCJOPG)
	{
		return ((::EACCGNLGEBP(*)(::FlatBuffers::ByteBuffer*, ::EACCGNLGEBP))((::PBYTE)hIl2Cpp + EACCGNLGEBP_HPODDHJMPNG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MANNBPDPBBN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MANNBPDPBBN&))((::PBYTE)hIl2Cpp + EACCGNLGEBP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EACCGNLGEBP_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EACCGNLGEBP_PPOMNIFACOL_OFFSET))(this);
	}
};
