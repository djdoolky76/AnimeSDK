#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EACKGDKFPDJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EACKGDKFPDJ_AGCHOHIPJNC_OFFSET UNITYSDK_OFFSET(0x754970)
#define EACKGDKFPDJ_AHFDLHJACOF_OFFSET UNITYSDK_OFFSET(0x756B90)
#define EACKGDKFPDJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EACKGDKFPDJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EACKGDKFPDJ_LEGAIPAMJBC_OFFSET UNITYSDK_OFFSET(0x754920)
#define EACKGDKFPDJ_MDFIHALAIJB_OFFSET UNITYSDK_OFFSET(0x755D20)
#define EACKGDKFPDJ_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EACKGDKFPDJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EACKGDKFPDJ_TypeDefinitionIndex = 10836;

struct alignas(4) EACKGDKFPDJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EACKGDKFPDJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EACKGDKFPDJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EACKGDKFPDJ_NKCNGLADFNA_OFFSET))(this);
	}

	::System::Int32 AGCHOHIPJNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EACKGDKFPDJ_AGCHOHIPJNC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EACKGDKFPDJ_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::EACKGDKFPDJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EACKGDKFPDJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EACKGDKFPDJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MDFIHALAIJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EACKGDKFPDJ_MDFIHALAIJB_OFFSET))(this);
	}

	::System::Int32 AHFDLHJACOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EACKGDKFPDJ_AHFDLHJACOF_OFFSET))(this);
	}

	::System::Int32 LEGAIPAMJBC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EACKGDKFPDJ_LEGAIPAMJBC_OFFSET))(this);
	}
};
