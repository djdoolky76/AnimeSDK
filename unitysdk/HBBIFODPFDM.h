#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GIDMOLNPIOC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HBBIFODPFDM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HBBIFODPFDM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7799B0)
#define HBBIFODPFDM_DOLPKDMGMNC_1_OFFSET UNITYSDK_OFFSET(0x160EF050)
#define HBBIFODPFDM_DOLPKDMGMNC_OFFSET UNITYSDK_OFFSET(0x160EEFE0)
#define HBBIFODPFDM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HBBIFODPFDM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HBBIFODPFDM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7799F0)
#define HBBIFODPFDM___INIT_OFFSET UNITYSDK_OFFSET(0x779990)

inline static constexpr unsigned int HBBIFODPFDM_TypeDefinitionIndex = 15862;

struct alignas(8) HBBIFODPFDM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBBIFODPFDM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBBIFODPFDM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HBBIFODPFDM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HBBIFODPFDM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBBIFODPFDM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GIDMOLNPIOC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GIDMOLNPIOC&))((::PBYTE)hIl2Cpp + HBBIFODPFDM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBBIFODPFDM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HBBIFODPFDM DOLPKDMGMNC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HBBIFODPFDM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBBIFODPFDM_DOLPKDMGMNC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::HBBIFODPFDM DOLPKDMGMNC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HBBIFODPFDM EIFONLCJOPG)
	{
		return ((::HBBIFODPFDM(*)(::FlatBuffers::ByteBuffer*, ::HBBIFODPFDM))((::PBYTE)hIl2Cpp + HBBIFODPFDM_DOLPKDMGMNC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBBIFODPFDM_PPOMNIFACOL_OFFSET))(this);
	}
};
