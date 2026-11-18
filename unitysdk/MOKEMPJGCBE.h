#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MOKEMPJGCBE_BAHADFKOOFK_OFFSET UNITYSDK_OFFSET(0x756220)
#define MOKEMPJGCBE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MOKEMPJGCBE_CJDBGLNFHHN_OFFSET UNITYSDK_OFFSET(0x756570)
#define MOKEMPJGCBE_CPJIMGDOBJE_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define MOKEMPJGCBE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MOKEMPJGCBE_GHKOBIMHENC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MOKEMPJGCBE_HPCALNPPNCI_OFFSET UNITYSDK_OFFSET(0x758780)
#define MOKEMPJGCBE_JEEIHKMBNJG_OFFSET UNITYSDK_OFFSET(0x758320)
#define MOKEMPJGCBE_LFPICDMHAOC_OFFSET UNITYSDK_OFFSET(0x755A00)
#define MOKEMPJGCBE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1734C1B0)
#define MOKEMPJGCBE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MOKEMPJGCBE_TypeDefinitionIndex = 11226;

struct alignas(4) MOKEMPJGCBE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKEMPJGCBE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOKEMPJGCBE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* LFPICDMHAOC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKEMPJGCBE_LFPICDMHAOC_OFFSET))(this);
	}

	::System::Boolean CJDBGLNFHHN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MOKEMPJGCBE_CJDBGLNFHHN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MOKEMPJGCBE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MOKEMPJGCBE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOKEMPJGCBE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HPCALNPPNCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKEMPJGCBE_HPCALNPPNCI_OFFSET))(this);
	}

	::System::Int32 GHKOBIMHENC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKEMPJGCBE_GHKOBIMHENC_OFFSET))(this);
	}

	/*
	::MOKEMPJGCBE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MOKEMPJGCBE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOKEMPJGCBE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* JEEIHKMBNJG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKEMPJGCBE_JEEIHKMBNJG_OFFSET))(this);
	}

	::System::String* CPJIMGDOBJE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKEMPJGCBE_CPJIMGDOBJE_OFFSET))(this);
	}

	::System::Int32 BAHADFKOOFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKEMPJGCBE_BAHADFKOOFK_OFFSET))(this);
	}
};
