#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define NIBHNCMCLJM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NIBHNCMCLJM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NIBHNCMCLJM_GCJFBPHNKGF_OFFSET UNITYSDK_OFFSET(0x755C70)
#define NIBHNCMCLJM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NIBHNCMCLJM_GFJLPOCNHAL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NIBHNCMCLJM_IHAKKELHLJO_OFFSET UNITYSDK_OFFSET(0x756B90)
#define NIBHNCMCLJM_KJICKOGJDNF_OFFSET UNITYSDK_OFFSET(0x754920)
#define NIBHNCMCLJM_LCKNAHFCNDJ_OFFSET UNITYSDK_OFFSET(0x754970)
#define NIBHNCMCLJM_MEAOADNEJCB_OFFSET UNITYSDK_OFFSET(0x755D20)
#define NIBHNCMCLJM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C18E870)
#define NIBHNCMCLJM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NIBHNCMCLJM_TypeDefinitionIndex = 11229;

struct alignas(4) NIBHNCMCLJM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBHNCMCLJM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NIBHNCMCLJM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GFJLPOCNHAL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBHNCMCLJM_GFJLPOCNHAL_OFFSET))(this);
	}

	::System::Int32 LCKNAHFCNDJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBHNCMCLJM_LCKNAHFCNDJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBHNCMCLJM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 GCJFBPHNKGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBHNCMCLJM_GCJFBPHNKGF_OFFSET))(this);
	}

	/*
	::NIBHNCMCLJM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NIBHNCMCLJM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NIBHNCMCLJM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 KJICKOGJDNF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBHNCMCLJM_KJICKOGJDNF_OFFSET))(this);
	}

	::System::Int32 MEAOADNEJCB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBHNCMCLJM_MEAOADNEJCB_OFFSET))(this);
	}

	::System::Int32 IHAKKELHLJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBHNCMCLJM_IHAKKELHLJO_OFFSET))(this);
	}

	/*
	static ::NIBHNCMCLJM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NIBHNCMCLJM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NIBHNCMCLJM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
