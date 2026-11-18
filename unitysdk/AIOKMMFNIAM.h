#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AIOKMMFNIAM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AIOKMMFNIAM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AIOKMMFNIAM_BINHAEMDNDH_OFFSET UNITYSDK_OFFSET(0x754920)
#define AIOKMMFNIAM_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define AIOKMMFNIAM_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define AIOKMMFNIAM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AIOKMMFNIAM_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define AIOKMMFNIAM_KOOEDFDEMDF_OFFSET UNITYSDK_OFFSET(0x754970)
#define AIOKMMFNIAM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19BD77F0)
#define AIOKMMFNIAM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AIOKMMFNIAM_TypeDefinitionIndex = 11461;

struct alignas(4) AIOKMMFNIAM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOKMMFNIAM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIOKMMFNIAM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOKMMFNIAM_DECMGICKDLH_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOKMMFNIAM_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::Int32 BINHAEMDNDH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOKMMFNIAM_BINHAEMDNDH_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOKMMFNIAM_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::AIOKMMFNIAM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AIOKMMFNIAM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIOKMMFNIAM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOKMMFNIAM_ENJENAJGHFI_OFFSET))(this);
	}

	/*
	static ::AIOKMMFNIAM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AIOKMMFNIAM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AIOKMMFNIAM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 KOOEDFDEMDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOKMMFNIAM_KOOEDFDEMDF_OFFSET))(this);
	}
};
