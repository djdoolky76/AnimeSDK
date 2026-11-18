#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EGBOFPIEHBM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EGBOFPIEHBM_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x754920)
#define EGBOFPIEHBM_BFEBOLKNBGK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EGBOFPIEHBM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EGBOFPIEHBM_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define EGBOFPIEHBM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EGBOFPIEHBM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B9B5830)
#define EGBOFPIEHBM_PBODCBEDIDB_OFFSET UNITYSDK_OFFSET(0x755D20)
#define EGBOFPIEHBM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EGBOFPIEHBM_TypeDefinitionIndex = 9507;

struct alignas(4) EGBOFPIEHBM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGBOFPIEHBM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGBOFPIEHBM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGBOFPIEHBM_DGFAJDNHCIJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGBOFPIEHBM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 PBODCBEDIDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGBOFPIEHBM_PBODCBEDIDB_OFFSET))(this);
	}

	::System::Int32 BFEBOLKNBGK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGBOFPIEHBM_BFEBOLKNBGK_OFFSET))(this);
	}

	/*
	static ::EGBOFPIEHBM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EGBOFPIEHBM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EGBOFPIEHBM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGBOFPIEHBM_APCKPKCNFJE_OFFSET))(this);
	}

	/*
	::EGBOFPIEHBM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EGBOFPIEHBM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGBOFPIEHBM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
