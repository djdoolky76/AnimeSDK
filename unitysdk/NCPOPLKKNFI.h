#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NCPOPLKKNFI_ACPLPHAAPBA_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NCPOPLKKNFI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NCPOPLKKNFI_DEEAPACLKDJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define NCPOPLKKNFI_FKHBKOIJCKO_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NCPOPLKKNFI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NCPOPLKKNFI_HACPINNGGDM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NCPOPLKKNFI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1CFE72E0)
#define NCPOPLKKNFI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NCPOPLKKNFI_TypeDefinitionIndex = 9798;

struct alignas(4) NCPOPLKKNFI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPOPLKKNFI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCPOPLKKNFI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DEEAPACLKDJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPOPLKKNFI_DEEAPACLKDJ_OFFSET))(this);
	}

	::System::Int32 HACPINNGGDM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPOPLKKNFI_HACPINNGGDM_OFFSET))(this);
	}

	::System::String* ACPLPHAAPBA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPOPLKKNFI_ACPLPHAAPBA_OFFSET))(this);
	}

	/*
	::NCPOPLKKNFI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NCPOPLKKNFI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCPOPLKKNFI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* FKHBKOIJCKO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPOPLKKNFI_FKHBKOIJCKO_OFFSET))(this);
	}

	/*
	static ::NCPOPLKKNFI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NCPOPLKKNFI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NCPOPLKKNFI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
