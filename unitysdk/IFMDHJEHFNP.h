#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IFMDHJEHFNP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IFMDHJEHFNP_BNGGKPEGAOB_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define IFMDHJEHFNP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IFMDHJEHFNP_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IFMDHJEHFNP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17C1B630)
#define IFMDHJEHFNP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IFMDHJEHFNP_TypeDefinitionIndex = 14215;

struct alignas(4) IFMDHJEHFNP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMDHJEHFNP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFMDHJEHFNP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMDHJEHFNP_NFKFHJBEPGD_OFFSET))(this);
	}

	/*
	::IFMDHJEHFNP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IFMDHJEHFNP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFMDHJEHFNP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* BNGGKPEGAOB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMDHJEHFNP_BNGGKPEGAOB_OFFSET))(this);
	}

	/*
	static ::IFMDHJEHFNP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IFMDHJEHFNP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IFMDHJEHFNP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
