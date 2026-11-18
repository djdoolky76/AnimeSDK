#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ANMCFGOEHJB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ANMCFGOEHJB_CCOHDDGJFPK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ANMCFGOEHJB_EPICNCHKFHN_OFFSET UNITYSDK_OFFSET(0x756B90)
#define ANMCFGOEHJB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ANMCFGOEHJB_HAPFDNEPECI_OFFSET UNITYSDK_OFFSET(0x754920)
#define ANMCFGOEHJB_HDMFECNJEKO_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define ANMCFGOEHJB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17A73BC0)
#define ANMCFGOEHJB_OALENKANHBL_OFFSET UNITYSDK_OFFSET(0x754F10)
#define ANMCFGOEHJB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ANMCFGOEHJB_TypeDefinitionIndex = 14483;

struct alignas(4) ANMCFGOEHJB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMCFGOEHJB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANMCFGOEHJB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 EPICNCHKFHN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMCFGOEHJB_EPICNCHKFHN_OFFSET))(this);
	}

	::System::Int32 CCOHDDGJFPK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMCFGOEHJB_CCOHDDGJFPK_OFFSET))(this);
	}

	/*
	::ANMCFGOEHJB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ANMCFGOEHJB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANMCFGOEHJB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* OALENKANHBL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMCFGOEHJB_OALENKANHBL_OFFSET))(this);
	}

	/*
	static ::ANMCFGOEHJB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ANMCFGOEHJB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ANMCFGOEHJB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HAPFDNEPECI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMCFGOEHJB_HAPFDNEPECI_OFFSET))(this);
	}

	::System::String* HDMFECNJEKO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMCFGOEHJB_HDMFECNJEKO_OFFSET))(this);
	}
};
