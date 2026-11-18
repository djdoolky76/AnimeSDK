#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MENGGGFCOHA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IBFMIJNOMAO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IBFMIJNOMAO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80A5A0)
#define IBFMIJNOMAO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IBFMIJNOMAO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IBFMIJNOMAO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80A5F0)
#define IBFMIJNOMAO_MENIKFGIOBD_1_OFFSET UNITYSDK_OFFSET(0x1B128A20)
#define IBFMIJNOMAO_MENIKFGIOBD_OFFSET UNITYSDK_OFFSET(0x1B128800)
#define IBFMIJNOMAO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80A5E0)
#define IBFMIJNOMAO___INIT_OFFSET UNITYSDK_OFFSET(0x80A580)

inline static constexpr unsigned int IBFMIJNOMAO_TypeDefinitionIndex = 13793;

struct alignas(8) IBFMIJNOMAO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFMIJNOMAO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBFMIJNOMAO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::IBFMIJNOMAO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBFMIJNOMAO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBFMIJNOMAO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MENGGGFCOHA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MENGGGFCOHA&))((::PBYTE)hIl2Cpp + IBFMIJNOMAO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::IBFMIJNOMAO MENIKFGIOBD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IBFMIJNOMAO EIFONLCJOPG)
	{
		return ((::IBFMIJNOMAO(*)(::FlatBuffers::ByteBuffer*, ::IBFMIJNOMAO))((::PBYTE)hIl2Cpp + IBFMIJNOMAO_MENIKFGIOBD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFMIJNOMAO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MENGGGFCOHA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MENGGGFCOHA&, ::System::Int32&))((::PBYTE)hIl2Cpp + IBFMIJNOMAO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFMIJNOMAO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IBFMIJNOMAO MENIKFGIOBD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBFMIJNOMAO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBFMIJNOMAO_MENIKFGIOBD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
