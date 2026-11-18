#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FNIGJFNCBDC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FNIGJFNCBDC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FNIGJFNCBDC_CDFINBEMAFI_OFFSET UNITYSDK_OFFSET(0x761240)
#define FNIGJFNCBDC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FNIGJFNCBDC_KNNJPEMENPH_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define FNIGJFNCBDC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x16640670)
#define FNIGJFNCBDC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FNIGJFNCBDC_TypeDefinitionIndex = 12870;

struct alignas(4) FNIGJFNCBDC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIGJFNCBDC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNIGJFNCBDC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIGJFNCBDC_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::FNIGJFNCBDC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FNIGJFNCBDC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNIGJFNCBDC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean KNNJPEMENPH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FNIGJFNCBDC_KNNJPEMENPH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FNIGJFNCBDC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FNIGJFNCBDC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FNIGJFNCBDC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 CDFINBEMAFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIGJFNCBDC_CDFINBEMAFI_OFFSET))(this);
	}
};
