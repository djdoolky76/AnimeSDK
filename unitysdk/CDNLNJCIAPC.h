#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define CDNLNJCIAPC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CDNLNJCIAPC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CDNLNJCIAPC_CLBAAHEDGEP_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define CDNLNJCIAPC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CDNLNJCIAPC_GFHFOEPFNJL_OFFSET UNITYSDK_OFFSET(0x7C3D50)
#define CDNLNJCIAPC_HBMGLCOEEOH_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define CDNLNJCIAPC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C528D90)
#define CDNLNJCIAPC_PGGANLAMJOP_OFFSET UNITYSDK_OFFSET(0x758840)
#define CDNLNJCIAPC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CDNLNJCIAPC_TypeDefinitionIndex = 16247;

struct alignas(4) CDNLNJCIAPC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNLNJCIAPC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDNLNJCIAPC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HBMGLCOEEOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNLNJCIAPC_HBMGLCOEEOH_OFFSET))(this);
	}

	/*
	static ::CDNLNJCIAPC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CDNLNJCIAPC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CDNLNJCIAPC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean GFHFOEPFNJL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNLNJCIAPC_GFHFOEPFNJL_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNLNJCIAPC_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean PGGANLAMJOP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNLNJCIAPC_PGGANLAMJOP_OFFSET))(this);
	}

	::System::Int32 CLBAAHEDGEP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNLNJCIAPC_CLBAAHEDGEP_OFFSET))(this);
	}

	/*
	::CDNLNJCIAPC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CDNLNJCIAPC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDNLNJCIAPC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
