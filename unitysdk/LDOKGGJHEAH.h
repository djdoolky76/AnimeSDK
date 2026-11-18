#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LDOKGGJHEAH_ANHKNBOGHDM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LDOKGGJHEAH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LDOKGGJHEAH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LDOKGGJHEAH_NIOLACCPKHH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define LDOKGGJHEAH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x190F9CA0)
#define LDOKGGJHEAH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LDOKGGJHEAH_TypeDefinitionIndex = 14727;

struct alignas(4) LDOKGGJHEAH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOKGGJHEAH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDOKGGJHEAH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* NIOLACCPKHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOKGGJHEAH_NIOLACCPKHH_OFFSET))(this);
	}

	/*
	::LDOKGGJHEAH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LDOKGGJHEAH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDOKGGJHEAH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ANHKNBOGHDM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOKGGJHEAH_ANHKNBOGHDM_OFFSET))(this);
	}

	/*
	static ::LDOKGGJHEAH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LDOKGGJHEAH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LDOKGGJHEAH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
