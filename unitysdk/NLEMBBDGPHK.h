#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NLEMBBDGPHK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NLEMBBDGPHK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NLEMBBDGPHK_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NLEMBBDGPHK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NLEMBBDGPHK_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NLEMBBDGPHK_HLIFCGDNODB_OFFSET UNITYSDK_OFFSET(0x754920)
#define NLEMBBDGPHK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C18F470)
#define NLEMBBDGPHK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NLEMBBDGPHK_TypeDefinitionIndex = 16939;

struct alignas(4) NLEMBBDGPHK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLEMBBDGPHK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLEMBBDGPHK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLEMBBDGPHK_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLEMBBDGPHK_GPBFENDAJMF_OFFSET))(this);
	}

	/*
	::NLEMBBDGPHK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NLEMBBDGPHK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLEMBBDGPHK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NLEMBBDGPHK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NLEMBBDGPHK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NLEMBBDGPHK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLEMBBDGPHK_DECMGICKDLH_OFFSET))(this);
	}

	::System::Int32 HLIFCGDNODB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLEMBBDGPHK_HLIFCGDNODB_OFFSET))(this);
	}
};
