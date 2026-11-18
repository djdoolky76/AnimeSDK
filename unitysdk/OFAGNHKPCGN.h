#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OFAGNHKPCGN_AEBPHFKJCNO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OFAGNHKPCGN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OFAGNHKPCGN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OFAGNHKPCGN_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define OFAGNHKPCGN_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define OFAGNHKPCGN_MNBGAIEPADE_OFFSET UNITYSDK_OFFSET(0x754F10)
#define OFAGNHKPCGN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1CFF8AA0)
#define OFAGNHKPCGN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OFAGNHKPCGN_TypeDefinitionIndex = 17642;

struct alignas(4) OFAGNHKPCGN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAGNHKPCGN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFAGNHKPCGN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAGNHKPCGN_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAGNHKPCGN_HKELPCLHLEC_OFFSET))(this);
	}

	/*
	::OFAGNHKPCGN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OFAGNHKPCGN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFAGNHKPCGN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* MNBGAIEPADE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAGNHKPCGN_MNBGAIEPADE_OFFSET))(this);
	}

	::System::Int32 AEBPHFKJCNO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAGNHKPCGN_AEBPHFKJCNO_OFFSET))(this);
	}

	/*
	static ::OFAGNHKPCGN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OFAGNHKPCGN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OFAGNHKPCGN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
