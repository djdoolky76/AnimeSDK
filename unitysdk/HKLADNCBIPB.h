#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OMENMNEOEMM.h"

namespace FlatBuffers { class ByteBuffer; }

#define HKLADNCBIPB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HKLADNCBIPB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HKLADNCBIPB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HKLADNCBIPB_MNMJBDNNLFL_OFFSET UNITYSDK_OFFSET(0x80F200)
#define HKLADNCBIPB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B613A70)
#define HKLADNCBIPB_PGELGJJCLHE_OFFSET UNITYSDK_OFFSET(0x754C20)
#define HKLADNCBIPB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HKLADNCBIPB_TypeDefinitionIndex = 9908;

struct alignas(4) HKLADNCBIPB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLADNCBIPB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKLADNCBIPB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HKLADNCBIPB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HKLADNCBIPB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HKLADNCBIPB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::HKLADNCBIPB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKLADNCBIPB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKLADNCBIPB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLADNCBIPB_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean MNMJBDNNLFL(::System::Int32 HPMEONKHFGG, ::OMENMNEOEMM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OMENMNEOEMM&))((::PBYTE)hIl2Cpp + HKLADNCBIPB_MNMJBDNNLFL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PGELGJJCLHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLADNCBIPB_PGELGJJCLHE_OFFSET))(this);
	}
};
