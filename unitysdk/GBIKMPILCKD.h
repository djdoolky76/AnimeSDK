#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GBIKMPILCKD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GBIKMPILCKD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GBIKMPILCKD_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x755C70)
#define GBIKMPILCKD_FIGIKLOHNBM_OFFSET UNITYSDK_OFFSET(0x757190)
#define GBIKMPILCKD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GBIKMPILCKD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5B7030)
#define GBIKMPILCKD_PKAHPLMOLKG_OFFSET UNITYSDK_OFFSET(0x762B30)
#define GBIKMPILCKD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GBIKMPILCKD_TypeDefinitionIndex = 9730;

struct alignas(4) GBIKMPILCKD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBIKMPILCKD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBIKMPILCKD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GBIKMPILCKD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GBIKMPILCKD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GBIKMPILCKD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBIKMPILCKD_BKNKCFDBLGH_OFFSET))(this);
	}

	/*
	::GBIKMPILCKD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GBIKMPILCKD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBIKMPILCKD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBIKMPILCKD_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean PKAHPLMOLKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBIKMPILCKD_PKAHPLMOLKG_OFFSET))(this);
	}

	::System::String* FIGIKLOHNBM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBIKMPILCKD_FIGIKLOHNBM_OFFSET))(this);
	}
};
