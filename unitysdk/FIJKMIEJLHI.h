#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FIJKMIEJLHI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FIJKMIEJLHI_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FIJKMIEJLHI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FIJKMIEJLHI_LAJDAGCBFGI_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define FIJKMIEJLHI_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FIJKMIEJLHI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B9C4CC0)
#define FIJKMIEJLHI_PKGBKOBFNON_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define FIJKMIEJLHI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FIJKMIEJLHI_TypeDefinitionIndex = 11601;

struct alignas(4) FIJKMIEJLHI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJKMIEJLHI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FIJKMIEJLHI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean PKGBKOBFNON(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FIJKMIEJLHI_PKGBKOBFNON_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJKMIEJLHI_DNKLBHKEDEM_OFFSET))(this);
	}

	/*
	::FIJKMIEJLHI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FIJKMIEJLHI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FIJKMIEJLHI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LAJDAGCBFGI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJKMIEJLHI_LAJDAGCBFGI_OFFSET))(this);
	}

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJKMIEJLHI_NENDAECBCEM_OFFSET))(this);
	}

	/*
	static ::FIJKMIEJLHI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FIJKMIEJLHI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FIJKMIEJLHI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
