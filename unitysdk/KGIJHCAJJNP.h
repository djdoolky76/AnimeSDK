#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KGIJHCAJJNP_BGJOEHIOGJB_OFFSET UNITYSDK_OFFSET(0x754920)
#define KGIJHCAJJNP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KGIJHCAJJNP_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KGIJHCAJJNP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KGIJHCAJJNP_INMMEDCKGBL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KGIJHCAJJNP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x174964E0)
#define KGIJHCAJJNP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KGIJHCAJJNP_TypeDefinitionIndex = 14317;

struct alignas(4) KGIJHCAJJNP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGIJHCAJJNP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGIJHCAJJNP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGIJHCAJJNP_FJPGCNGHHCC_OFFSET))(this);
	}

	::System::Int32 BGJOEHIOGJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGIJHCAJJNP_BGJOEHIOGJB_OFFSET))(this);
	}

	/*
	::KGIJHCAJJNP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KGIJHCAJJNP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGIJHCAJJNP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KGIJHCAJJNP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KGIJHCAJJNP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KGIJHCAJJNP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 INMMEDCKGBL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGIJHCAJJNP_INMMEDCKGBL_OFFSET))(this);
	}
};
