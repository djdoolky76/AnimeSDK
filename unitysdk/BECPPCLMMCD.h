#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BECPPCLMMCD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BECPPCLMMCD_ENIKLHOGBMN_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define BECPPCLMMCD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BECPPCLMMCD_GNENEJHEBCF_OFFSET UNITYSDK_OFFSET(0x755A00)
#define BECPPCLMMCD_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BECPPCLMMCD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x194F8070)
#define BECPPCLMMCD_OELFFOGPLOF_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define BECPPCLMMCD_PHHIBCKONMD_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define BECPPCLMMCD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BECPPCLMMCD_TypeDefinitionIndex = 15762;

struct alignas(4) BECPPCLMMCD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BECPPCLMMCD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BECPPCLMMCD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean ENIKLHOGBMN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BECPPCLMMCD_ENIKLHOGBMN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 OELFFOGPLOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BECPPCLMMCD_OELFFOGPLOF_OFFSET))(this);
	}

	::System::String* PHHIBCKONMD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BECPPCLMMCD_PHHIBCKONMD_OFFSET))(this);
	}

	::System::String* GNENEJHEBCF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BECPPCLMMCD_GNENEJHEBCF_OFFSET))(this);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BECPPCLMMCD_MDLLGIMAGCP_OFFSET))(this);
	}

	/*
	::BECPPCLMMCD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BECPPCLMMCD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BECPPCLMMCD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BECPPCLMMCD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BECPPCLMMCD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BECPPCLMMCD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
