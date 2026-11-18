#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGPDLGFBBIM.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define GHELKBEMMLP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GHELKBEMMLP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GHELKBEMMLP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GHELKBEMMLP_NMIEHCDKGHF_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define GHELKBEMMLP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x152CDC00)
#define GHELKBEMMLP_OAOFKOCHKLJ_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define GHELKBEMMLP_OJFHNDJPMEF_OFFSET UNITYSDK_OFFSET(0x7569E0)
#define GHELKBEMMLP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GHELKBEMMLP_TypeDefinitionIndex = 13567;

struct alignas(4) GHELKBEMMLP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHELKBEMMLP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHELKBEMMLP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHELKBEMMLP_ACOEONABOJL_OFFSET))(this);
	}

	::DGPDLGFBBIM OJFHNDJPMEF()
	{
		return ((::DGPDLGFBBIM(*)(::PVOID))((::PBYTE)hIl2Cpp + GHELKBEMMLP_OJFHNDJPMEF_OFFSET))(this);
	}

	::System::Int32 OAOFKOCHKLJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHELKBEMMLP_OAOFKOCHKLJ_OFFSET))(this);
	}

	::System::Boolean NMIEHCDKGHF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GHELKBEMMLP_NMIEHCDKGHF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GHELKBEMMLP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GHELKBEMMLP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GHELKBEMMLP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::GHELKBEMMLP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GHELKBEMMLP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHELKBEMMLP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
