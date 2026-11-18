#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define NKLPBKHMKBG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NKLPBKHMKBG_DPCDIABPPEE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NKLPBKHMKBG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NKLPBKHMKBG_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NKLPBKHMKBG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C18F170)
#define NKLPBKHMKBG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NKLPBKHMKBG_TypeDefinitionIndex = 13452;

struct alignas(4) NKLPBKHMKBG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLPBKHMKBG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKLPBKHMKBG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NKLPBKHMKBG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NKLPBKHMKBG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NKLPBKHMKBG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLPBKHMKBG_LPFMNKEFPMM_OFFSET))(this);
	}

	/*
	::NKLPBKHMKBG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NKLPBKHMKBG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKLPBKHMKBG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DPCDIABPPEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLPBKHMKBG_DPCDIABPPEE_OFFSET))(this);
	}
};
