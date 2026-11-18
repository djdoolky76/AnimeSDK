#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GBGCPHMKIID_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GBGCPHMKIID_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GBGCPHMKIID_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define GBGCPHMKIID_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GBGCPHMKIID_HGJBIHIGGHB_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define GBGCPHMKIID_NILPHCJELOL_OFFSET UNITYSDK_OFFSET(0x755A00)
#define GBGCPHMKIID_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B10E630)
#define GBGCPHMKIID___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GBGCPHMKIID_TypeDefinitionIndex = 11742;

struct alignas(4) GBGCPHMKIID
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGCPHMKIID_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBGCPHMKIID___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGCPHMKIID_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::GBGCPHMKIID BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GBGCPHMKIID(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBGCPHMKIID_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HGJBIHIGGHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGCPHMKIID_HGJBIHIGGHB_OFFSET))(this);
	}

	/*
	static ::GBGCPHMKIID OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GBGCPHMKIID(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GBGCPHMKIID_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGCPHMKIID_ENJENAJGHFI_OFFSET))(this);
	}

	::System::String* NILPHCJELOL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGCPHMKIID_NILPHCJELOL_OFFSET))(this);
	}
};
