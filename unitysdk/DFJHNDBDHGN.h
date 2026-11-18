#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DFJHNDBDHGN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DFJHNDBDHGN_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DFJHNDBDHGN_DFBECACCEHI_OFFSET UNITYSDK_OFFSET(0x756B10)
#define DFJHNDBDHGN_DNPIEFMLOIA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DFJHNDBDHGN_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x756D50)
#define DFJHNDBDHGN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DFJHNDBDHGN_KFKPFJJAIKG_OFFSET UNITYSDK_OFFSET(0x755A00)
#define DFJHNDBDHGN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A58F9E0)
#define DFJHNDBDHGN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DFJHNDBDHGN_TypeDefinitionIndex = 13897;

struct alignas(4) DFJHNDBDHGN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJHNDBDHGN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFJHNDBDHGN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DFJHNDBDHGN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFJHNDBDHGN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFJHNDBDHGN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DFJHNDBDHGN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DFJHNDBDHGN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DFJHNDBDHGN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJHNDBDHGN_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Int32 DNPIEFMLOIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJHNDBDHGN_DNPIEFMLOIA_OFFSET))(this);
	}

	::System::String* DFBECACCEHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJHNDBDHGN_DFBECACCEHI_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJHNDBDHGN_DECMGICKDLH_OFFSET))(this);
	}

	::System::String* KFKPFJJAIKG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJHNDBDHGN_KFKPFJJAIKG_OFFSET))(this);
	}
};
