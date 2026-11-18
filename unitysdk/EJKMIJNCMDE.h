#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EJKMIJNCMDE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EJKMIJNCMDE_GDODEOOCOGO_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define EJKMIJNCMDE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EJKMIJNCMDE_IMNLKLGBBCD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EJKMIJNCMDE_KAEGAJDBFMF_OFFSET UNITYSDK_OFFSET(0x756220)
#define EJKMIJNCMDE_MKOCBNAMLDF_OFFSET UNITYSDK_OFFSET(0x756570)
#define EJKMIJNCMDE_MMOFNJJPBDP_OFFSET UNITYSDK_OFFSET(0x756360)
#define EJKMIJNCMDE_NNKIGGDEIPM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EJKMIJNCMDE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19C113A0)
#define EJKMIJNCMDE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EJKMIJNCMDE_TypeDefinitionIndex = 16345;

struct alignas(4) EJKMIJNCMDE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKMIJNCMDE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJKMIJNCMDE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean MKOCBNAMLDF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EJKMIJNCMDE_MKOCBNAMLDF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GDODEOOCOGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKMIJNCMDE_GDODEOOCOGO_OFFSET))(this);
	}

	::System::Boolean MMOFNJJPBDP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EJKMIJNCMDE_MMOFNJJPBDP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EJKMIJNCMDE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EJKMIJNCMDE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EJKMIJNCMDE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::EJKMIJNCMDE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EJKMIJNCMDE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJKMIJNCMDE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IMNLKLGBBCD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKMIJNCMDE_IMNLKLGBBCD_OFFSET))(this);
	}

	::System::Int32 NNKIGGDEIPM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKMIJNCMDE_NNKIGGDEIPM_OFFSET))(this);
	}

	::System::Int32 KAEGAJDBFMF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKMIJNCMDE_KAEGAJDBFMF_OFFSET))(this);
	}
};
