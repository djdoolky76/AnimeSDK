#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BGIIKAACAGN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BGIIKAACAGN_FCMMOGBIAJK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define BGIIKAACAGN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BGIIKAACAGN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C514A10)
#define BGIIKAACAGN_PJFHCIAPAFE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BGIIKAACAGN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BGIIKAACAGN_TypeDefinitionIndex = 16211;

struct alignas(4) BGIIKAACAGN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGIIKAACAGN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BGIIKAACAGN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BGIIKAACAGN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BGIIKAACAGN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BGIIKAACAGN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PJFHCIAPAFE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGIIKAACAGN_PJFHCIAPAFE_OFFSET))(this);
	}

	/*
	static ::BGIIKAACAGN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BGIIKAACAGN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BGIIKAACAGN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* FCMMOGBIAJK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGIIKAACAGN_FCMMOGBIAJK_OFFSET))(this);
	}
};
