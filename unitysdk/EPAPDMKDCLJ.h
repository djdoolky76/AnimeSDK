#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EPAPDMKDCLJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EPAPDMKDCLJ_FGLDPOBGNCI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EPAPDMKDCLJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EPAPDMKDCLJ_GHGEHFMIDLN_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define EPAPDMKDCLJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19525120)
#define EPAPDMKDCLJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EPAPDMKDCLJ_TypeDefinitionIndex = 11479;

struct alignas(4) EPAPDMKDCLJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAPDMKDCLJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPAPDMKDCLJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EPAPDMKDCLJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EPAPDMKDCLJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EPAPDMKDCLJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::EPAPDMKDCLJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EPAPDMKDCLJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPAPDMKDCLJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FGLDPOBGNCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAPDMKDCLJ_FGLDPOBGNCI_OFFSET))(this);
	}

	::System::String* GHGEHFMIDLN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAPDMKDCLJ_GHGEHFMIDLN_OFFSET))(this);
	}
};
