#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JEFIICKFMPL_AICBGAIBCCF_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define JEFIICKFMPL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JEFIICKFMPL_BKPLGMAAAHH_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define JEFIICKFMPL_CENFJKMIBHP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JEFIICKFMPL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JEFIICKFMPL_GIBNAFKACOO_OFFSET UNITYSDK_OFFSET(0x755E40)
#define JEFIICKFMPL_KAIIPNPNOHI_OFFSET UNITYSDK_OFFSET(0x756360)
#define JEFIICKFMPL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JEFIICKFMPL_TypeDefinitionIndex = 16157;

struct alignas(4) JEFIICKFMPL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEFIICKFMPL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEFIICKFMPL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean KAIIPNPNOHI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JEFIICKFMPL_KAIIPNPNOHI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 CENFJKMIBHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEFIICKFMPL_CENFJKMIBHP_OFFSET))(this);
	}

	/*
	::JEFIICKFMPL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JEFIICKFMPL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEFIICKFMPL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GIBNAFKACOO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEFIICKFMPL_GIBNAFKACOO_OFFSET))(this);
	}

	::System::Int32 AICBGAIBCCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEFIICKFMPL_AICBGAIBCCF_OFFSET))(this);
	}

	::System::Int32 BKPLGMAAAHH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEFIICKFMPL_BKPLGMAAAHH_OFFSET))(this);
	}
};
