#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LGAMIAMAAMD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IECJFIJFPMM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IECJFIJFPMM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x814980)
#define IECJFIJFPMM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IECJFIJFPMM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IECJFIJFPMM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x814970)
#define IECJFIJFPMM_LOEFGAPHENL_1_OFFSET UNITYSDK_OFFSET(0x1B8865B0)
#define IECJFIJFPMM_LOEFGAPHENL_OFFSET UNITYSDK_OFFSET(0x1B886540)
#define IECJFIJFPMM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8149C0)
#define IECJFIJFPMM___INIT_OFFSET UNITYSDK_OFFSET(0x814950)

inline static constexpr unsigned int IECJFIJFPMM_TypeDefinitionIndex = 9584;

struct alignas(8) IECJFIJFPMM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IECJFIJFPMM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IECJFIJFPMM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LGAMIAMAAMD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LGAMIAMAAMD&, ::System::Int32&))((::PBYTE)hIl2Cpp + IECJFIJFPMM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::IECJFIJFPMM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IECJFIJFPMM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IECJFIJFPMM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IECJFIJFPMM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IECJFIJFPMM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IECJFIJFPMM LOEFGAPHENL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IECJFIJFPMM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IECJFIJFPMM_LOEFGAPHENL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::IECJFIJFPMM LOEFGAPHENL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IECJFIJFPMM EIFONLCJOPG)
	{
		return ((::IECJFIJFPMM(*)(::FlatBuffers::ByteBuffer*, ::IECJFIJFPMM))((::PBYTE)hIl2Cpp + IECJFIJFPMM_LOEFGAPHENL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LGAMIAMAAMD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LGAMIAMAAMD&))((::PBYTE)hIl2Cpp + IECJFIJFPMM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
