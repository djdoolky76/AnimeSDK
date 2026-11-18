#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EICHHEDFPLB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AIJHPCKPPAB_ANNAMIEJEFG_1_OFFSET UNITYSDK_OFFSET(0x17749530)
#define AIJHPCKPPAB_ANNAMIEJEFG_OFFSET UNITYSDK_OFFSET(0x17749430)
#define AIJHPCKPPAB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AIJHPCKPPAB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7AC180)
#define AIJHPCKPPAB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AIJHPCKPPAB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AIJHPCKPPAB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AC170)
#define AIJHPCKPPAB___INIT_OFFSET UNITYSDK_OFFSET(0x7AC150)

inline static constexpr unsigned int AIJHPCKPPAB_TypeDefinitionIndex = 14565;

struct alignas(8) AIJHPCKPPAB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIJHPCKPPAB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIJHPCKPPAB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AIJHPCKPPAB ANNAMIEJEFG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AIJHPCKPPAB EIFONLCJOPG)
	{
		return ((::AIJHPCKPPAB(*)(::FlatBuffers::ByteBuffer*, ::AIJHPCKPPAB))((::PBYTE)hIl2Cpp + AIJHPCKPPAB_ANNAMIEJEFG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIJHPCKPPAB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::AIJHPCKPPAB ANNAMIEJEFG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AIJHPCKPPAB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIJHPCKPPAB_ANNAMIEJEFG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::AIJHPCKPPAB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AIJHPCKPPAB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIJHPCKPPAB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIJHPCKPPAB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EICHHEDFPLB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EICHHEDFPLB&))((::PBYTE)hIl2Cpp + AIJHPCKPPAB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
