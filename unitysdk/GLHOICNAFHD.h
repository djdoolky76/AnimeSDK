#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define GLHOICNAFHD_AAEAAMPJGLB_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GLHOICNAFHD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GLHOICNAFHD_DDEPCHFKAFP_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define GLHOICNAFHD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GLHOICNAFHD_HJLFDENDJJE_OFFSET UNITYSDK_OFFSET(0x761240)
#define GLHOICNAFHD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19336F40)
#define GLHOICNAFHD_ODOEDFLANMM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GLHOICNAFHD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GLHOICNAFHD_TypeDefinitionIndex = 10649;

struct alignas(4) GLHOICNAFHD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHOICNAFHD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLHOICNAFHD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::GLHOICNAFHD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLHOICNAFHD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLHOICNAFHD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 AAEAAMPJGLB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHOICNAFHD_AAEAAMPJGLB_OFFSET))(this);
	}

	::System::Boolean DDEPCHFKAFP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GLHOICNAFHD_DDEPCHFKAFP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GLHOICNAFHD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GLHOICNAFHD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GLHOICNAFHD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ODOEDFLANMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHOICNAFHD_ODOEDFLANMM_OFFSET))(this);
	}

	::System::Int32 HJLFDENDJJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHOICNAFHD_HJLFDENDJJE_OFFSET))(this);
	}
};
