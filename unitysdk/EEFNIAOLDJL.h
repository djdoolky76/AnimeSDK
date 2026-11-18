#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EEFNIAOLDJL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EEFNIAOLDJL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EEFNIAOLDJL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EEFNIAOLDJL_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x755A00)
#define EEFNIAOLDJL_MPIDGDJCDMO_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EEFNIAOLDJL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19C0E120)
#define EEFNIAOLDJL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EEFNIAOLDJL_TypeDefinitionIndex = 11516;

struct alignas(4) EEFNIAOLDJL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFNIAOLDJL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EEFNIAOLDJL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MPIDGDJCDMO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFNIAOLDJL_MPIDGDJCDMO_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFNIAOLDJL_IFDIOIOCGDP_OFFSET))(this);
	}

	/*
	::EEFNIAOLDJL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EEFNIAOLDJL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EEFNIAOLDJL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EEFNIAOLDJL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EEFNIAOLDJL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EEFNIAOLDJL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFNIAOLDJL_ACOEONABOJL_OFFSET))(this);
	}
};
