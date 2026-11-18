#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OAIFBBIBMHC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OAIFBBIBMHC_BDKFDJDLING_OFFSET UNITYSDK_OFFSET(0x756B90)
#define OAIFBBIBMHC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OAIFBBIBMHC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OAIFBBIBMHC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19DCB0F0)
#define OAIFBBIBMHC_PLNBBDEBIII_OFFSET UNITYSDK_OFFSET(0x756D50)
#define OAIFBBIBMHC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OAIFBBIBMHC_TypeDefinitionIndex = 13332;

struct alignas(4) OAIFBBIBMHC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIFBBIBMHC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OAIFBBIBMHC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* PLNBBDEBIII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIFBBIBMHC_PLNBBDEBIII_OFFSET))(this);
	}

	/*
	static ::OAIFBBIBMHC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OAIFBBIBMHC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OAIFBBIBMHC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 BDKFDJDLING()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIFBBIBMHC_BDKFDJDLING_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIFBBIBMHC_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::OAIFBBIBMHC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OAIFBBIBMHC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OAIFBBIBMHC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
