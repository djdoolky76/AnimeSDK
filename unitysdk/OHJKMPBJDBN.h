#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define OHJKMPBJDBN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OHJKMPBJDBN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OHJKMPBJDBN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OHJKMPBJDBN_LNKHBMIJGHE_OFFSET UNITYSDK_OFFSET(0x754970)
#define OHJKMPBJDBN_NLAIFNFGGMA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define OHJKMPBJDBN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x195C5F90)
#define OHJKMPBJDBN_PLPMPDEPKMA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OHJKMPBJDBN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OHJKMPBJDBN_TypeDefinitionIndex = 14252;

struct alignas(4) OHJKMPBJDBN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJKMPBJDBN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHJKMPBJDBN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PLPMPDEPKMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJKMPBJDBN_PLPMPDEPKMA_OFFSET))(this);
	}

	::System::Int32 NLAIFNFGGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJKMPBJDBN_NLAIFNFGGMA_OFFSET))(this);
	}

	::System::Int32 LNKHBMIJGHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJKMPBJDBN_LNKHBMIJGHE_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJKMPBJDBN_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::OHJKMPBJDBN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OHJKMPBJDBN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHJKMPBJDBN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OHJKMPBJDBN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OHJKMPBJDBN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OHJKMPBJDBN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
