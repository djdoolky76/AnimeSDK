#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define IIGBFEHOCNJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IIGBFEHOCNJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IIGBFEHOCNJ_IHIHDNIHHMD_OFFSET UNITYSDK_OFFSET(0x754970)
#define IIGBFEHOCNJ_LCNAPELFGBG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IIGBFEHOCNJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17482CE0)
#define IIGBFEHOCNJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IIGBFEHOCNJ_TypeDefinitionIndex = 17029;

struct alignas(4) IIGBFEHOCNJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGBFEHOCNJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIGBFEHOCNJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::IIGBFEHOCNJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IIGBFEHOCNJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIGBFEHOCNJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IHIHDNIHHMD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGBFEHOCNJ_IHIHDNIHHMD_OFFSET))(this);
	}

	::System::Int32 LCNAPELFGBG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGBFEHOCNJ_LCNAPELFGBG_OFFSET))(this);
	}

	/*
	static ::IIGBFEHOCNJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IIGBFEHOCNJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IIGBFEHOCNJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
