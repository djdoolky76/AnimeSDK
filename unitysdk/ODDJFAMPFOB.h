#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PACALOOLLBD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ODDJFAMPFOB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ODDJFAMPFOB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8209C0)
#define ODDJFAMPFOB_GBFKEAMBBHJ_1_OFFSET UNITYSDK_OFFSET(0x1C197ED0)
#define ODDJFAMPFOB_GBFKEAMBBHJ_OFFSET UNITYSDK_OFFSET(0x1C197E30)
#define ODDJFAMPFOB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ODDJFAMPFOB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ODDJFAMPFOB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8209B0)
#define ODDJFAMPFOB___INIT_OFFSET UNITYSDK_OFFSET(0x820990)

inline static constexpr unsigned int ODDJFAMPFOB_TypeDefinitionIndex = 16191;

struct alignas(8) ODDJFAMPFOB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODDJFAMPFOB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODDJFAMPFOB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ODDJFAMPFOB GBFKEAMBBHJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ODDJFAMPFOB EIFONLCJOPG)
	{
		return ((::ODDJFAMPFOB(*)(::FlatBuffers::ByteBuffer*, ::ODDJFAMPFOB))((::PBYTE)hIl2Cpp + ODDJFAMPFOB_GBFKEAMBBHJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::ODDJFAMPFOB GBFKEAMBBHJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ODDJFAMPFOB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODDJFAMPFOB_GBFKEAMBBHJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PACALOOLLBD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PACALOOLLBD&))((::PBYTE)hIl2Cpp + ODDJFAMPFOB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODDJFAMPFOB_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODDJFAMPFOB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::ODDJFAMPFOB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ODDJFAMPFOB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODDJFAMPFOB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
