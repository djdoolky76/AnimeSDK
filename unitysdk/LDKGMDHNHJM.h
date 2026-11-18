#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LDKGMDHNHJM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LDKGMDHNHJM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LDKGMDHNHJM_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LDKGMDHNHJM_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define LDKGMDHNHJM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LDKGMDHNHJM_IFNFHPIFMEH_OFFSET UNITYSDK_OFFSET(0x754920)
#define LDKGMDHNHJM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18DF8410)
#define LDKGMDHNHJM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LDKGMDHNHJM_TypeDefinitionIndex = 9831;

struct alignas(4) LDKGMDHNHJM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKGMDHNHJM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDKGMDHNHJM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKGMDHNHJM_DECMGICKDLH_OFFSET))(this);
	}

	/*
	::LDKGMDHNHJM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LDKGMDHNHJM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDKGMDHNHJM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKGMDHNHJM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKGMDHNHJM_BKNKCFDBLGH_OFFSET))(this);
	}

	/*
	static ::LDKGMDHNHJM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LDKGMDHNHJM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LDKGMDHNHJM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 IFNFHPIFMEH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKGMDHNHJM_IFNFHPIFMEH_OFFSET))(this);
	}
};
