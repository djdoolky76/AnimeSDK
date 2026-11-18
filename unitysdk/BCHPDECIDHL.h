#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define BCHPDECIDHL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BCHPDECIDHL_FBIFLLKILHM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BCHPDECIDHL_FDAGADNDDJH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define BCHPDECIDHL_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BCHPDECIDHL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BCHPDECIDHL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5302D0)
#define BCHPDECIDHL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BCHPDECIDHL_TypeDefinitionIndex = 12126;

struct alignas(4) BCHPDECIDHL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCHPDECIDHL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCHPDECIDHL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCHPDECIDHL_FJPGCNGHHCC_OFFSET))(this);
	}

	/*
	static ::BCHPDECIDHL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BCHPDECIDHL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BCHPDECIDHL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 FDAGADNDDJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCHPDECIDHL_FDAGADNDDJH_OFFSET))(this);
	}

	::System::Int32 FBIFLLKILHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCHPDECIDHL_FBIFLLKILHM_OFFSET))(this);
	}

	/*
	::BCHPDECIDHL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BCHPDECIDHL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCHPDECIDHL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
