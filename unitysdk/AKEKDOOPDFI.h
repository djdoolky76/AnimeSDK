#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AKEKDOOPDFI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AKEKDOOPDFI_CBMOIIBINCE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define AKEKDOOPDFI_CHIHIPJALDJ_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define AKEKDOOPDFI_ELHAHLLGOAH_OFFSET UNITYSDK_OFFSET(0x754D50)
#define AKEKDOOPDFI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AKEKDOOPDFI_GOALIHGGJKP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AKEKDOOPDFI_HFCCIPAPHGM_OFFSET UNITYSDK_OFFSET(0x758320)
#define AKEKDOOPDFI_IDGGOKLBIEC_OFFSET UNITYSDK_OFFSET(0x757190)
#define AKEKDOOPDFI_KNEAPFBANOH_OFFSET UNITYSDK_OFFSET(0x755C70)
#define AKEKDOOPDFI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17749840)
#define AKEKDOOPDFI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AKEKDOOPDFI_TypeDefinitionIndex = 16251;

struct alignas(4) AKEKDOOPDFI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEKDOOPDFI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKEKDOOPDFI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GOALIHGGJKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEKDOOPDFI_GOALIHGGJKP_OFFSET))(this);
	}

	::System::Int32 ELHAHLLGOAH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEKDOOPDFI_ELHAHLLGOAH_OFFSET))(this);
	}

	::System::String* IDGGOKLBIEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEKDOOPDFI_IDGGOKLBIEC_OFFSET))(this);
	}

	::System::Int32 CBMOIIBINCE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEKDOOPDFI_CBMOIIBINCE_OFFSET))(this);
	}

	/*
	::AKEKDOOPDFI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AKEKDOOPDFI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKEKDOOPDFI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 KNEAPFBANOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEKDOOPDFI_KNEAPFBANOH_OFFSET))(this);
	}

	/*
	static ::AKEKDOOPDFI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AKEKDOOPDFI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AKEKDOOPDFI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean CHIHIPJALDJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + AKEKDOOPDFI_CHIHIPJALDJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* HFCCIPAPHGM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEKDOOPDFI_HFCCIPAPHGM_OFFSET))(this);
	}
};
