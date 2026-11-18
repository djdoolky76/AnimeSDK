#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define LGAIFJMJHFC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LGAIFJMJHFC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LGAIFJMJHFC_ELHJOMPHFNM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LGAIFJMJHFC_FIPDKNKPKJI_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LGAIFJMJHFC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LGAIFJMJHFC_LPBFCGDBGEG_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LGAIFJMJHFC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LGAIFJMJHFC_TypeDefinitionIndex = 15505;

struct alignas(4) LGAIFJMJHFC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAIFJMJHFC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGAIFJMJHFC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAIFJMJHFC_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::LGAIFJMJHFC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGAIFJMJHFC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGAIFJMJHFC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FIPDKNKPKJI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAIFJMJHFC_FIPDKNKPKJI_OFFSET))(this);
	}

	::System::Int32 ELHJOMPHFNM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAIFJMJHFC_ELHJOMPHFNM_OFFSET))(this);
	}

	::System::Int32 LPBFCGDBGEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAIFJMJHFC_LPBFCGDBGEG_OFFSET))(this);
	}
};
