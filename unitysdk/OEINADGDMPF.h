#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OEINADGDMPF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OEINADGDMPF_DFIGOHGIDJN_OFFSET UNITYSDK_OFFSET(0x754F10)
#define OEINADGDMPF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OEINADGDMPF_HAAMGFCKPII_OFFSET UNITYSDK_OFFSET(0x763D00)
#define OEINADGDMPF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19133820)
#define OEINADGDMPF_OGAKJIPMFOI_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OEINADGDMPF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OEINADGDMPF_TypeDefinitionIndex = 14891;

struct alignas(4) OEINADGDMPF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEINADGDMPF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEINADGDMPF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Span_1_9011FAD97750D224<::System::Byte> HAAMGFCKPII()
	{
		return ((::System::Span_1_9011FAD97750D224<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + OEINADGDMPF_HAAMGFCKPII_OFFSET))(this);
	}

	::System::String* DFIGOHGIDJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEINADGDMPF_DFIGOHGIDJN_OFFSET))(this);
	}

	::System::Int32 OGAKJIPMFOI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEINADGDMPF_OGAKJIPMFOI_OFFSET))(this);
	}

	/*
	static ::OEINADGDMPF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::String* MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OEINADGDMPF(*)(::System::Int32, ::System::String*, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OEINADGDMPF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::OEINADGDMPF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OEINADGDMPF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEINADGDMPF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
