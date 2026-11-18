#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FDACPCOCLEL_BDLDDEKIBOE_OFFSET UNITYSDK_OFFSET(0x755A00)
#define FDACPCOCLEL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FDACPCOCLEL_EHFELDEPJAO_OFFSET UNITYSDK_OFFSET(0x754F10)
#define FDACPCOCLEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FDACPCOCLEL_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FDACPCOCLEL_GODCEMFDICH_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define FDACPCOCLEL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FDACPCOCLEL_TypeDefinitionIndex = 11047;

struct alignas(4) FDACPCOCLEL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDACPCOCLEL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDACPCOCLEL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDACPCOCLEL_GKBAJJACIEA_OFFSET))(this);
	}

	::System::String* GODCEMFDICH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDACPCOCLEL_GODCEMFDICH_OFFSET))(this);
	}

	::System::String* BDLDDEKIBOE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDACPCOCLEL_BDLDDEKIBOE_OFFSET))(this);
	}

	/*
	::FDACPCOCLEL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FDACPCOCLEL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDACPCOCLEL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* EHFELDEPJAO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDACPCOCLEL_EHFELDEPJAO_OFFSET))(this);
	}
};
