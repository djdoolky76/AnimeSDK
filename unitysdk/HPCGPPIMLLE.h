#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define HPCGPPIMLLE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HPCGPPIMLLE_FPCEIHMHFDE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define HPCGPPIMLLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HPCGPPIMLLE_JAFMFPCIGGJ_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define HPCGPPIMLLE_JCJKPFIEABE_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define HPCGPPIMLLE_LBDEAJHOCHE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HPCGPPIMLLE_NOKNGIEGNKK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HPCGPPIMLLE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A4F4320)
#define HPCGPPIMLLE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HPCGPPIMLLE_TypeDefinitionIndex = 14023;

struct alignas(4) HPCGPPIMLLE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCGPPIMLLE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPCGPPIMLLE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FPCEIHMHFDE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCGPPIMLLE_FPCEIHMHFDE_OFFSET))(this);
	}

	::System::Int32 LBDEAJHOCHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCGPPIMLLE_LBDEAJHOCHE_OFFSET))(this);
	}

	::System::Boolean JAFMFPCIGGJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HPCGPPIMLLE_JAFMFPCIGGJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::HPCGPPIMLLE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HPCGPPIMLLE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPCGPPIMLLE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NOKNGIEGNKK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCGPPIMLLE_NOKNGIEGNKK_OFFSET))(this);
	}

	/*
	static ::HPCGPPIMLLE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HPCGPPIMLLE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HPCGPPIMLLE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 JCJKPFIEABE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCGPPIMLLE_JCJKPFIEABE_OFFSET))(this);
	}
};
