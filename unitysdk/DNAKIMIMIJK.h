#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DNAKIMIMIJK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DNAKIMIMIJK_ENGHFFDDLCA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DNAKIMIMIJK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DNAKIMIMIJK_MFGOKBAHELE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DNAKIMIMIJK_MJLNDNHBCLK_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define DNAKIMIMIJK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x157595D0)
#define DNAKIMIMIJK_OAOGAIJCIGJ_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define DNAKIMIMIJK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DNAKIMIMIJK_TypeDefinitionIndex = 15304;

struct alignas(4) DNAKIMIMIJK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAKIMIMIJK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNAKIMIMIJK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MFGOKBAHELE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAKIMIMIJK_MFGOKBAHELE_OFFSET))(this);
	}

	::System::Boolean MJLNDNHBCLK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DNAKIMIMIJK_MJLNDNHBCLK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ENGHFFDDLCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAKIMIMIJK_ENGHFFDDLCA_OFFSET))(this);
	}

	::System::Int32 OAOGAIJCIGJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAKIMIMIJK_OAOGAIJCIGJ_OFFSET))(this);
	}

	/*
	static ::DNAKIMIMIJK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DNAKIMIMIJK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DNAKIMIMIJK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::DNAKIMIMIJK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DNAKIMIMIJK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNAKIMIMIJK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
