#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AFIJGPIILFF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AFIJGPIILFF_CHGNDIPLEKH_OFFSET UNITYSDK_OFFSET(0x755D20)
#define AFIJGPIILFF_CKNPOJGOILK_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define AFIJGPIILFF_DJMMOACFEIE_OFFSET UNITYSDK_OFFSET(0x756D50)
#define AFIJGPIILFF_FJOBONCEHJN_OFFSET UNITYSDK_OFFSET(0x756B10)
#define AFIJGPIILFF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AFIJGPIILFF_MPJCEMDONLH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AFIJGPIILFF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19AB9980)
#define AFIJGPIILFF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AFIJGPIILFF_TypeDefinitionIndex = 17778;

struct alignas(4) AFIJGPIILFF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFIJGPIILFF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AFIJGPIILFF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AFIJGPIILFF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AFIJGPIILFF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AFIJGPIILFF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* DJMMOACFEIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFIJGPIILFF_DJMMOACFEIE_OFFSET))(this);
	}

	::System::String* FJOBONCEHJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFIJGPIILFF_FJOBONCEHJN_OFFSET))(this);
	}

	::System::String* CKNPOJGOILK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFIJGPIILFF_CKNPOJGOILK_OFFSET))(this);
	}

	::System::Int32 CHGNDIPLEKH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFIJGPIILFF_CHGNDIPLEKH_OFFSET))(this);
	}

	/*
	::AFIJGPIILFF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AFIJGPIILFF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AFIJGPIILFF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MPJCEMDONLH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFIJGPIILFF_MPJCEMDONLH_OFFSET))(this);
	}
};
