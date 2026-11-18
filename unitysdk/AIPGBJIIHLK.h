#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FAEJGDEGEFP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AIPGBJIIHLK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AIPGBJIIHLK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F9340)
#define AIPGBJIIHLK_DEJFNPOMEKN_1_OFFSET UNITYSDK_OFFSET(0x1A520BC0)
#define AIPGBJIIHLK_DEJFNPOMEKN_OFFSET UNITYSDK_OFFSET(0x1A520B20)
#define AIPGBJIIHLK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AIPGBJIIHLK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AIPGBJIIHLK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F9330)
#define AIPGBJIIHLK___INIT_OFFSET UNITYSDK_OFFSET(0x7F9310)

inline static constexpr unsigned int AIPGBJIIHLK_TypeDefinitionIndex = 16892;

struct alignas(8) AIPGBJIIHLK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPGBJIIHLK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIPGBJIIHLK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPGBJIIHLK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FAEJGDEGEFP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FAEJGDEGEFP&))((::PBYTE)hIl2Cpp + AIPGBJIIHLK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::AIPGBJIIHLK DEJFNPOMEKN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AIPGBJIIHLK EIFONLCJOPG)
	{
		return ((::AIPGBJIIHLK(*)(::FlatBuffers::ByteBuffer*, ::AIPGBJIIHLK))((::PBYTE)hIl2Cpp + AIPGBJIIHLK_DEJFNPOMEKN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPGBJIIHLK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::AIPGBJIIHLK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AIPGBJIIHLK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIPGBJIIHLK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AIPGBJIIHLK DEJFNPOMEKN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AIPGBJIIHLK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIPGBJIIHLK_DEJFNPOMEKN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
