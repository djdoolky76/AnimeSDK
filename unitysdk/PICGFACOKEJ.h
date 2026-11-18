#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PICGFACOKEJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PICGFACOKEJ_GDFGPNKEMLL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PICGFACOKEJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PICGFACOKEJ_HNPDLMHBIJD_OFFSET UNITYSDK_OFFSET(0x755C70)
#define PICGFACOKEJ_JMBLEJJDJAK_OFFSET UNITYSDK_OFFSET(0x756D50)
#define PICGFACOKEJ_LJLMAPCONEM_OFFSET UNITYSDK_OFFSET(0x755A00)
#define PICGFACOKEJ_MAONCODANDL_OFFSET UNITYSDK_OFFSET(0x754F10)
#define PICGFACOKEJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19143740)
#define PICGFACOKEJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PICGFACOKEJ_TypeDefinitionIndex = 10117;

struct alignas(4) PICGFACOKEJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICGFACOKEJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PICGFACOKEJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HNPDLMHBIJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PICGFACOKEJ_HNPDLMHBIJD_OFFSET))(this);
	}

	/*
	static ::PICGFACOKEJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PICGFACOKEJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PICGFACOKEJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GDFGPNKEMLL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PICGFACOKEJ_GDFGPNKEMLL_OFFSET))(this);
	}

	::System::String* MAONCODANDL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICGFACOKEJ_MAONCODANDL_OFFSET))(this);
	}

	::System::String* LJLMAPCONEM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICGFACOKEJ_LJLMAPCONEM_OFFSET))(this);
	}

	::System::String* JMBLEJJDJAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICGFACOKEJ_JMBLEJJDJAK_OFFSET))(this);
	}

	/*
	::PICGFACOKEJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PICGFACOKEJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PICGFACOKEJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
