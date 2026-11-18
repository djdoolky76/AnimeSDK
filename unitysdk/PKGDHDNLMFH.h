#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/OOCCOADDKFK.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define PKGDHDNLMFH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PKGDHDNLMFH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PKGDHDNLMFH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PKGDHDNLMFH_NMIEHCDKGHF_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define PKGDHDNLMFH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1D005D60)
#define PKGDHDNLMFH_OAOFKOCHKLJ_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define PKGDHDNLMFH_OJFHNDJPMEF_OFFSET UNITYSDK_OFFSET(0x7569E0)
#define PKGDHDNLMFH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PKGDHDNLMFH_TypeDefinitionIndex = 13212;

struct alignas(4) PKGDHDNLMFH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKGDHDNLMFH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PKGDHDNLMFH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 OAOFKOCHKLJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKGDHDNLMFH_OAOFKOCHKLJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKGDHDNLMFH_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::PKGDHDNLMFH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PKGDHDNLMFH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PKGDHDNLMFH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean NMIEHCDKGHF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PKGDHDNLMFH_NMIEHCDKGHF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PKGDHDNLMFH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PKGDHDNLMFH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PKGDHDNLMFH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::OOCCOADDKFK OJFHNDJPMEF()
	{
		return ((::OOCCOADDKFK(*)(::PVOID))((::PBYTE)hIl2Cpp + PKGDHDNLMFH_OJFHNDJPMEF_OFFSET))(this);
	}
};
