#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DNCFIOGMIFL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DNCFIOGMIFL_BIGKEHJIPFM_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DNCFIOGMIFL_EGDJKBFKHJP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DNCFIOGMIFL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DNCFIOGMIFL_KIIACOPODKK_OFFSET UNITYSDK_OFFSET(0x756D50)
#define DNCFIOGMIFL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17F22B20)
#define DNCFIOGMIFL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DNCFIOGMIFL_TypeDefinitionIndex = 12679;

struct alignas(4) DNCFIOGMIFL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCFIOGMIFL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNCFIOGMIFL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 EGDJKBFKHJP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCFIOGMIFL_EGDJKBFKHJP_OFFSET))(this);
	}

	/*
	static ::DNCFIOGMIFL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DNCFIOGMIFL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DNCFIOGMIFL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 BIGKEHJIPFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCFIOGMIFL_BIGKEHJIPFM_OFFSET))(this);
	}

	/*
	::DNCFIOGMIFL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DNCFIOGMIFL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNCFIOGMIFL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* KIIACOPODKK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCFIOGMIFL_KIIACOPODKK_OFFSET))(this);
	}
};
