#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HCAHLDENMEI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HCAHLDENMEI_BDKFDJDLING_OFFSET UNITYSDK_OFFSET(0x756B90)
#define HCAHLDENMEI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HCAHLDENMEI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HCAHLDENMEI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x16655E80)
#define HCAHLDENMEI_PLNBBDEBIII_OFFSET UNITYSDK_OFFSET(0x756D50)
#define HCAHLDENMEI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HCAHLDENMEI_TypeDefinitionIndex = 15069;

struct alignas(4) HCAHLDENMEI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAHLDENMEI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCAHLDENMEI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HCAHLDENMEI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HCAHLDENMEI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HCAHLDENMEI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* PLNBBDEBIII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAHLDENMEI_PLNBBDEBIII_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAHLDENMEI_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 BDKFDJDLING()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAHLDENMEI_BDKFDJDLING_OFFSET))(this);
	}

	/*
	::HCAHLDENMEI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCAHLDENMEI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCAHLDENMEI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
