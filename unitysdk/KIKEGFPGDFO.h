#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CBMOFIIEGJN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KIKEGFPGDFO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KIKEGFPGDFO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81C750)
#define KIKEGFPGDFO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KIKEGFPGDFO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KIKEGFPGDFO_MBCKBJMHOCD_1_OFFSET UNITYSDK_OFFSET(0x1BB037E0)
#define KIKEGFPGDFO_MBCKBJMHOCD_OFFSET UNITYSDK_OFFSET(0x1BB03770)
#define KIKEGFPGDFO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81C740)
#define KIKEGFPGDFO___INIT_OFFSET UNITYSDK_OFFSET(0x81C720)

inline static constexpr unsigned int KIKEGFPGDFO_TypeDefinitionIndex = 13430;

struct alignas(8) KIKEGFPGDFO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKEGFPGDFO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KIKEGFPGDFO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KIKEGFPGDFO MBCKBJMHOCD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KIKEGFPGDFO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KIKEGFPGDFO_MBCKBJMHOCD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKEGFPGDFO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::KIKEGFPGDFO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KIKEGFPGDFO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KIKEGFPGDFO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKEGFPGDFO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CBMOFIIEGJN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CBMOFIIEGJN&))((::PBYTE)hIl2Cpp + KIKEGFPGDFO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KIKEGFPGDFO MBCKBJMHOCD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KIKEGFPGDFO EIFONLCJOPG)
	{
		return ((::KIKEGFPGDFO(*)(::FlatBuffers::ByteBuffer*, ::KIKEGFPGDFO))((::PBYTE)hIl2Cpp + KIKEGFPGDFO_MBCKBJMHOCD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
