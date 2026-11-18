#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OGFOIHECLCA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OGFOIHECLCA_GCBNPPAEGBE_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define OGFOIHECLCA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OGFOIHECLCA_LOOCPCJABMB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OGFOIHECLCA_MIKJNMHCBKC_OFFSET UNITYSDK_OFFSET(0x754C20)
#define OGFOIHECLCA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BAB4880)
#define OGFOIHECLCA_ODLPELGEBAJ_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define OGFOIHECLCA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OGFOIHECLCA_TypeDefinitionIndex = 13107;

struct alignas(4) OGFOIHECLCA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGFOIHECLCA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGFOIHECLCA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OGFOIHECLCA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OGFOIHECLCA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGFOIHECLCA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OGFOIHECLCA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OGFOIHECLCA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OGFOIHECLCA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LOOCPCJABMB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGFOIHECLCA_LOOCPCJABMB_OFFSET))(this);
	}

	::System::Boolean GCBNPPAEGBE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OGFOIHECLCA_GCBNPPAEGBE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* ODLPELGEBAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGFOIHECLCA_ODLPELGEBAJ_OFFSET))(this);
	}

	::System::Int32 MIKJNMHCBKC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGFOIHECLCA_MIKJNMHCBKC_OFFSET))(this);
	}
};
