#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DOEMHNKAAKL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DOEMHNKAAKL_CPBNNNFPKEM_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DOEMHNKAAKL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DOEMHNKAAKL_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DOEMHNKAAKL_GPFAAHIIINP_OFFSET UNITYSDK_OFFSET(0x754920)
#define DOEMHNKAAKL_LHLJOIHKDAL_OFFSET UNITYSDK_OFFSET(0x762B30)
#define DOEMHNKAAKL_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DOEMHNKAAKL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1575D3C0)
#define DOEMHNKAAKL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DOEMHNKAAKL_TypeDefinitionIndex = 12841;

struct alignas(4) DOEMHNKAAKL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEMHNKAAKL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOEMHNKAAKL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEMHNKAAKL_MDLLGIMAGCP_OFFSET))(this);
	}

	::System::Boolean LHLJOIHKDAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEMHNKAAKL_LHLJOIHKDAL_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEMHNKAAKL_GKBAJJACIEA_OFFSET))(this);
	}

	/*
	::DOEMHNKAAKL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOEMHNKAAKL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOEMHNKAAKL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DOEMHNKAAKL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DOEMHNKAAKL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DOEMHNKAAKL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GPFAAHIIINP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEMHNKAAKL_GPFAAHIIINP_OFFSET))(this);
	}

	::System::Int32 CPBNNNFPKEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEMHNKAAKL_CPBNNNFPKEM_OFFSET))(this);
	}
};
