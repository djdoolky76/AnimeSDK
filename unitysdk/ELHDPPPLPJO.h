#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define ELHDPPPLPJO_AAEAAMPJGLB_OFFSET UNITYSDK_OFFSET(0x754920)
#define ELHDPPPLPJO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ELHDPPPLPJO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ELHDPPPLPJO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ELHDPPPLPJO_MJDBLFAGIAH_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define ELHDPPPLPJO_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define ELHDPPPLPJO_NMEMNOBKJGH_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define ELHDPPPLPJO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ELHDPPPLPJO_TypeDefinitionIndex = 16861;

struct alignas(4) ELHDPPPLPJO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHDPPPLPJO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELHDPPPLPJO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHDPPPLPJO_NFKFHJBEPGD_OFFSET))(this);
	}

	::System::Int32 MJDBLFAGIAH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHDPPPLPJO_MJDBLFAGIAH_OFFSET))(this);
	}

	::System::Int32 AAEAAMPJGLB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHDPPPLPJO_AAEAAMPJGLB_OFFSET))(this);
	}

	::System::Boolean NMEMNOBKJGH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + ELHDPPPLPJO_NMEMNOBKJGH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHDPPPLPJO_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::ELHDPPPLPJO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ELHDPPPLPJO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELHDPPPLPJO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
