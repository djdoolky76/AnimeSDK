#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DANOECEANMM_AJCHGIGJAOM_OFFSET UNITYSDK_OFFSET(0x755890)
#define DANOECEANMM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DANOECEANMM_CBPLHHFKOKP_OFFSET UNITYSDK_OFFSET(0x755710)
#define DANOECEANMM_CGEOCGOBLIP_OFFSET UNITYSDK_OFFSET(0x755190)
#define DANOECEANMM_CIKGGPBDAFN_OFFSET UNITYSDK_OFFSET(0x755A00)
#define DANOECEANMM_DLKPKBNLAOB_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define DANOECEANMM_FJALCCKGFCH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DANOECEANMM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DANOECEANMM_LPGBKKLKMJL_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DANOECEANMM_NMFIEPNHMDJ_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define DANOECEANMM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19BFED10)
#define DANOECEANMM_PLNBBDEBIII_OFFSET UNITYSDK_OFFSET(0x755320)
#define DANOECEANMM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DANOECEANMM_TypeDefinitionIndex = 12716;

struct alignas(4) DANOECEANMM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DANOECEANMM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DANOECEANMM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DLKPKBNLAOB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DANOECEANMM_DLKPKBNLAOB_OFFSET))(this);
	}

	::System::Int32 CGEOCGOBLIP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DANOECEANMM_CGEOCGOBLIP_OFFSET))(this);
	}

	::System::Int32 FJALCCKGFCH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DANOECEANMM_FJALCCKGFCH_OFFSET))(this);
	}

	::System::Int32 AJCHGIGJAOM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DANOECEANMM_AJCHGIGJAOM_OFFSET))(this);
	}

	::System::String* CBPLHHFKOKP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DANOECEANMM_CBPLHHFKOKP_OFFSET))(this);
	}

	::System::Int32 NMFIEPNHMDJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DANOECEANMM_NMFIEPNHMDJ_OFFSET))(this);
	}

	::System::String* CIKGGPBDAFN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DANOECEANMM_CIKGGPBDAFN_OFFSET))(this);
	}

	::System::Int32 LPGBKKLKMJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DANOECEANMM_LPGBKKLKMJL_OFFSET))(this);
	}

	/*
	static ::DANOECEANMM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DANOECEANMM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DANOECEANMM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 PLNBBDEBIII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DANOECEANMM_PLNBBDEBIII_OFFSET))(this);
	}

	/*
	::DANOECEANMM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DANOECEANMM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DANOECEANMM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
