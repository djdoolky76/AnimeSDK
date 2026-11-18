#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LHEAIILJOJD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LHEAIILJOJD_APGNHGAEOLK_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define LHEAIILJOJD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LHEAIILJOJD_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define LHEAIILJOJD_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LHEAIILJOJD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LHEAIILJOJD_GPLGGDOFBPP_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define LHEAIILJOJD_LDMILGMAPKP_OFFSET UNITYSDK_OFFSET(0x755790)
#define LHEAIILJOJD_MDACJMMNOBF_OFFSET UNITYSDK_OFFSET(0x756360)
#define LHEAIILJOJD_NELHIHIBGIM_OFFSET UNITYSDK_OFFSET(0x754C20)
#define LHEAIILJOJD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1732E170)
#define LHEAIILJOJD_PPIIAHOPHCI_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define LHEAIILJOJD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LHEAIILJOJD_TypeDefinitionIndex = 9329;

struct alignas(4) LHEAIILJOJD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEAIILJOJD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHEAIILJOJD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEAIILJOJD_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean APGNHGAEOLK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LHEAIILJOJD_APGNHGAEOLK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean PPIIAHOPHCI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LHEAIILJOJD_PPIIAHOPHCI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NELHIHIBGIM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEAIILJOJD_NELHIHIBGIM_OFFSET))(this);
	}

	/*
	static ::LHEAIILJOJD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LHEAIILJOJD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LHEAIILJOJD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GPLGGDOFBPP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEAIILJOJD_GPLGGDOFBPP_OFFSET))(this);
	}

	::System::Boolean MDACJMMNOBF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LHEAIILJOJD_MDACJMMNOBF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 LDMILGMAPKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEAIILJOJD_LDMILGMAPKP_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEAIILJOJD_ENJENAJGHFI_OFFSET))(this);
	}

	/*
	::LHEAIILJOJD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LHEAIILJOJD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHEAIILJOJD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEAIILJOJD_DECMGICKDLH_OFFSET))(this);
	}
};
