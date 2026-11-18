#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LCKNJEIAIPH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LCKNJEIAIPH_CCANKPOGMJD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LCKNJEIAIPH_FCPGPFEHCJH_OFFSET UNITYSDK_OFFSET(0x754970)
#define LCKNJEIAIPH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LCKNJEIAIPH_IPBDBKFKJPA_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LCKNJEIAIPH_NFDDMGBFGNI_OFFSET UNITYSDK_OFFSET(0x755C70)
#define LCKNJEIAIPH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5FFE00)
#define LCKNJEIAIPH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LCKNJEIAIPH_TypeDefinitionIndex = 11979;

struct alignas(4) LCKNJEIAIPH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKNJEIAIPH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCKNJEIAIPH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CCANKPOGMJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKNJEIAIPH_CCANKPOGMJD_OFFSET))(this);
	}

	::System::Int32 FCPGPFEHCJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKNJEIAIPH_FCPGPFEHCJH_OFFSET))(this);
	}

	::System::String* IPBDBKFKJPA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKNJEIAIPH_IPBDBKFKJPA_OFFSET))(this);
	}

	/*
	static ::LCKNJEIAIPH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LCKNJEIAIPH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LCKNJEIAIPH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::LCKNJEIAIPH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCKNJEIAIPH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCKNJEIAIPH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NFDDMGBFGNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKNJEIAIPH_NFDDMGBFGNI_OFFSET))(this);
	}
};
