#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define GADJODHJBBO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GADJODHJBBO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GADJODHJBBO_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GADJODHJBBO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5B4050)
#define GADJODHJBBO_OOGODFAOKBP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define GADJODHJBBO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GADJODHJBBO_TypeDefinitionIndex = 12324;

struct alignas(4) GADJODHJBBO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GADJODHJBBO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GADJODHJBBO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GADJODHJBBO_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Int32 OOGODFAOKBP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GADJODHJBBO_OOGODFAOKBP_OFFSET))(this);
	}

	/*
	static ::GADJODHJBBO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GADJODHJBBO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GADJODHJBBO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::GADJODHJBBO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GADJODHJBBO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GADJODHJBBO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
