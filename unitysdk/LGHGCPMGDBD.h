#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LGHGCPMGDBD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LGHGCPMGDBD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LGHGCPMGDBD_FJGGDJHCFNB_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LGHGCPMGDBD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LGHGCPMGDBD_JHGCKDJFNJA_OFFSET UNITYSDK_OFFSET(0x754F10)
#define LGHGCPMGDBD_LNLNHEMFAEC_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LGHGCPMGDBD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LGHGCPMGDBD_TypeDefinitionIndex = 17630;

struct alignas(4) LGHGCPMGDBD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHGCPMGDBD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGHGCPMGDBD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FJGGDJHCFNB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHGCPMGDBD_FJGGDJHCFNB_OFFSET))(this);
	}

	/*
	::LGHGCPMGDBD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGHGCPMGDBD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGHGCPMGDBD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* JHGCKDJFNJA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHGCPMGDBD_JHGCKDJFNJA_OFFSET))(this);
	}

	::System::String* LNLNHEMFAEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHGCPMGDBD_LNLNHEMFAEC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHGCPMGDBD_ACOEONABOJL_OFFSET))(this);
	}
};
