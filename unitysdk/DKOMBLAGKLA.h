#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DKOMBLAGKLA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DKOMBLAGKLA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DKOMBLAGKLA_DFMAFCBJIBG_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define DKOMBLAGKLA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DKOMBLAGKLA_LILIGFMIFIN_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define DKOMBLAGKLA_MENEFNNFOAD_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DKOMBLAGKLA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x177850D0)
#define DKOMBLAGKLA_OKGKFCDPCHE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DKOMBLAGKLA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DKOMBLAGKLA_TypeDefinitionIndex = 12665;

struct alignas(4) DKOMBLAGKLA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOMBLAGKLA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DKOMBLAGKLA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 OKGKFCDPCHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOMBLAGKLA_OKGKFCDPCHE_OFFSET))(this);
	}

	::System::Boolean DFMAFCBJIBG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DKOMBLAGKLA_DFMAFCBJIBG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 MENEFNNFOAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOMBLAGKLA_MENEFNNFOAD_OFFSET))(this);
	}

	::System::Int32 LILIGFMIFIN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOMBLAGKLA_LILIGFMIFIN_OFFSET))(this);
	}

	/*
	static ::DKOMBLAGKLA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DKOMBLAGKLA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DKOMBLAGKLA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::DKOMBLAGKLA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DKOMBLAGKLA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DKOMBLAGKLA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOMBLAGKLA_ACOEONABOJL_OFFSET))(this);
	}
};
