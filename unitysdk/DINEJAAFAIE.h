#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KPMBONEBMHB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DINEJAAFAIE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DINEJAAFAIE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EDD20)
#define DINEJAAFAIE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DINEJAAFAIE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DINEJAAFAIE_JDGJBPEPPKN_1_OFFSET UNITYSDK_OFFSET(0x19C076E0)
#define DINEJAAFAIE_JDGJBPEPPKN_OFFSET UNITYSDK_OFFSET(0x19C07670)
#define DINEJAAFAIE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EDD10)
#define DINEJAAFAIE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EDD60)
#define DINEJAAFAIE___INIT_OFFSET UNITYSDK_OFFSET(0x7EDCF0)

inline static constexpr unsigned int DINEJAAFAIE_TypeDefinitionIndex = 10728;

struct alignas(8) DINEJAAFAIE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DINEJAAFAIE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DINEJAAFAIE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KPMBONEBMHB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KPMBONEBMHB&))((::PBYTE)hIl2Cpp + DINEJAAFAIE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DINEJAAFAIE JDGJBPEPPKN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DINEJAAFAIE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DINEJAAFAIE_JDGJBPEPPKN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KPMBONEBMHB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KPMBONEBMHB&, ::System::Int32&))((::PBYTE)hIl2Cpp + DINEJAAFAIE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DINEJAAFAIE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::DINEJAAFAIE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DINEJAAFAIE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DINEJAAFAIE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DINEJAAFAIE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DINEJAAFAIE JDGJBPEPPKN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DINEJAAFAIE EIFONLCJOPG)
	{
		return ((::DINEJAAFAIE(*)(::FlatBuffers::ByteBuffer*, ::DINEJAAFAIE))((::PBYTE)hIl2Cpp + DINEJAAFAIE_JDGJBPEPPKN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
