#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KINJKACFGDO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KINJKACFGDO_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x754970)
#define KINJKACFGDO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KINJKACFGDO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KINJKACFGDO_KPGADHGIMIG_OFFSET UNITYSDK_OFFSET(0x754A70)
#define KINJKACFGDO_LPCPMIPKJBG_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define KINJKACFGDO_PKDCACEOJIN_OFFSET UNITYSDK_OFFSET(0x754920)
#define KINJKACFGDO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KINJKACFGDO_TypeDefinitionIndex = 10955;

struct alignas(4) KINJKACFGDO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KINJKACFGDO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KINJKACFGDO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PKDCACEOJIN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KINJKACFGDO_PKDCACEOJIN_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KINJKACFGDO_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Int32 LPCPMIPKJBG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KINJKACFGDO_LPCPMIPKJBG_OFFSET))(this);
	}

	/*
	::KINJKACFGDO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KINJKACFGDO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KINJKACFGDO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KINJKACFGDO_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean KPGADHGIMIG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KINJKACFGDO_KPGADHGIMIG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
