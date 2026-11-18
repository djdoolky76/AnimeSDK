#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KICDGLKJPPE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LOONALDAHDO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LOONALDAHDO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81EE40)
#define LOONALDAHDO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LOONALDAHDO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LOONALDAHDO_NDCFLEKJKKI_1_OFFSET UNITYSDK_OFFSET(0x1C07E930)
#define LOONALDAHDO_NDCFLEKJKKI_OFFSET UNITYSDK_OFFSET(0x1C07E8C0)
#define LOONALDAHDO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81EE80)
#define LOONALDAHDO___INIT_OFFSET UNITYSDK_OFFSET(0x81EE20)

inline static constexpr unsigned int LOONALDAHDO_TypeDefinitionIndex = 15347;

struct alignas(8) LOONALDAHDO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOONALDAHDO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOONALDAHDO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LOONALDAHDO NDCFLEKJKKI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LOONALDAHDO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOONALDAHDO_NDCFLEKJKKI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::LOONALDAHDO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LOONALDAHDO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOONALDAHDO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOONALDAHDO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LOONALDAHDO NDCFLEKJKKI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LOONALDAHDO EIFONLCJOPG)
	{
		return ((::LOONALDAHDO(*)(::FlatBuffers::ByteBuffer*, ::LOONALDAHDO))((::PBYTE)hIl2Cpp + LOONALDAHDO_NDCFLEKJKKI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KICDGLKJPPE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KICDGLKJPPE&))((::PBYTE)hIl2Cpp + LOONALDAHDO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOONALDAHDO_PPOMNIFACOL_OFFSET))(this);
	}
};
