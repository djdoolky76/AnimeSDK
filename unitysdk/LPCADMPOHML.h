#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IFMDDIOEJGI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LPCADMPOHML_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LPCADMPOHML_AFLHMBGDDFJ_OFFSET UNITYSDK_OFFSET(0x7EC880)
#define LPCADMPOHML_AOCBIGNCHOF_OFFSET UNITYSDK_OFFSET(0x7EC800)
#define LPCADMPOHML_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LPCADMPOHML_CMFNJOGIHOP_OFFSET UNITYSDK_OFFSET(0x754920)
#define LPCADMPOHML_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x756D50)
#define LPCADMPOHML_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LPCADMPOHML_FICFKHMDEIH_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define LPCADMPOHML_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LPCADMPOHML_GFMDDADFFNC_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LPCADMPOHML_GJHCKIGONDO_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define LPCADMPOHML_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define LPCADMPOHML_MBBIMKJCKKN_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LPCADMPOHML___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LPCADMPOHML_TypeDefinitionIndex = 15393;

struct alignas(4) LPCADMPOHML
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCADMPOHML_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LPCADMPOHML___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::LPCADMPOHML BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LPCADMPOHML(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LPCADMPOHML_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCADMPOHML_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 FICFKHMDEIH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCADMPOHML_FICFKHMDEIH_OFFSET))(this);
	}

	::System::Boolean AFLHMBGDDFJ(::System::Int32 HPMEONKHFGG, ::IFMDDIOEJGI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IFMDDIOEJGI&))((::PBYTE)hIl2Cpp + LPCADMPOHML_AFLHMBGDDFJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 CMFNJOGIHOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCADMPOHML_CMFNJOGIHOP_OFFSET))(this);
	}

	::System::Boolean AOCBIGNCHOF(::System::Int32 HPMEONKHFGG, ::IFMDDIOEJGI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IFMDDIOEJGI&))((::PBYTE)hIl2Cpp + LPCADMPOHML_AOCBIGNCHOF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCADMPOHML_DGFAJDNHCIJ_OFFSET))(this);
	}

	::System::String* GFMDDADFFNC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCADMPOHML_GFMDDADFFNC_OFFSET))(this);
	}

	::System::Int32 MBBIMKJCKKN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCADMPOHML_MBBIMKJCKKN_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCADMPOHML_DECMGICKDLH_OFFSET))(this);
	}

	::System::Int32 GJHCKIGONDO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCADMPOHML_GJHCKIGONDO_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCADMPOHML_LNOBBAIGKJL_OFFSET))(this);
	}
};
