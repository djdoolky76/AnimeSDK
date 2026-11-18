#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define GDPLHDHEFJM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GDPLHDHEFJM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GDPLHDHEFJM_DDAACCLKJOH_OFFSET UNITYSDK_OFFSET(0x754C20)
#define GDPLHDHEFJM_ENLFJCHLMHB_OFFSET UNITYSDK_OFFSET(0x755790)
#define GDPLHDHEFJM_FNLELCEGJON_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define GDPLHDHEFJM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GDPLHDHEFJM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x16644590)
#define GDPLHDHEFJM_OONIHHMKKEC_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define GDPLHDHEFJM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GDPLHDHEFJM_TypeDefinitionIndex = 12105;

struct alignas(4) GDPLHDHEFJM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPLHDHEFJM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDPLHDHEFJM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GDPLHDHEFJM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GDPLHDHEFJM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GDPLHDHEFJM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean FNLELCEGJON(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GDPLHDHEFJM_FNLELCEGJON_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean OONIHHMKKEC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GDPLHDHEFJM_OONIHHMKKEC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::GDPLHDHEFJM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDPLHDHEFJM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDPLHDHEFJM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPLHDHEFJM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 ENLFJCHLMHB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPLHDHEFJM_ENLFJCHLMHB_OFFSET))(this);
	}

	::System::Int32 DDAACCLKJOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPLHDHEFJM_DDAACCLKJOH_OFFSET))(this);
	}
};
