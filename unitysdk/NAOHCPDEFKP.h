#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NAOHCPDEFKP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NAOHCPDEFKP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NAOHCPDEFKP_DHKCCIDKFAH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NAOHCPDEFKP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NAOHCPDEFKP_JMBLEJJDJAK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NAOHCPDEFKP_KEPNENDPLME_OFFSET UNITYSDK_OFFSET(0x756B10)
#define NAOHCPDEFKP_LOHADBOEFKG_OFFSET UNITYSDK_OFFSET(0x755A00)
#define NAOHCPDEFKP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1CFE6420)
#define NAOHCPDEFKP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NAOHCPDEFKP_TypeDefinitionIndex = 13300;

struct alignas(4) NAOHCPDEFKP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOHCPDEFKP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NAOHCPDEFKP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* KEPNENDPLME()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOHCPDEFKP_KEPNENDPLME_OFFSET))(this);
	}

	/*
	::NAOHCPDEFKP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NAOHCPDEFKP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NAOHCPDEFKP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOHCPDEFKP_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* DHKCCIDKFAH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOHCPDEFKP_DHKCCIDKFAH_OFFSET))(this);
	}

	::System::String* JMBLEJJDJAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOHCPDEFKP_JMBLEJJDJAK_OFFSET))(this);
	}

	::System::String* LOHADBOEFKG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOHCPDEFKP_LOHADBOEFKG_OFFSET))(this);
	}

	/*
	static ::NAOHCPDEFKP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NAOHCPDEFKP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NAOHCPDEFKP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
