#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FFDBIJLOACN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FFDBIJLOACN_GDFIKFOEDIN_OFFSET UNITYSDK_OFFSET(0x755D20)
#define FFDBIJLOACN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FFDBIJLOACN_IDMMLFKNGDG_OFFSET UNITYSDK_OFFSET(0x756B90)
#define FFDBIJLOACN_JLKNIMKLJNK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FFDBIJLOACN_JPOLNBEKCKO_OFFSET UNITYSDK_OFFSET(0x754920)
#define FFDBIJLOACN_LCOLNEOIGDF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FFDBIJLOACN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B1039E0)
#define FFDBIJLOACN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FFDBIJLOACN_TypeDefinitionIndex = 11797;

struct alignas(4) FFDBIJLOACN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDBIJLOACN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFDBIJLOACN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LCOLNEOIGDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDBIJLOACN_LCOLNEOIGDF_OFFSET))(this);
	}

	::System::Int32 JLKNIMKLJNK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDBIJLOACN_JLKNIMKLJNK_OFFSET))(this);
	}

	::System::Int32 GDFIKFOEDIN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDBIJLOACN_GDFIKFOEDIN_OFFSET))(this);
	}

	/*
	static ::FFDBIJLOACN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FFDBIJLOACN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FFDBIJLOACN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 JPOLNBEKCKO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDBIJLOACN_JPOLNBEKCKO_OFFSET))(this);
	}

	/*
	::FFDBIJLOACN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FFDBIJLOACN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFDBIJLOACN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IDMMLFKNGDG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDBIJLOACN_IDMMLFKNGDG_OFFSET))(this);
	}
};
