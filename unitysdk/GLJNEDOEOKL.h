#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ALKMJABFCCF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GLJNEDOEOKL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GLJNEDOEOKL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DE940)
#define GLJNEDOEOKL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GLJNEDOEOKL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GLJNEDOEOKL_OMMONAKNBKF_1_OFFSET UNITYSDK_OFFSET(0x193375E0)
#define GLJNEDOEOKL_OMMONAKNBKF_OFFSET UNITYSDK_OFFSET(0x19337540)
#define GLJNEDOEOKL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DE980)
#define GLJNEDOEOKL___INIT_OFFSET UNITYSDK_OFFSET(0x7DE920)

inline static constexpr unsigned int GLJNEDOEOKL_TypeDefinitionIndex = 15334;

struct alignas(8) GLJNEDOEOKL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJNEDOEOKL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLJNEDOEOKL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GLJNEDOEOKL OMMONAKNBKF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GLJNEDOEOKL EIFONLCJOPG)
	{
		return ((::GLJNEDOEOKL(*)(::FlatBuffers::ByteBuffer*, ::GLJNEDOEOKL))((::PBYTE)hIl2Cpp + GLJNEDOEOKL_OMMONAKNBKF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::GLJNEDOEOKL OMMONAKNBKF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLJNEDOEOKL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLJNEDOEOKL_OMMONAKNBKF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ALKMJABFCCF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ALKMJABFCCF&))((::PBYTE)hIl2Cpp + GLJNEDOEOKL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::GLJNEDOEOKL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLJNEDOEOKL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLJNEDOEOKL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJNEDOEOKL_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJNEDOEOKL_PPOMNIFACOL_OFFSET))(this);
	}
};
