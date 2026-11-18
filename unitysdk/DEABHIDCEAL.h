#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DEABHIDCEAL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DEABHIDCEAL_BFEBOLKNBGK_OFFSET UNITYSDK_OFFSET(0x754920)
#define DEABHIDCEAL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DEABHIDCEAL_FGCPLFCCHBK_OFFSET UNITYSDK_OFFSET(0x755C70)
#define DEABHIDCEAL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DEABHIDCEAL_KFBGNKBGKBK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DEABHIDCEAL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19F37700)
#define DEABHIDCEAL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DEABHIDCEAL_TypeDefinitionIndex = 15234;

struct alignas(4) DEABHIDCEAL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEABHIDCEAL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEABHIDCEAL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FGCPLFCCHBK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEABHIDCEAL_FGCPLFCCHBK_OFFSET))(this);
	}

	::System::Int32 KFBGNKBGKBK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEABHIDCEAL_KFBGNKBGKBK_OFFSET))(this);
	}

	/*
	static ::DEABHIDCEAL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DEABHIDCEAL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DEABHIDCEAL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::DEABHIDCEAL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DEABHIDCEAL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEABHIDCEAL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEABHIDCEAL_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 BFEBOLKNBGK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEABHIDCEAL_BFEBOLKNBGK_OFFSET))(this);
	}
};
