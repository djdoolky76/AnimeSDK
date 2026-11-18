#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NOOIEFDPJCN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FMMIPPNHJBB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FMMIPPNHJBB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x817BE0)
#define FMMIPPNHJBB_GBEEKEMCCDB_1_OFFSET UNITYSDK_OFFSET(0x1B9C8320)
#define FMMIPPNHJBB_GBEEKEMCCDB_OFFSET UNITYSDK_OFFSET(0x1B9C8180)
#define FMMIPPNHJBB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FMMIPPNHJBB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FMMIPPNHJBB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x817C20)
#define FMMIPPNHJBB___INIT_OFFSET UNITYSDK_OFFSET(0x817BC0)

inline static constexpr unsigned int FMMIPPNHJBB_TypeDefinitionIndex = 15816;

struct alignas(8) FMMIPPNHJBB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMIPPNHJBB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMMIPPNHJBB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FMMIPPNHJBB GBEEKEMCCDB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FMMIPPNHJBB EIFONLCJOPG)
	{
		return ((::FMMIPPNHJBB(*)(::FlatBuffers::ByteBuffer*, ::FMMIPPNHJBB))((::PBYTE)hIl2Cpp + FMMIPPNHJBB_GBEEKEMCCDB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::FMMIPPNHJBB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMMIPPNHJBB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMMIPPNHJBB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMIPPNHJBB_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMIPPNHJBB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NOOIEFDPJCN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NOOIEFDPJCN&))((::PBYTE)hIl2Cpp + FMMIPPNHJBB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FMMIPPNHJBB GBEEKEMCCDB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMMIPPNHJBB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMMIPPNHJBB_GBEEKEMCCDB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
