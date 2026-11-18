#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LOAILIPINKG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LOAILIPINKG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LOAILIPINKG_EPBFBIKDJOM_OFFSET UNITYSDK_OFFSET(0x754F10)
#define LOAILIPINKG_FEMLPHIGLAP_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LOAILIPINKG_FKAOANDANHI_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LOAILIPINKG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LOAILIPINKG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x195711E0)
#define LOAILIPINKG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LOAILIPINKG_TypeDefinitionIndex = 9909;

struct alignas(4) LOAILIPINKG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAILIPINKG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOAILIPINKG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FEMLPHIGLAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAILIPINKG_FEMLPHIGLAP_OFFSET))(this);
	}

	::System::String* EPBFBIKDJOM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAILIPINKG_EPBFBIKDJOM_OFFSET))(this);
	}

	/*
	::LOAILIPINKG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LOAILIPINKG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOAILIPINKG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LOAILIPINKG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LOAILIPINKG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LOAILIPINKG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* FKAOANDANHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAILIPINKG_FKAOANDANHI_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAILIPINKG_ACOEONABOJL_OFFSET))(this);
	}
};
