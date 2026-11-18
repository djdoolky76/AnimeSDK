#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LPNFBNKKNJI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GBPCPPMFGIH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GBPCPPMFGIH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A7C40)
#define GBPCPPMFGIH_BNGBFFGCAGK_1_OFFSET UNITYSDK_OFFSET(0x17463F50)
#define GBPCPPMFGIH_BNGBFFGCAGK_OFFSET UNITYSDK_OFFSET(0x17463EF0)
#define GBPCPPMFGIH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GBPCPPMFGIH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GBPCPPMFGIH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A7C80)
#define GBPCPPMFGIH___INIT_OFFSET UNITYSDK_OFFSET(0x7A7C20)

inline static constexpr unsigned int GBPCPPMFGIH_TypeDefinitionIndex = 16072;

struct alignas(8) GBPCPPMFGIH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPCPPMFGIH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBPCPPMFGIH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::GBPCPPMFGIH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GBPCPPMFGIH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBPCPPMFGIH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LPNFBNKKNJI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LPNFBNKKNJI&))((::PBYTE)hIl2Cpp + GBPCPPMFGIH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPCPPMFGIH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GBPCPPMFGIH BNGBFFGCAGK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GBPCPPMFGIH EIFONLCJOPG)
	{
		return ((::GBPCPPMFGIH(*)(::FlatBuffers::ByteBuffer*, ::GBPCPPMFGIH))((::PBYTE)hIl2Cpp + GBPCPPMFGIH_BNGBFFGCAGK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::GBPCPPMFGIH BNGBFFGCAGK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GBPCPPMFGIH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBPCPPMFGIH_BNGBFFGCAGK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPCPPMFGIH_PPOMNIFACOL_OFFSET))(this);
	}
};
