#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FNDHDPIGMEN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FNDHDPIGMEN_CDDAGFPKIDK_OFFSET UNITYSDK_OFFSET(0x754F10)
#define FNDHDPIGMEN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FNDHDPIGMEN_HONDKOCBBDK_OFFSET UNITYSDK_OFFSET(0x755A00)
#define FNDHDPIGMEN_IGPBGONOENL_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define FNDHDPIGMEN_IMFELMMICNE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FNDHDPIGMEN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19324A20)
#define FNDHDPIGMEN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FNDHDPIGMEN_TypeDefinitionIndex = 11846;

struct alignas(4) FNDHDPIGMEN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDHDPIGMEN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNDHDPIGMEN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 IMFELMMICNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDHDPIGMEN_IMFELMMICNE_OFFSET))(this);
	}

	::System::String* HONDKOCBBDK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDHDPIGMEN_HONDKOCBBDK_OFFSET))(this);
	}

	::System::String* CDDAGFPKIDK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDHDPIGMEN_CDDAGFPKIDK_OFFSET))(this);
	}

	/*
	static ::FNDHDPIGMEN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FNDHDPIGMEN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FNDHDPIGMEN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* IGPBGONOENL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDHDPIGMEN_IGPBGONOENL_OFFSET))(this);
	}

	/*
	::FNDHDPIGMEN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FNDHDPIGMEN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNDHDPIGMEN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
