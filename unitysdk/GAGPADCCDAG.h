#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GAGPADCCDAG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GAGPADCCDAG_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GAGPADCCDAG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GAGPADCCDAG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GAGPADCCDAG_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x758780)
#define GAGPADCCDAG_IIOBAJPHDMI_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define GAGPADCCDAG_INKGGPFILOH_OFFSET UNITYSDK_OFFSET(0x756D50)
#define GAGPADCCDAG_MFDLCOOJMGG_OFFSET UNITYSDK_OFFSET(0x755A00)
#define GAGPADCCDAG_PKINHJFGMOF_OFFSET UNITYSDK_OFFSET(0x756B10)
#define GAGPADCCDAG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GAGPADCCDAG_TypeDefinitionIndex = 14452;

struct alignas(4) GAGPADCCDAG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGPADCCDAG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GAGPADCCDAG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* IIOBAJPHDMI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGPADCCDAG_IIOBAJPHDMI_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGPADCCDAG_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGPADCCDAG_GKBAJJACIEA_OFFSET))(this);
	}

	::System::String* PKINHJFGMOF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGPADCCDAG_PKINHJFGMOF_OFFSET))(this);
	}

	/*
	::GAGPADCCDAG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GAGPADCCDAG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GAGPADCCDAG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* INKGGPFILOH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGPADCCDAG_INKGGPFILOH_OFFSET))(this);
	}

	::System::String* MFDLCOOJMGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGPADCCDAG_MFDLCOOJMGG_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGPADCCDAG_APCKPKCNFJE_OFFSET))(this);
	}
};
