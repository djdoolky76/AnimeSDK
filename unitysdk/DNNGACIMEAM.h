#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DNNGACIMEAM_BAFPGMCLAGF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DNNGACIMEAM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DNNGACIMEAM_BNDNGDDMNHD_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DNNGACIMEAM_EFIHDHGNDBG_OFFSET UNITYSDK_OFFSET(0x788DB0)
#define DNNGACIMEAM_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x755A00)
#define DNNGACIMEAM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DNNGACIMEAM_HLEDCNJDCMK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DNNGACIMEAM_IOABDGIECFO_OFFSET UNITYSDK_OFFSET(0x756220)
#define DNNGACIMEAM_IPAKIMCGDAH_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define DNNGACIMEAM_JMCOBIDKEKB_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define DNNGACIMEAM_KJOJGMEEHBL_OFFSET UNITYSDK_OFFSET(0x756D50)
#define DNNGACIMEAM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1661E8C0)
#define DNNGACIMEAM_PJHPKMMFNFK_OFFSET UNITYSDK_OFFSET(0x757290)
#define DNNGACIMEAM_PJLACFJLAND_OFFSET UNITYSDK_OFFSET(0x756B10)
#define DNNGACIMEAM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DNNGACIMEAM_TypeDefinitionIndex = 14666;

struct alignas(4) DNNGACIMEAM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNGACIMEAM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNNGACIMEAM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BNDNGDDMNHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNGACIMEAM_BNDNGDDMNHD_OFFSET))(this);
	}

	::System::String* JMCOBIDKEKB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNGACIMEAM_JMCOBIDKEKB_OFFSET))(this);
	}

	::System::Int32 BAFPGMCLAGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNGACIMEAM_BAFPGMCLAGF_OFFSET))(this);
	}

	::System::Boolean EFIHDHGNDBG(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + DNNGACIMEAM_EFIHDHGNDBG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DNNGACIMEAM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DNNGACIMEAM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DNNGACIMEAM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::DNNGACIMEAM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DNNGACIMEAM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNNGACIMEAM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HLEDCNJDCMK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNGACIMEAM_HLEDCNJDCMK_OFFSET))(this);
	}

	::System::String* IPAKIMCGDAH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNGACIMEAM_IPAKIMCGDAH_OFFSET))(this);
	}

	::System::Int32 IOABDGIECFO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNGACIMEAM_IOABDGIECFO_OFFSET))(this);
	}

	::System::String* PJHPKMMFNFK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNGACIMEAM_PJHPKMMFNFK_OFFSET))(this);
	}

	::System::String* PJLACFJLAND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNGACIMEAM_PJLACFJLAND_OFFSET))(this);
	}

	::System::String* KJOJGMEEHBL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNGACIMEAM_KJOJGMEEHBL_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNGACIMEAM_ENJENAJGHFI_OFFSET))(this);
	}
};
