#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DBOEBEFKAKN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DBOEBEFKAKN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DBOEBEFKAKN_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DBOEBEFKAKN_IDPHGGPIHOL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DBOEBEFKAKN_KFCNHKPLGDG_OFFSET UNITYSDK_OFFSET(0x754F10)
#define DBOEBEFKAKN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x166155A0)
#define DBOEBEFKAKN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DBOEBEFKAKN_TypeDefinitionIndex = 16667;

struct alignas(4) DBOEBEFKAKN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOEBEFKAKN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DBOEBEFKAKN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DBOEBEFKAKN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DBOEBEFKAKN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DBOEBEFKAKN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DBOEBEFKAKN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DBOEBEFKAKN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DBOEBEFKAKN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 IDPHGGPIHOL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOEBEFKAKN_IDPHGGPIHOL_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOEBEFKAKN_GKBAJJACIEA_OFFSET))(this);
	}

	::System::String* KFCNHKPLGDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOEBEFKAKN_KFCNHKPLGDG_OFFSET))(this);
	}
};
