#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JHMBEJKIBCP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define APMDPCOMLDA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define APMDPCOMLDA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FB0D0)
#define APMDPCOMLDA_EFMLBBBCCBA_1_OFFSET UNITYSDK_OFFSET(0x1A576570)
#define APMDPCOMLDA_EFMLBBBCCBA_OFFSET UNITYSDK_OFFSET(0x1A576500)
#define APMDPCOMLDA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define APMDPCOMLDA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define APMDPCOMLDA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FB0C0)
#define APMDPCOMLDA___INIT_OFFSET UNITYSDK_OFFSET(0x7FB0A0)

inline static constexpr unsigned int APMDPCOMLDA_TypeDefinitionIndex = 13876;

struct alignas(8) APMDPCOMLDA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + APMDPCOMLDA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APMDPCOMLDA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APMDPCOMLDA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::APMDPCOMLDA EFMLBBBCCBA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::APMDPCOMLDA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APMDPCOMLDA_EFMLBBBCCBA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JHMBEJKIBCP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JHMBEJKIBCP&))((::PBYTE)hIl2Cpp + APMDPCOMLDA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APMDPCOMLDA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::APMDPCOMLDA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::APMDPCOMLDA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APMDPCOMLDA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::APMDPCOMLDA EFMLBBBCCBA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::APMDPCOMLDA EIFONLCJOPG)
	{
		return ((::APMDPCOMLDA(*)(::FlatBuffers::ByteBuffer*, ::APMDPCOMLDA))((::PBYTE)hIl2Cpp + APMDPCOMLDA_EFMLBBBCCBA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
