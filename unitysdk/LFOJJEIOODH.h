#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define LFOJJEIOODH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LFOJJEIOODH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LFOJJEIOODH_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LFOJJEIOODH_HAKOCLOIMJJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LFOJJEIOODH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1732DA10)
#define LFOJJEIOODH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LFOJJEIOODH_TypeDefinitionIndex = 13393;

struct alignas(4) LFOJJEIOODH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFOJJEIOODH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFOJJEIOODH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFOJJEIOODH_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 HAKOCLOIMJJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFOJJEIOODH_HAKOCLOIMJJ_OFFSET))(this);
	}

	/*
	static ::LFOJJEIOODH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LFOJJEIOODH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LFOJJEIOODH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::LFOJJEIOODH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LFOJJEIOODH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFOJJEIOODH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
