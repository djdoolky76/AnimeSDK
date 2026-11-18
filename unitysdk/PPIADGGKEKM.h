#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ACKJPCONCMJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PPIADGGKEKM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PPIADGGKEKM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x99B750)
#define PPIADGGKEKM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PPIADGGKEKM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PPIADGGKEKM_MKHENIIODBB_1_OFFSET UNITYSDK_OFFSET(0x1FC26670)
#define PPIADGGKEKM_MKHENIIODBB_OFFSET UNITYSDK_OFFSET(0x1FC26600)
#define PPIADGGKEKM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x99B790)
#define PPIADGGKEKM___INIT_OFFSET UNITYSDK_OFFSET(0x99B730)

inline static constexpr unsigned int PPIADGGKEKM_TypeDefinitionIndex = 16931;

struct alignas(8) PPIADGGKEKM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPIADGGKEKM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPIADGGKEKM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PPIADGGKEKM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PPIADGGKEKM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPIADGGKEKM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PPIADGGKEKM MKHENIIODBB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PPIADGGKEKM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPIADGGKEKM_MKHENIIODBB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPIADGGKEKM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PPIADGGKEKM MKHENIIODBB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PPIADGGKEKM EIFONLCJOPG)
	{
		return ((::PPIADGGKEKM(*)(::FlatBuffers::ByteBuffer*, ::PPIADGGKEKM))((::PBYTE)hIl2Cpp + PPIADGGKEKM_MKHENIIODBB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPIADGGKEKM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ACKJPCONCMJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ACKJPCONCMJ&))((::PBYTE)hIl2Cpp + PPIADGGKEKM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
