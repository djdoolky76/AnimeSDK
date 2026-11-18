#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define AAKEHKEHIPN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AAKEHKEHIPN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AAKEHKEHIPN_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AAKEHKEHIPN_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define AAKEHKEHIPN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A567EC0)
#define AAKEHKEHIPN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AAKEHKEHIPN_TypeDefinitionIndex = 15839;

struct alignas(4) AAKEHKEHIPN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKEHKEHIPN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AAKEHKEHIPN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKEHKEHIPN_GKBAJJACIEA_OFFSET))(this);
	}

	/*
	static ::AAKEHKEHIPN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AAKEHKEHIPN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AAKEHKEHIPN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::AAKEHKEHIPN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AAKEHKEHIPN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AAKEHKEHIPN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKEHKEHIPN_NENDAECBCEM_OFFSET))(this);
	}
};
