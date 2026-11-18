#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DOIPMNDEPFK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DOIPMNDEPFK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DOIPMNDEPFK_DBHCIDPIJAF_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DOIPMNDEPFK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DOIPMNDEPFK_MADFDDELJEH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DOIPMNDEPFK_MKOIIMKIPKH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DOIPMNDEPFK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17A9E670)
#define DOIPMNDEPFK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DOIPMNDEPFK_TypeDefinitionIndex = 11550;

struct alignas(4) DOIPMNDEPFK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIPMNDEPFK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOIPMNDEPFK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DBHCIDPIJAF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIPMNDEPFK_DBHCIDPIJAF_OFFSET))(this);
	}

	::System::Int32 MADFDDELJEH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIPMNDEPFK_MADFDDELJEH_OFFSET))(this);
	}

	/*
	static ::DOIPMNDEPFK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DOIPMNDEPFK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DOIPMNDEPFK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIPMNDEPFK_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::DOIPMNDEPFK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOIPMNDEPFK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOIPMNDEPFK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* MKOIIMKIPKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIPMNDEPFK_MKOIIMKIPKH_OFFSET))(this);
	}
};
