#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EPIAAKGJFMJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EPIAAKGJFMJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EPIAAKGJFMJ_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x756D50)
#define EPIAAKGJFMJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EPIAAKGJFMJ_JMNININIFAD_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define EPIAAKGJFMJ_MBKDAHKIDLE_OFFSET UNITYSDK_OFFSET(0x756780)
#define EPIAAKGJFMJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x187B27A0)
#define EPIAAKGJFMJ_PAINFLDDDDD_OFFSET UNITYSDK_OFFSET(0x754E10)
#define EPIAAKGJFMJ_PHMJNDHGAMO_OFFSET UNITYSDK_OFFSET(0x779440)
#define EPIAAKGJFMJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EPIAAKGJFMJ_TypeDefinitionIndex = 12045;

struct alignas(4) EPIAAKGJFMJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIAAKGJFMJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPIAAKGJFMJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIAAKGJFMJ_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean MBKDAHKIDLE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EPIAAKGJFMJ_MBKDAHKIDLE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EPIAAKGJFMJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EPIAAKGJFMJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EPIAAKGJFMJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIAAKGJFMJ_DECMGICKDLH_OFFSET))(this);
	}

	::System::Boolean PHMJNDHGAMO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIAAKGJFMJ_PHMJNDHGAMO_OFFSET))(this);
	}

	/*
	::EPIAAKGJFMJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EPIAAKGJFMJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPIAAKGJFMJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 JMNININIFAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIAAKGJFMJ_JMNININIFAD_OFFSET))(this);
	}

	::System::Boolean PAINFLDDDDD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIAAKGJFMJ_PAINFLDDDDD_OFFSET))(this);
	}
};
