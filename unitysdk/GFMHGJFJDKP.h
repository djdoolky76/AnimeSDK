#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GFMHGJFJDKP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GFMHGJFJDKP_ENIKLHOGBMN_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define GFMHGJFJDKP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GFMHGJFJDKP_GNENEJHEBCF_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define GFMHGJFJDKP_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GFMHGJFJDKP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B86D800)
#define GFMHGJFJDKP_OELFFOGPLOF_OFFSET UNITYSDK_OFFSET(0x754C20)
#define GFMHGJFJDKP_PHHIBCKONMD_OFFSET UNITYSDK_OFFSET(0x754F10)
#define GFMHGJFJDKP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GFMHGJFJDKP_TypeDefinitionIndex = 16243;

struct alignas(4) GFMHGJFJDKP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMHGJFJDKP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFMHGJFJDKP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMHGJFJDKP_MDLLGIMAGCP_OFFSET))(this);
	}

	::System::Boolean ENIKLHOGBMN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GFMHGJFJDKP_ENIKLHOGBMN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::GFMHGJFJDKP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GFMHGJFJDKP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFMHGJFJDKP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* PHHIBCKONMD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMHGJFJDKP_PHHIBCKONMD_OFFSET))(this);
	}

	::System::Int32 OELFFOGPLOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMHGJFJDKP_OELFFOGPLOF_OFFSET))(this);
	}

	::System::String* GNENEJHEBCF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMHGJFJDKP_GNENEJHEBCF_OFFSET))(this);
	}

	/*
	static ::GFMHGJFJDKP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GFMHGJFJDKP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GFMHGJFJDKP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
