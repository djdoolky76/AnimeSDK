#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NELIGLNLMOE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AGIDIKJOCDN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AGIDIKJOCDN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C13F0)
#define AGIDIKJOCDN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AGIDIKJOCDN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AGIDIKJOCDN_KGBJJFCLIJH_1_OFFSET UNITYSDK_OFFSET(0x17EE6B60)
#define AGIDIKJOCDN_KGBJJFCLIJH_OFFSET UNITYSDK_OFFSET(0x17EE6A20)
#define AGIDIKJOCDN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C13E0)
#define AGIDIKJOCDN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C13D0)
#define AGIDIKJOCDN___INIT_OFFSET UNITYSDK_OFFSET(0x7C13B0)

inline static constexpr unsigned int AGIDIKJOCDN_TypeDefinitionIndex = 9972;

struct alignas(8) AGIDIKJOCDN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIDIKJOCDN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGIDIKJOCDN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIDIKJOCDN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::AGIDIKJOCDN KGBJJFCLIJH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AGIDIKJOCDN EIFONLCJOPG)
	{
		return ((::AGIDIKJOCDN(*)(::FlatBuffers::ByteBuffer*, ::AGIDIKJOCDN))((::PBYTE)hIl2Cpp + AGIDIKJOCDN_KGBJJFCLIJH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NELIGLNLMOE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NELIGLNLMOE&))((::PBYTE)hIl2Cpp + AGIDIKJOCDN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::AGIDIKJOCDN KGBJJFCLIJH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AGIDIKJOCDN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGIDIKJOCDN_KGBJJFCLIJH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NELIGLNLMOE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NELIGLNLMOE&, ::System::Int32&))((::PBYTE)hIl2Cpp + AGIDIKJOCDN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIDIKJOCDN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::AGIDIKJOCDN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AGIDIKJOCDN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGIDIKJOCDN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
