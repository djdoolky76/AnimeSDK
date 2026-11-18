#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define INKLDEKDGDN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define INKLDEKDGDN_BDJDPCEGHBH_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define INKLDEKDGDN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define INKLDEKDGDN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define INKLDEKDGDN_JIFNOAAOLFG_OFFSET UNITYSDK_OFFSET(0x755D70)
#define INKLDEKDGDN_JMNININIFAD_OFFSET UNITYSDK_OFFSET(0x754D50)
#define INKLDEKDGDN_MBKDAHKIDLE_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define INKLDEKDGDN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19543C50)
#define INKLDEKDGDN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int INKLDEKDGDN_TypeDefinitionIndex = 17583;

struct alignas(4) INKLDEKDGDN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + INKLDEKDGDN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INKLDEKDGDN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JMNININIFAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INKLDEKDGDN_JMNININIFAD_OFFSET))(this);
	}

	::System::Boolean JIFNOAAOLFG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + INKLDEKDGDN_JIFNOAAOLFG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean MBKDAHKIDLE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + INKLDEKDGDN_MBKDAHKIDLE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::INKLDEKDGDN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::INKLDEKDGDN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INKLDEKDGDN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BDJDPCEGHBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INKLDEKDGDN_BDJDPCEGHBH_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INKLDEKDGDN_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::INKLDEKDGDN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::INKLDEKDGDN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + INKLDEKDGDN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
