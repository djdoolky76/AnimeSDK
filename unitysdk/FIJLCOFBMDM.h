#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IKACIOBLNBM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FIJLCOFBMDM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FIJLCOFBMDM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8179D0)
#define FIJLCOFBMDM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FIJLCOFBMDM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FIJLCOFBMDM_PBPDBPCPBME_1_OFFSET UNITYSDK_OFFSET(0x1B9C53C0)
#define FIJLCOFBMDM_PBPDBPCPBME_OFFSET UNITYSDK_OFFSET(0x1B9C5220)
#define FIJLCOFBMDM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x817A10)
#define FIJLCOFBMDM___INIT_OFFSET UNITYSDK_OFFSET(0x8179B0)

inline static constexpr unsigned int FIJLCOFBMDM_TypeDefinitionIndex = 10471;

struct alignas(8) FIJLCOFBMDM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJLCOFBMDM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FIJLCOFBMDM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FIJLCOFBMDM PBPDBPCPBME(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FIJLCOFBMDM EIFONLCJOPG)
	{
		return ((::FIJLCOFBMDM(*)(::FlatBuffers::ByteBuffer*, ::FIJLCOFBMDM))((::PBYTE)hIl2Cpp + FIJLCOFBMDM_PBPDBPCPBME_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IKACIOBLNBM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IKACIOBLNBM&))((::PBYTE)hIl2Cpp + FIJLCOFBMDM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJLCOFBMDM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::FIJLCOFBMDM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FIJLCOFBMDM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FIJLCOFBMDM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FIJLCOFBMDM PBPDBPCPBME_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FIJLCOFBMDM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FIJLCOFBMDM_PBPDBPCPBME_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJLCOFBMDM_PPOMNIFACOL_OFFSET))(this);
	}
};
