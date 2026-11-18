#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AOHADDBNNLL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DEEFAAKLDLM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DEEFAAKLDLM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7AD7A0)
#define DEEFAAKLDLM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DEEFAAKLDLM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DEEFAAKLDLM_LPFCBKPGJIE_1_OFFSET UNITYSDK_OFFSET(0x1777DEA0)
#define DEEFAAKLDLM_LPFCBKPGJIE_OFFSET UNITYSDK_OFFSET(0x1777DE00)
#define DEEFAAKLDLM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AD790)
#define DEEFAAKLDLM___INIT_OFFSET UNITYSDK_OFFSET(0x7AD770)

inline static constexpr unsigned int DEEFAAKLDLM_TypeDefinitionIndex = 15868;

struct alignas(8) DEEFAAKLDLM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEFAAKLDLM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEEFAAKLDLM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEFAAKLDLM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DEEFAAKLDLM LPFCBKPGJIE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DEEFAAKLDLM EIFONLCJOPG)
	{
		return ((::DEEFAAKLDLM(*)(::FlatBuffers::ByteBuffer*, ::DEEFAAKLDLM))((::PBYTE)hIl2Cpp + DEEFAAKLDLM_LPFCBKPGJIE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::DEEFAAKLDLM LPFCBKPGJIE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DEEFAAKLDLM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEEFAAKLDLM_LPFCBKPGJIE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEFAAKLDLM_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AOHADDBNNLL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AOHADDBNNLL&))((::PBYTE)hIl2Cpp + DEEFAAKLDLM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::DEEFAAKLDLM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DEEFAAKLDLM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEEFAAKLDLM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
