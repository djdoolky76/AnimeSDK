#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PJNOBFGDEAP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PJNOBFGDEAP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PJNOBFGDEAP_DCIBIHEAGIG_OFFSET UNITYSDK_OFFSET(0x754A70)
#define PJNOBFGDEAP_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define PJNOBFGDEAP_FBILKHJLFMA_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define PJNOBFGDEAP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PJNOBFGDEAP_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define PJNOBFGDEAP_JEGFPKCODCL_OFFSET UNITYSDK_OFFSET(0x755190)
#define PJNOBFGDEAP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1CD0DAC0)
#define PJNOBFGDEAP_OCMOJKNJBGE_OFFSET UNITYSDK_OFFSET(0x756360)
#define PJNOBFGDEAP_PMEPFMPBCDN_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define PJNOBFGDEAP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PJNOBFGDEAP_TypeDefinitionIndex = 17287;

struct alignas(4) PJNOBFGDEAP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNOBFGDEAP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJNOBFGDEAP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PJNOBFGDEAP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PJNOBFGDEAP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PJNOBFGDEAP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 JEGFPKCODCL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNOBFGDEAP_JEGFPKCODCL_OFFSET))(this);
	}

	::System::Boolean OCMOJKNJBGE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PJNOBFGDEAP_OCMOJKNJBGE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNOBFGDEAP_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNOBFGDEAP_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::PJNOBFGDEAP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PJNOBFGDEAP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJNOBFGDEAP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FBILKHJLFMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNOBFGDEAP_FBILKHJLFMA_OFFSET))(this);
	}

	::System::Int32 PMEPFMPBCDN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNOBFGDEAP_PMEPFMPBCDN_OFFSET))(this);
	}

	::System::Boolean DCIBIHEAGIG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PJNOBFGDEAP_DCIBIHEAGIG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNOBFGDEAP_DECMGICKDLH_OFFSET))(this);
	}
};
