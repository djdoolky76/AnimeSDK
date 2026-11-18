#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GFKJFGKPGLL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AJLHKINJFKN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AJLHKINJFKN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FADC0)
#define AJLHKINJFKN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AJLHKINJFKN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AJLHKINJFKN_MODLODDMEPN_1_OFFSET UNITYSDK_OFFSET(0x1A56ED90)
#define AJLHKINJFKN_MODLODDMEPN_OFFSET UNITYSDK_OFFSET(0x1A56EC50)
#define AJLHKINJFKN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FADB0)
#define AJLHKINJFKN___INIT_OFFSET UNITYSDK_OFFSET(0x7FAD90)

inline static constexpr unsigned int AJLHKINJFKN_TypeDefinitionIndex = 14762;

struct alignas(8) AJLHKINJFKN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJLHKINJFKN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJLHKINJFKN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJLHKINJFKN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::AJLHKINJFKN MODLODDMEPN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AJLHKINJFKN EIFONLCJOPG)
	{
		return ((::AJLHKINJFKN(*)(::FlatBuffers::ByteBuffer*, ::AJLHKINJFKN))((::PBYTE)hIl2Cpp + AJLHKINJFKN_MODLODDMEPN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::AJLHKINJFKN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AJLHKINJFKN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJLHKINJFKN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GFKJFGKPGLL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GFKJFGKPGLL&))((::PBYTE)hIl2Cpp + AJLHKINJFKN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJLHKINJFKN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::AJLHKINJFKN MODLODDMEPN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AJLHKINJFKN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJLHKINJFKN_MODLODDMEPN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
