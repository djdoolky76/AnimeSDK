#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FDIIHAOLPOP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FDIIHAOLPOP_FIGNOOEDDNC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define FDIIHAOLPOP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FDIIHAOLPOP_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FDIIHAOLPOP_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define FDIIHAOLPOP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15A6FC80)
#define FDIIHAOLPOP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FDIIHAOLPOP_TypeDefinitionIndex = 11221;

struct alignas(4) FDIIHAOLPOP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIIHAOLPOP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDIIHAOLPOP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIIHAOLPOP_HKELPCLHLEC_OFFSET))(this);
	}

	/*
	static ::FDIIHAOLPOP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FDIIHAOLPOP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FDIIHAOLPOP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIIHAOLPOP_GKBAJJACIEA_OFFSET))(this);
	}

	/*
	::FDIIHAOLPOP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FDIIHAOLPOP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDIIHAOLPOP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FIGNOOEDDNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIIHAOLPOP_FIGNOOEDDNC_OFFSET))(this);
	}
};
