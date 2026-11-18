#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define INBGLNJFNMJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define INBGLNJFNMJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define INBGLNJFNMJ_CMIFCIEFDDA_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define INBGLNJFNMJ_CPALBCABGNN_OFFSET UNITYSDK_OFFSET(0x754C20)
#define INBGLNJFNMJ_DPCDIABPPEE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define INBGLNJFNMJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define INBGLNJFNMJ_KJHDPFGFLBJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define INBGLNJFNMJ_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x754920)
#define INBGLNJFNMJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int INBGLNJFNMJ_TypeDefinitionIndex = 13518;

struct alignas(4) INBGLNJFNMJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + INBGLNJFNMJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INBGLNJFNMJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CPALBCABGNN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INBGLNJFNMJ_CPALBCABGNN_OFFSET))(this);
	}

	::System::Int32 KJHDPFGFLBJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INBGLNJFNMJ_KJHDPFGFLBJ_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INBGLNJFNMJ_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INBGLNJFNMJ_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean CMIFCIEFDDA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + INBGLNJFNMJ_CMIFCIEFDDA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::INBGLNJFNMJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::INBGLNJFNMJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INBGLNJFNMJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DPCDIABPPEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INBGLNJFNMJ_DPCDIABPPEE_OFFSET))(this);
	}
};
