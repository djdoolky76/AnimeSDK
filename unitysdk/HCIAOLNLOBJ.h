#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HCIAOLNLOBJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HCIAOLNLOBJ_FDAKHKPPILP_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HCIAOLNLOBJ_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HCIAOLNLOBJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HCIAOLNLOBJ_JFLNBJIALHD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HCIAOLNLOBJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1746D300)
#define HCIAOLNLOBJ_ODKLDGDHHGP_OFFSET UNITYSDK_OFFSET(0x755A00)
#define HCIAOLNLOBJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HCIAOLNLOBJ_TypeDefinitionIndex = 13119;

struct alignas(4) HCIAOLNLOBJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIAOLNLOBJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCIAOLNLOBJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* ODKLDGDHHGP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIAOLNLOBJ_ODKLDGDHHGP_OFFSET))(this);
	}

	/*
	static ::HCIAOLNLOBJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HCIAOLNLOBJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HCIAOLNLOBJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIAOLNLOBJ_FJPGCNGHHCC_OFFSET))(this);
	}

	/*
	::HCIAOLNLOBJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCIAOLNLOBJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCIAOLNLOBJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FDAKHKPPILP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIAOLNLOBJ_FDAKHKPPILP_OFFSET))(this);
	}

	::System::Int32 JFLNBJIALHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIAOLNLOBJ_JFLNBJIALHD_OFFSET))(this);
	}
};
