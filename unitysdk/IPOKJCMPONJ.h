#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IPOKJCMPONJ_ALLENMMGLEK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IPOKJCMPONJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IPOKJCMPONJ_ENOJJNEPLDJ_OFFSET UNITYSDK_OFFSET(0x756B10)
#define IPOKJCMPONJ_GCJEHAPDEMH_OFFSET UNITYSDK_OFFSET(0x76F6C0)
#define IPOKJCMPONJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IPOKJCMPONJ_HDJLCKBGHJA_OFFSET UNITYSDK_OFFSET(0x755A00)
#define IPOKJCMPONJ_LCNAPELFGBG_OFFSET UNITYSDK_OFFSET(0x754B50)
#define IPOKJCMPONJ_OAHPPGCJFMJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define IPOKJCMPONJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15A9E400)
#define IPOKJCMPONJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IPOKJCMPONJ_TypeDefinitionIndex = 17323;

struct alignas(4) IPOKJCMPONJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPOKJCMPONJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPOKJCMPONJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LCNAPELFGBG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPOKJCMPONJ_LCNAPELFGBG_OFFSET))(this);
	}

	::System::Int32 OAHPPGCJFMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPOKJCMPONJ_OAHPPGCJFMJ_OFFSET))(this);
	}

	::System::Boolean GCJEHAPDEMH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPOKJCMPONJ_GCJEHAPDEMH_OFFSET))(this);
	}

	::System::String* ENOJJNEPLDJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPOKJCMPONJ_ENOJJNEPLDJ_OFFSET))(this);
	}

	/*
	static ::IPOKJCMPONJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IPOKJCMPONJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IPOKJCMPONJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* HDJLCKBGHJA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPOKJCMPONJ_HDJLCKBGHJA_OFFSET))(this);
	}

	::System::Int32 ALLENMMGLEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPOKJCMPONJ_ALLENMMGLEK_OFFSET))(this);
	}

	/*
	::IPOKJCMPONJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IPOKJCMPONJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPOKJCMPONJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
