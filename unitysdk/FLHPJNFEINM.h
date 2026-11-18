#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FLHPJNFEINM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FLHPJNFEINM_EHHFJFHDGOD_OFFSET UNITYSDK_OFFSET(0x754F10)
#define FLHPJNFEINM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FLHPJNFEINM_JCGKIBKMOGF_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define FLHPJNFEINM_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FLHPJNFEINM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B109B10)
#define FLHPJNFEINM_OEBELJGDNCE_OFFSET UNITYSDK_OFFSET(0x755A00)
#define FLHPJNFEINM_OFMCMOOJONC_OFFSET UNITYSDK_OFFSET(0x756B10)
#define FLHPJNFEINM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FLHPJNFEINM_TypeDefinitionIndex = 15974;

struct alignas(4) FLHPJNFEINM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHPJNFEINM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLHPJNFEINM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FLHPJNFEINM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FLHPJNFEINM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLHPJNFEINM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* JCGKIBKMOGF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHPJNFEINM_JCGKIBKMOGF_OFFSET))(this);
	}

	::System::String* OFMCMOOJONC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHPJNFEINM_OFMCMOOJONC_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHPJNFEINM_LPFMNKEFPMM_OFFSET))(this);
	}

	/*
	static ::FLHPJNFEINM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FLHPJNFEINM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FLHPJNFEINM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* OEBELJGDNCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHPJNFEINM_OEBELJGDNCE_OFFSET))(this);
	}

	::System::String* EHHFJFHDGOD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHPJNFEINM_EHHFJFHDGOD_OFFSET))(this);
	}
};
