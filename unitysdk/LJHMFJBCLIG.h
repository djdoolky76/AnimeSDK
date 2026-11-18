#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define LJHMFJBCLIG_BADGBPHNIKM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LJHMFJBCLIG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LJHMFJBCLIG_EOAEPFKDIHA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LJHMFJBCLIG_FAJDPBJOANG_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LJHMFJBCLIG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LJHMFJBCLIG_LMLLAIJFGDH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LJHMFJBCLIG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x190FE770)
#define LJHMFJBCLIG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LJHMFJBCLIG_TypeDefinitionIndex = 11929;

struct alignas(4) LJHMFJBCLIG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHMFJBCLIG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJHMFJBCLIG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::LJHMFJBCLIG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LJHMFJBCLIG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJHMFJBCLIG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 EOAEPFKDIHA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHMFJBCLIG_EOAEPFKDIHA_OFFSET))(this);
	}

	::System::Int32 BADGBPHNIKM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHMFJBCLIG_BADGBPHNIKM_OFFSET))(this);
	}

	::System::Int32 LMLLAIJFGDH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHMFJBCLIG_LMLLAIJFGDH_OFFSET))(this);
	}

	/*
	static ::LJHMFJBCLIG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LJHMFJBCLIG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LJHMFJBCLIG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 FAJDPBJOANG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHMFJBCLIG_FAJDPBJOANG_OFFSET))(this);
	}
};
