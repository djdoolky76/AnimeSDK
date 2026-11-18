#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MDJEKAPDEKJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MDJEKAPDEKJ_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MDJEKAPDEKJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MDJEKAPDEKJ_CHDEHKBAPOG_OFFSET UNITYSDK_OFFSET(0x756B90)
#define MDJEKAPDEKJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MDJEKAPDEKJ_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754970)
#define MDJEKAPDEKJ_NGKOPBCHFOP_OFFSET UNITYSDK_OFFSET(0x756B10)
#define MDJEKAPDEKJ_PLMPAGMICCF_OFFSET UNITYSDK_OFFSET(0x755D20)
#define MDJEKAPDEKJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MDJEKAPDEKJ_TypeDefinitionIndex = 12784;

struct alignas(4) MDJEKAPDEKJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJEKAPDEKJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDJEKAPDEKJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJEKAPDEKJ_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 CHDEHKBAPOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJEKAPDEKJ_CHDEHKBAPOG_OFFSET))(this);
	}

	::System::String* NGKOPBCHFOP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJEKAPDEKJ_NGKOPBCHFOP_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJEKAPDEKJ_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJEKAPDEKJ_APCKPKCNFJE_OFFSET))(this);
	}

	/*
	::MDJEKAPDEKJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MDJEKAPDEKJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDJEKAPDEKJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PLMPAGMICCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJEKAPDEKJ_PLMPAGMICCF_OFFSET))(this);
	}
};
