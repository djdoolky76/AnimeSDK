#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define ANMJMFIFBJG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ANMJMFIFBJG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ANMJMFIFBJG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ANMJMFIFBJG_JMGABAOIFCA_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define ANMJMFIFBJG_MFFEDPDFJHF_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define ANMJMFIFBJG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19BDBE00)
#define ANMJMFIFBJG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ANMJMFIFBJG_TypeDefinitionIndex = 17300;

struct alignas(4) ANMJMFIFBJG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMJMFIFBJG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANMJMFIFBJG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::ANMJMFIFBJG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ANMJMFIFBJG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANMJMFIFBJG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMJMFIFBJG_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 MFFEDPDFJHF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMJMFIFBJG_MFFEDPDFJHF_OFFSET))(this);
	}

	::System::Boolean JMGABAOIFCA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + ANMJMFIFBJG_JMGABAOIFCA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ANMJMFIFBJG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ANMJMFIFBJG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ANMJMFIFBJG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
