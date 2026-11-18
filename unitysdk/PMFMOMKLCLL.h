#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PMFMOMKLCLL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PMFMOMKLCLL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PMFMOMKLCLL_ELLCMINOLFE_OFFSET UNITYSDK_OFFSET(0x754920)
#define PMFMOMKLCLL_FCGPEBICFBB_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define PMFMOMKLCLL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PMFMOMKLCLL_JENCFBLNJBL_OFFSET UNITYSDK_OFFSET(0x754F10)
#define PMFMOMKLCLL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17FEEA30)
#define PMFMOMKLCLL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PMFMOMKLCLL_TypeDefinitionIndex = 15567;

struct alignas(4) PMFMOMKLCLL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFMOMKLCLL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMFMOMKLCLL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ELLCMINOLFE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFMOMKLCLL_ELLCMINOLFE_OFFSET))(this);
	}

	/*
	static ::PMFMOMKLCLL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PMFMOMKLCLL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PMFMOMKLCLL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* FCGPEBICFBB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFMOMKLCLL_FCGPEBICFBB_OFFSET))(this);
	}

	/*
	::PMFMOMKLCLL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PMFMOMKLCLL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMFMOMKLCLL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFMOMKLCLL_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* JENCFBLNJBL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFMOMKLCLL_JENCFBLNJBL_OFFSET))(this);
	}
};
