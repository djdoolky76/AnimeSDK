#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define AJPBPJCLFFD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AJPBPJCLFFD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AJPBPJCLFFD_HKNEHNFDNMO_OFFSET UNITYSDK_OFFSET(0x754920)
#define AJPBPJCLFFD_JEIAKNBLKII_OFFSET UNITYSDK_OFFSET(0x755D20)
#define AJPBPJCLFFD_JIJLGFOHPDF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AJPBPJCLFFD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x194ECA90)
#define AJPBPJCLFFD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AJPBPJCLFFD_TypeDefinitionIndex = 12598;

struct alignas(4) AJPBPJCLFFD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJPBPJCLFFD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJPBPJCLFFD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JEIAKNBLKII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJPBPJCLFFD_JEIAKNBLKII_OFFSET))(this);
	}

	::System::Int32 HKNEHNFDNMO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJPBPJCLFFD_HKNEHNFDNMO_OFFSET))(this);
	}

	::System::Int32 JIJLGFOHPDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJPBPJCLFFD_JIJLGFOHPDF_OFFSET))(this);
	}

	/*
	::AJPBPJCLFFD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AJPBPJCLFFD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJPBPJCLFFD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AJPBPJCLFFD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AJPBPJCLFFD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AJPBPJCLFFD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
