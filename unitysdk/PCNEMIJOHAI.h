#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PCNEMIJOHAI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PCNEMIJOHAI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PCNEMIJOHAI_CLBAAHEDGEP_OFFSET UNITYSDK_OFFSET(0x755890)
#define PCNEMIJOHAI_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define PCNEMIJOHAI_EJBAJLJPAJA_OFFSET UNITYSDK_OFFSET(0x755190)
#define PCNEMIJOHAI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PCNEMIJOHAI_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754970)
#define PCNEMIJOHAI_JMHMIPIGCCA_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define PCNEMIJOHAI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B3467C0)
#define PCNEMIJOHAI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PCNEMIJOHAI_TypeDefinitionIndex = 11916;

struct alignas(4) PCNEMIJOHAI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNEMIJOHAI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PCNEMIJOHAI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CLBAAHEDGEP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNEMIJOHAI_CLBAAHEDGEP_OFFSET))(this);
	}

	/*
	static ::PCNEMIJOHAI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PCNEMIJOHAI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PCNEMIJOHAI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNEMIJOHAI_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::PCNEMIJOHAI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PCNEMIJOHAI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PCNEMIJOHAI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNEMIJOHAI_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 EJBAJLJPAJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNEMIJOHAI_EJBAJLJPAJA_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNEMIJOHAI_DECMGICKDLH_OFFSET))(this);
	}

	::System::String* JMHMIPIGCCA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNEMIJOHAI_JMHMIPIGCCA_OFFSET))(this);
	}
};
