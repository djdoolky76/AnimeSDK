#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ILHDJBLBBBD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNBFDKADKNH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PNBFDKADKNH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x938550)
#define PNBFDKADKNH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PNBFDKADKNH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PNBFDKADKNH_HIMGFMLONNO_1_OFFSET UNITYSDK_OFFSET(0x1EE09FA0)
#define PNBFDKADKNH_HIMGFMLONNO_OFFSET UNITYSDK_OFFSET(0x1EE09F30)
#define PNBFDKADKNH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x938590)
#define PNBFDKADKNH___INIT_OFFSET UNITYSDK_OFFSET(0x938530)

inline static constexpr unsigned int PNBFDKADKNH_TypeDefinitionIndex = 12268;

struct alignas(8) PNBFDKADKNH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBFDKADKNH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNBFDKADKNH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PNBFDKADKNH HIMGFMLONNO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNBFDKADKNH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNBFDKADKNH_HIMGFMLONNO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::PNBFDKADKNH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNBFDKADKNH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNBFDKADKNH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PNBFDKADKNH HIMGFMLONNO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PNBFDKADKNH EIFONLCJOPG)
	{
		return ((::PNBFDKADKNH(*)(::FlatBuffers::ByteBuffer*, ::PNBFDKADKNH))((::PBYTE)hIl2Cpp + PNBFDKADKNH_HIMGFMLONNO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBFDKADKNH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBFDKADKNH_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ILHDJBLBBBD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ILHDJBLBBBD&))((::PBYTE)hIl2Cpp + PNBFDKADKNH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
