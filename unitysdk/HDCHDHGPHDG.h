#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define HDCHDHGPHDG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HDCHDHGPHDG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HDCHDHGPHDG_GGAJLLDGFMP_OFFSET UNITYSDK_OFFSET(0x754920)
#define HDCHDHGPHDG_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HDCHDHGPHDG_HGELKFBDJNK_OFFSET UNITYSDK_OFFSET(0x754970)
#define HDCHDHGPHDG_KCHJNNGKEEK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HDCHDHGPHDG_NIHGEMPPPJB_OFFSET UNITYSDK_OFFSET(0x756B90)
#define HDCHDHGPHDG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A4E8D10)
#define HDCHDHGPHDG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HDCHDHGPHDG_TypeDefinitionIndex = 17387;

struct alignas(4) HDCHDHGPHDG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDCHDHGPHDG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDCHDHGPHDG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HDCHDHGPHDG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HDCHDHGPHDG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDCHDHGPHDG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HDCHDHGPHDG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HDCHDHGPHDG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HDCHDHGPHDG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NIHGEMPPPJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDCHDHGPHDG_NIHGEMPPPJB_OFFSET))(this);
	}

	::System::Int32 KCHJNNGKEEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDCHDHGPHDG_KCHJNNGKEEK_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDCHDHGPHDG_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 GGAJLLDGFMP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDCHDHGPHDG_GGAJLLDGFMP_OFFSET))(this);
	}

	::System::Int32 HGELKFBDJNK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDCHDHGPHDG_HGELKFBDJNK_OFFSET))(this);
	}
};
