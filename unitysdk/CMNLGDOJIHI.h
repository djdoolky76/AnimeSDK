#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CMNLGDOJIHI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CMNLGDOJIHI_BIAJCMIOLIC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CMNLGDOJIHI_EHIHJAPANPI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define CMNLGDOJIHI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CMNLGDOJIHI_HKCBNGBACOG_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define CMNLGDOJIHI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B99D670)
#define CMNLGDOJIHI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CMNLGDOJIHI_TypeDefinitionIndex = 16576;

struct alignas(4) CMNLGDOJIHI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNLGDOJIHI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMNLGDOJIHI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CMNLGDOJIHI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CMNLGDOJIHI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CMNLGDOJIHI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 BIAJCMIOLIC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNLGDOJIHI_BIAJCMIOLIC_OFFSET))(this);
	}

	/*
	::CMNLGDOJIHI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMNLGDOJIHI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMNLGDOJIHI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HKCBNGBACOG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNLGDOJIHI_HKCBNGBACOG_OFFSET))(this);
	}

	::System::String* EHIHJAPANPI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNLGDOJIHI_EHIHJAPANPI_OFFSET))(this);
	}
};
