#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GAGPADCCDAG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BBKBMBGNOJM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BBKBMBGNOJM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F95D0)
#define BBKBMBGNOJM_FKBGLDCHHFN_1_OFFSET UNITYSDK_OFFSET(0x1A529A00)
#define BBKBMBGNOJM_FKBGLDCHHFN_OFFSET UNITYSDK_OFFSET(0x1A5299A0)
#define BBKBMBGNOJM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BBKBMBGNOJM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BBKBMBGNOJM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F9610)
#define BBKBMBGNOJM___INIT_OFFSET UNITYSDK_OFFSET(0x7F95B0)

inline static constexpr unsigned int BBKBMBGNOJM_TypeDefinitionIndex = 16612;

struct alignas(8) BBKBMBGNOJM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKBMBGNOJM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBKBMBGNOJM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BBKBMBGNOJM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BBKBMBGNOJM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBKBMBGNOJM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GAGPADCCDAG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GAGPADCCDAG&))((::PBYTE)hIl2Cpp + BBKBMBGNOJM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKBMBGNOJM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BBKBMBGNOJM FKBGLDCHHFN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BBKBMBGNOJM EIFONLCJOPG)
	{
		return ((::BBKBMBGNOJM(*)(::FlatBuffers::ByteBuffer*, ::BBKBMBGNOJM))((::PBYTE)hIl2Cpp + BBKBMBGNOJM_FKBGLDCHHFN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::BBKBMBGNOJM FKBGLDCHHFN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BBKBMBGNOJM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBKBMBGNOJM_FKBGLDCHHFN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKBMBGNOJM_GHKKNCCLPAN_OFFSET))(this);
	}
};
