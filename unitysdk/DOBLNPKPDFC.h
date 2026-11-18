#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DOBLNPKPDFC_ABBHOPCGMHA_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define DOBLNPKPDFC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DOBLNPKPDFC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DOBLNPKPDFC_LMLPFBHKOIL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DOBLNPKPDFC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A595230)
#define DOBLNPKPDFC_PPOABMKKCBL_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define DOBLNPKPDFC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DOBLNPKPDFC_TypeDefinitionIndex = 16819;

struct alignas(4) DOBLNPKPDFC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBLNPKPDFC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOBLNPKPDFC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DOBLNPKPDFC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOBLNPKPDFC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOBLNPKPDFC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PPOABMKKCBL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBLNPKPDFC_PPOABMKKCBL_OFFSET))(this);
	}

	::System::Boolean ABBHOPCGMHA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DOBLNPKPDFC_ABBHOPCGMHA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DOBLNPKPDFC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DOBLNPKPDFC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DOBLNPKPDFC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LMLPFBHKOIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBLNPKPDFC_LMLPFBHKOIL_OFFSET))(this);
	}
};
