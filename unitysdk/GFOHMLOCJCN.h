#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KFHMEGGOMAJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GFOHMLOCJCN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GFOHMLOCJCN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80D8C0)
#define GFOHMLOCJCN_EMKDFIBGDMP_1_OFFSET UNITYSDK_OFFSET(0x1B4D2690)
#define GFOHMLOCJCN_EMKDFIBGDMP_OFFSET UNITYSDK_OFFSET(0x1B4D2630)
#define GFOHMLOCJCN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GFOHMLOCJCN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GFOHMLOCJCN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80D8B0)
#define GFOHMLOCJCN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80D900)
#define GFOHMLOCJCN___INIT_OFFSET UNITYSDK_OFFSET(0x80D890)

inline static constexpr unsigned int GFOHMLOCJCN_TypeDefinitionIndex = 16668;

struct alignas(8) GFOHMLOCJCN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOHMLOCJCN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFOHMLOCJCN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KFHMEGGOMAJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KFHMEGGOMAJ&))((::PBYTE)hIl2Cpp + GFOHMLOCJCN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KFHMEGGOMAJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KFHMEGGOMAJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + GFOHMLOCJCN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::GFOHMLOCJCN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GFOHMLOCJCN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFOHMLOCJCN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GFOHMLOCJCN EMKDFIBGDMP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GFOHMLOCJCN EIFONLCJOPG)
	{
		return ((::GFOHMLOCJCN(*)(::FlatBuffers::ByteBuffer*, ::GFOHMLOCJCN))((::PBYTE)hIl2Cpp + GFOHMLOCJCN_EMKDFIBGDMP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::GFOHMLOCJCN EMKDFIBGDMP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GFOHMLOCJCN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFOHMLOCJCN_EMKDFIBGDMP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOHMLOCJCN_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOHMLOCJCN_PPOMNIFACOL_OFFSET))(this);
	}
};
