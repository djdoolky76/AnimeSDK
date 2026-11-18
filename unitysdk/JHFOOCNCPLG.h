#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OICFHEBNAEE.h"

namespace FlatBuffers { class ByteBuffer; }

#define JHFOOCNCPLG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JHFOOCNCPLG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JHFOOCNCPLG_EJMJMJCIKMF_OFFSET UNITYSDK_OFFSET(0x76FA90)
#define JHFOOCNCPLG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JHFOOCNCPLG_HGOKNKPLBGD_OFFSET UNITYSDK_OFFSET(0x756B90)
#define JHFOOCNCPLG_KHFGBGNPCNK_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JHFOOCNCPLG_PAIPIOOCDAJ_OFFSET UNITYSDK_OFFSET(0x761240)
#define JHFOOCNCPLG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JHFOOCNCPLG_TypeDefinitionIndex = 11102;

struct alignas(4) JHFOOCNCPLG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFOOCNCPLG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHFOOCNCPLG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 KHFGBGNPCNK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFOOCNCPLG_KHFGBGNPCNK_OFFSET))(this);
	}

	::System::Int32 PAIPIOOCDAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFOOCNCPLG_PAIPIOOCDAJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFOOCNCPLG_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::JHFOOCNCPLG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JHFOOCNCPLG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHFOOCNCPLG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean EJMJMJCIKMF(::System::Int32 HPMEONKHFGG, ::OICFHEBNAEE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OICFHEBNAEE&))((::PBYTE)hIl2Cpp + JHFOOCNCPLG_EJMJMJCIKMF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 HGOKNKPLBGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFOOCNCPLG_HGOKNKPLBGD_OFFSET))(this);
	}
};
