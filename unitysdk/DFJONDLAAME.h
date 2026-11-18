#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JFMGLDNHHDA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DFJONDLAAME_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DFJONDLAAME_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F2020)
#define DFJONDLAAME_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DFJONDLAAME_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DFJONDLAAME_KIDPKOIBMCP_1_OFFSET UNITYSDK_OFFSET(0x19F2CAB0)
#define DFJONDLAAME_KIDPKOIBMCP_OFFSET UNITYSDK_OFFSET(0x19F37D60)
#define DFJONDLAAME_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F2010)
#define DFJONDLAAME_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F2060)
#define DFJONDLAAME___INIT_OFFSET UNITYSDK_OFFSET(0x7F1FF0)

inline static constexpr unsigned int DFJONDLAAME_TypeDefinitionIndex = 9314;

struct alignas(8) DFJONDLAAME
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJONDLAAME_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFJONDLAAME___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JFMGLDNHHDA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JFMGLDNHHDA&, ::System::Int32&))((::PBYTE)hIl2Cpp + DFJONDLAAME_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::DFJONDLAAME BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFJONDLAAME(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFJONDLAAME_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DFJONDLAAME KIDPKOIBMCP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DFJONDLAAME EIFONLCJOPG)
	{
		return ((::DFJONDLAAME(*)(::FlatBuffers::ByteBuffer*, ::DFJONDLAAME))((::PBYTE)hIl2Cpp + DFJONDLAAME_KIDPKOIBMCP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJONDLAAME_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DFJONDLAAME KIDPKOIBMCP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFJONDLAAME(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFJONDLAAME_KIDPKOIBMCP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JFMGLDNHHDA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JFMGLDNHHDA&))((::PBYTE)hIl2Cpp + DFJONDLAAME_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJONDLAAME_PPOMNIFACOL_OFFSET))(this);
	}
};
