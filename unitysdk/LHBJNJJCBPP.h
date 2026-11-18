#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LHBJNJJCBPP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LHBJNJJCBPP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LHBJNJJCBPP_IGDCIFGOCCP_OFFSET UNITYSDK_OFFSET(0x756D50)
#define LHBJNJJCBPP_KKJBOOCKLJE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LHBJNJJCBPP_NAEDMMJNDBB_OFFSET UNITYSDK_OFFSET(0x755A00)
#define LHBJNJJCBPP_NKACKJKDHOG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LHBJNJJCBPP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1958E0D0)
#define LHBJNJJCBPP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LHBJNJJCBPP_TypeDefinitionIndex = 9345;

struct alignas(4) LHBJNJJCBPP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBJNJJCBPP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHBJNJJCBPP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LHBJNJJCBPP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LHBJNJJCBPP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LHBJNJJCBPP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* NAEDMMJNDBB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBJNJJCBPP_NAEDMMJNDBB_OFFSET))(this);
	}

	::System::String* IGDCIFGOCCP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBJNJJCBPP_IGDCIFGOCCP_OFFSET))(this);
	}

	::System::String* KKJBOOCKLJE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBJNJJCBPP_KKJBOOCKLJE_OFFSET))(this);
	}

	/*
	::LHBJNJJCBPP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LHBJNJJCBPP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHBJNJJCBPP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NKACKJKDHOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBJNJJCBPP_NKACKJKDHOG_OFFSET))(this);
	}
};
