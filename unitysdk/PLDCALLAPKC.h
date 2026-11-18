#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MDDPDNNDDCC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PLDCALLAPKC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PLDCALLAPKC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x923CE0)
#define PLDCALLAPKC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PLDCALLAPKC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PLDCALLAPKC_NJBIJLMHLBM_1_OFFSET UNITYSDK_OFFSET(0x1EC86060)
#define PLDCALLAPKC_NJBIJLMHLBM_OFFSET UNITYSDK_OFFSET(0x1EC85FF0)
#define PLDCALLAPKC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x923CD0)
#define PLDCALLAPKC___INIT_OFFSET UNITYSDK_OFFSET(0x923CB0)

inline static constexpr unsigned int PLDCALLAPKC_TypeDefinitionIndex = 11055;

struct alignas(8) PLDCALLAPKC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDCALLAPKC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLDCALLAPKC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PLDCALLAPKC NJBIJLMHLBM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PLDCALLAPKC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLDCALLAPKC_NJBIJLMHLBM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDCALLAPKC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::PLDCALLAPKC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PLDCALLAPKC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLDCALLAPKC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDCALLAPKC_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MDDPDNNDDCC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MDDPDNNDDCC&))((::PBYTE)hIl2Cpp + PLDCALLAPKC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PLDCALLAPKC NJBIJLMHLBM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PLDCALLAPKC EIFONLCJOPG)
	{
		return ((::PLDCALLAPKC(*)(::FlatBuffers::ByteBuffer*, ::PLDCALLAPKC))((::PBYTE)hIl2Cpp + PLDCALLAPKC_NJBIJLMHLBM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
