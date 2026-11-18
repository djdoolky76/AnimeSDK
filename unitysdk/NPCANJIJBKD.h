#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EFKBHIEGJCP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCANJIJBKD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NPCANJIJBKD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85DF30)
#define NPCANJIJBKD_FKIACGMLGOD_1_OFFSET UNITYSDK_OFFSET(0x1CCF3B60)
#define NPCANJIJBKD_FKIACGMLGOD_OFFSET UNITYSDK_OFFSET(0x1CCF3860)
#define NPCANJIJBKD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NPCANJIJBKD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NPCANJIJBKD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x85DF20)
#define NPCANJIJBKD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85DF70)
#define NPCANJIJBKD___INIT_OFFSET UNITYSDK_OFFSET(0x85DF00)

inline static constexpr unsigned int NPCANJIJBKD_TypeDefinitionIndex = 10451;

struct alignas(8) NPCANJIJBKD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCANJIJBKD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPCANJIJBKD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NPCANJIJBKD FKIACGMLGOD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NPCANJIJBKD EIFONLCJOPG)
	{
		return ((::NPCANJIJBKD(*)(::FlatBuffers::ByteBuffer*, ::NPCANJIJBKD))((::PBYTE)hIl2Cpp + NPCANJIJBKD_FKIACGMLGOD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EFKBHIEGJCP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EFKBHIEGJCP&))((::PBYTE)hIl2Cpp + NPCANJIJBKD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCANJIJBKD_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EFKBHIEGJCP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EFKBHIEGJCP&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCANJIJBKD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::NPCANJIJBKD FKIACGMLGOD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NPCANJIJBKD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPCANJIJBKD_FKIACGMLGOD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::NPCANJIJBKD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NPCANJIJBKD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPCANJIJBKD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCANJIJBKD_PPOMNIFACOL_OFFSET))(this);
	}
};
