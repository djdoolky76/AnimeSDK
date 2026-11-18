#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MPKCKILEIHA_AKHOPDGDHGE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define MPKCKILEIHA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MPKCKILEIHA_CBEDPKEEJCA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MPKCKILEIHA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MPKCKILEIHA_KLIMJHHMAOK_OFFSET UNITYSDK_OFFSET(0x755A00)
#define MPKCKILEIHA_MADPGOPGLCL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MPKCKILEIHA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17FCDB40)
#define MPKCKILEIHA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MPKCKILEIHA_TypeDefinitionIndex = 12189;

struct alignas(4) MPKCKILEIHA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKCKILEIHA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPKCKILEIHA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CBEDPKEEJCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKCKILEIHA_CBEDPKEEJCA_OFFSET))(this);
	}

	/*
	::MPKCKILEIHA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MPKCKILEIHA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPKCKILEIHA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* KLIMJHHMAOK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKCKILEIHA_KLIMJHHMAOK_OFFSET))(this);
	}

	::System::Int32 AKHOPDGDHGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKCKILEIHA_AKHOPDGDHGE_OFFSET))(this);
	}

	/*
	static ::MPKCKILEIHA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MPKCKILEIHA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MPKCKILEIHA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 MADPGOPGLCL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKCKILEIHA_MADPGOPGLCL_OFFSET))(this);
	}
};
