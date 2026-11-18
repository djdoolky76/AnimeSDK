#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define PJOJABEMJGG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PJOJABEMJGG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PJOJABEMJGG_GKNNCMOBOPK_OFFSET UNITYSDK_OFFSET(0x755D20)
#define PJOJABEMJGG_IKCOBCPNEAD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define PJOJABEMJGG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1CD0DFB0)
#define PJOJABEMJGG_OGDGEPFMALD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PJOJABEMJGG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PJOJABEMJGG_TypeDefinitionIndex = 12076;

struct alignas(4) PJOJABEMJGG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOJABEMJGG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJOJABEMJGG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 OGDGEPFMALD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOJABEMJGG_OGDGEPFMALD_OFFSET))(this);
	}

	/*
	static ::PJOJABEMJGG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PJOJABEMJGG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PJOJABEMJGG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 IKCOBCPNEAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOJABEMJGG_IKCOBCPNEAD_OFFSET))(this);
	}

	::System::Int32 GKNNCMOBOPK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOJABEMJGG_GKNNCMOBOPK_OFFSET))(this);
	}

	/*
	::PJOJABEMJGG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PJOJABEMJGG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJOJABEMJGG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
