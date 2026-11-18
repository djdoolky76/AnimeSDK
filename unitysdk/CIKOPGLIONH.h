#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define CIKOPGLIONH_AABNEGEFBJB_OFFSET UNITYSDK_OFFSET(0x754920)
#define CIKOPGLIONH_AKAAABACKEO_OFFSET UNITYSDK_OFFSET(0x754970)
#define CIKOPGLIONH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CIKOPGLIONH_BJGHPPGLNPE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define CIKOPGLIONH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CIKOPGLIONH_GGBLGGHOCKO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CIKOPGLIONH_ICFCDPKPJHJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CIKOPGLIONH_MDPGOOPHCEN_OFFSET UNITYSDK_OFFSET(0x755C70)
#define CIKOPGLIONH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17A86830)
#define CIKOPGLIONH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CIKOPGLIONH_TypeDefinitionIndex = 15235;

struct alignas(4) CIKOPGLIONH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKOPGLIONH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CIKOPGLIONH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CIKOPGLIONH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CIKOPGLIONH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CIKOPGLIONH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ICFCDPKPJHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKOPGLIONH_ICFCDPKPJHJ_OFFSET))(this);
	}

	::System::Int32 GGBLGGHOCKO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKOPGLIONH_GGBLGGHOCKO_OFFSET))(this);
	}

	/*
	::CIKOPGLIONH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CIKOPGLIONH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CIKOPGLIONH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 AKAAABACKEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKOPGLIONH_AKAAABACKEO_OFFSET))(this);
	}

	::System::Int32 AABNEGEFBJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKOPGLIONH_AABNEGEFBJB_OFFSET))(this);
	}

	::System::Int32 MDPGOOPHCEN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKOPGLIONH_MDPGOOPHCEN_OFFSET))(this);
	}

	::System::Int32 BJGHPPGLNPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKOPGLIONH_BJGHPPGLNPE_OFFSET))(this);
	}
};
