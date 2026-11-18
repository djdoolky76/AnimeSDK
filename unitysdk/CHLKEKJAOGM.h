#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define CHLKEKJAOGM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CHLKEKJAOGM_BBBMANAGDCO_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CHLKEKJAOGM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CHLKEKJAOGM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CHLKEKJAOGM_GKBCGPBAGCL_OFFSET UNITYSDK_OFFSET(0x754920)
#define CHLKEKJAOGM_GNHFIHOHHBA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CHLKEKJAOGM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19ACD050)
#define CHLKEKJAOGM_POMGKNNDMAH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define CHLKEKJAOGM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CHLKEKJAOGM_TypeDefinitionIndex = 14676;

struct alignas(4) CHLKEKJAOGM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLKEKJAOGM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CHLKEKJAOGM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BBBMANAGDCO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLKEKJAOGM_BBBMANAGDCO_OFFSET))(this);
	}

	/*
	static ::CHLKEKJAOGM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CHLKEKJAOGM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CHLKEKJAOGM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GNHFIHOHHBA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLKEKJAOGM_GNHFIHOHHBA_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLKEKJAOGM_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::CHLKEKJAOGM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CHLKEKJAOGM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CHLKEKJAOGM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 POMGKNNDMAH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLKEKJAOGM_POMGKNNDMAH_OFFSET))(this);
	}

	::System::Int32 GKBCGPBAGCL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLKEKJAOGM_GKBCGPBAGCL_OFFSET))(this);
	}
};
