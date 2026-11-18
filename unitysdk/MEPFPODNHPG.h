#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BNLLCCDEOGO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MEPFPODNHPG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MEPFPODNHPG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E5870)
#define MEPFPODNHPG_GDEFHKIEDFB_1_OFFSET UNITYSDK_OFFSET(0x19577370)
#define MEPFPODNHPG_GDEFHKIEDFB_OFFSET UNITYSDK_OFFSET(0x19577300)
#define MEPFPODNHPG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MEPFPODNHPG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MEPFPODNHPG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E58B0)
#define MEPFPODNHPG___INIT_OFFSET UNITYSDK_OFFSET(0x7E5850)

inline static constexpr unsigned int MEPFPODNHPG_TypeDefinitionIndex = 13666;

struct alignas(8) MEPFPODNHPG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPFPODNHPG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEPFPODNHPG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MEPFPODNHPG GDEFHKIEDFB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MEPFPODNHPG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEPFPODNHPG_GDEFHKIEDFB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BNLLCCDEOGO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BNLLCCDEOGO&))((::PBYTE)hIl2Cpp + MEPFPODNHPG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MEPFPODNHPG GDEFHKIEDFB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MEPFPODNHPG EIFONLCJOPG)
	{
		return ((::MEPFPODNHPG(*)(::FlatBuffers::ByteBuffer*, ::MEPFPODNHPG))((::PBYTE)hIl2Cpp + MEPFPODNHPG_GDEFHKIEDFB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPFPODNHPG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::MEPFPODNHPG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MEPFPODNHPG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEPFPODNHPG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPFPODNHPG_PPOMNIFACOL_OFFSET))(this);
	}
};
