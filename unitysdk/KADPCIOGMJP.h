#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KADPCIOGMJP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KADPCIOGMJP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KADPCIOGMJP_FJOLPGBLBBH_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KADPCIOGMJP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KADPCIOGMJP_HFGPAPBBAKD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KADPCIOGMJP_KOJBJBEKDBD_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KADPCIOGMJP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KADPCIOGMJP_TypeDefinitionIndex = 12434;

struct alignas(4) KADPCIOGMJP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KADPCIOGMJP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KADPCIOGMJP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 KOJBJBEKDBD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KADPCIOGMJP_KOJBJBEKDBD_OFFSET))(this);
	}

	::System::Int32 HFGPAPBBAKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KADPCIOGMJP_HFGPAPBBAKD_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KADPCIOGMJP_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::KADPCIOGMJP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KADPCIOGMJP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KADPCIOGMJP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FJOLPGBLBBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KADPCIOGMJP_FJOLPGBLBBH_OFFSET))(this);
	}
};
