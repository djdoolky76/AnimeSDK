#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define HOLOBILHDNO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HOLOBILHDNO_CPBNNNFPKEM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HOLOBILHDNO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HOLOBILHDNO_NJIAGCOLGBA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HOLOBILHDNO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5D0B80)
#define HOLOBILHDNO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HOLOBILHDNO_TypeDefinitionIndex = 13627;

struct alignas(4) HOLOBILHDNO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLOBILHDNO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOLOBILHDNO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CPBNNNFPKEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLOBILHDNO_CPBNNNFPKEM_OFFSET))(this);
	}

	::System::Int32 NJIAGCOLGBA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLOBILHDNO_NJIAGCOLGBA_OFFSET))(this);
	}

	/*
	::HOLOBILHDNO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HOLOBILHDNO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOLOBILHDNO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HOLOBILHDNO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HOLOBILHDNO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HOLOBILHDNO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
