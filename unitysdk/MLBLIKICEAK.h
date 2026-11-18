#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MLBLIKICEAK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MLBLIKICEAK_CIHKGJNKJCE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MLBLIKICEAK_DFPDKIDIINN_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MLBLIKICEAK_FMMPAHDIIJI_OFFSET UNITYSDK_OFFSET(0x756B10)
#define MLBLIKICEAK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MLBLIKICEAK_IFKOAKEOKPH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define MLBLIKICEAK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C08BAE0)
#define MLBLIKICEAK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MLBLIKICEAK_TypeDefinitionIndex = 10604;

struct alignas(4) MLBLIKICEAK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBLIKICEAK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLBLIKICEAK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MLBLIKICEAK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MLBLIKICEAK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MLBLIKICEAK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* FMMPAHDIIJI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBLIKICEAK_FMMPAHDIIJI_OFFSET))(this);
	}

	::System::String* DFPDKIDIINN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBLIKICEAK_DFPDKIDIINN_OFFSET))(this);
	}

	/*
	::MLBLIKICEAK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MLBLIKICEAK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLBLIKICEAK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CIHKGJNKJCE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBLIKICEAK_CIHKGJNKJCE_OFFSET))(this);
	}

	::System::String* IFKOAKEOKPH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBLIKICEAK_IFKOAKEOKPH_OFFSET))(this);
	}
};
