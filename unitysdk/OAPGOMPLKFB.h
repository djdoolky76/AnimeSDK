#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OAPGOMPLKFB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OAPGOMPLKFB_BIOGBGBMGCF_OFFSET UNITYSDK_OFFSET(0x754970)
#define OAPGOMPLKFB_CMEPJFGPMCG_OFFSET UNITYSDK_OFFSET(0x756B10)
#define OAPGOMPLKFB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OAPGOMPLKFB_GFHKDGIIAKB_OFFSET UNITYSDK_OFFSET(0x757290)
#define OAPGOMPLKFB_KPMGNOPNGAP_OFFSET UNITYSDK_OFFSET(0x755A00)
#define OAPGOMPLKFB_NPOJKHANKBO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OAPGOMPLKFB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17FDA570)
#define OAPGOMPLKFB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OAPGOMPLKFB_TypeDefinitionIndex = 9834;

struct alignas(4) OAPGOMPLKFB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPGOMPLKFB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OAPGOMPLKFB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OAPGOMPLKFB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OAPGOMPLKFB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OAPGOMPLKFB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* CMEPJFGPMCG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPGOMPLKFB_CMEPJFGPMCG_OFFSET))(this);
	}

	::System::String* KPMGNOPNGAP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPGOMPLKFB_KPMGNOPNGAP_OFFSET))(this);
	}

	/*
	static ::OAPGOMPLKFB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OAPGOMPLKFB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OAPGOMPLKFB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NPOJKHANKBO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPGOMPLKFB_NPOJKHANKBO_OFFSET))(this);
	}

	::System::Int32 BIOGBGBMGCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPGOMPLKFB_BIOGBGBMGCF_OFFSET))(this);
	}

	::System::String* GFHKDGIIAKB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPGOMPLKFB_GFHKDGIIAKB_OFFSET))(this);
	}
};
