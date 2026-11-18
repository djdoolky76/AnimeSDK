#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LDMGDHBEEFM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IBJEDAAMBCB_AMODHPNCJHN_1_OFFSET UNITYSDK_OFFSET(0x1953D820)
#define IBJEDAAMBCB_AMODHPNCJHN_OFFSET UNITYSDK_OFFSET(0x1953D780)
#define IBJEDAAMBCB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IBJEDAAMBCB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E3DC0)
#define IBJEDAAMBCB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IBJEDAAMBCB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IBJEDAAMBCB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E3DB0)
#define IBJEDAAMBCB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E3DA0)
#define IBJEDAAMBCB___INIT_OFFSET UNITYSDK_OFFSET(0x7E3D80)

inline static constexpr unsigned int IBJEDAAMBCB_TypeDefinitionIndex = 9634;

struct alignas(8) IBJEDAAMBCB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJEDAAMBCB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBJEDAAMBCB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LDMGDHBEEFM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LDMGDHBEEFM&))((::PBYTE)hIl2Cpp + IBJEDAAMBCB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJEDAAMBCB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LDMGDHBEEFM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LDMGDHBEEFM&, ::System::Int32&))((::PBYTE)hIl2Cpp + IBJEDAAMBCB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJEDAAMBCB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IBJEDAAMBCB AMODHPNCJHN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IBJEDAAMBCB EIFONLCJOPG)
	{
		return ((::IBJEDAAMBCB(*)(::FlatBuffers::ByteBuffer*, ::IBJEDAAMBCB))((::PBYTE)hIl2Cpp + IBJEDAAMBCB_AMODHPNCJHN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::IBJEDAAMBCB AMODHPNCJHN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBJEDAAMBCB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBJEDAAMBCB_AMODHPNCJHN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::IBJEDAAMBCB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBJEDAAMBCB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBJEDAAMBCB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
