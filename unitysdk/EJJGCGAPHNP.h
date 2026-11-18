#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EJJGCGAPHNP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EJJGCGAPHNP_CCANKPOGMJD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EJJGCGAPHNP_CLBMJNELPFE_OFFSET UNITYSDK_OFFSET(0x755A00)
#define EJJGCGAPHNP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EJJGCGAPHNP_IPBDBKFKJPA_OFFSET UNITYSDK_OFFSET(0x754F10)
#define EJJGCGAPHNP_KAGKCHKGKBN_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define EJJGCGAPHNP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A566490)
#define EJJGCGAPHNP_OIFLHFJCAIN_OFFSET UNITYSDK_OFFSET(0x76F6C0)
#define EJJGCGAPHNP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EJJGCGAPHNP_TypeDefinitionIndex = 16603;

struct alignas(4) EJJGCGAPHNP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJGCGAPHNP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJJGCGAPHNP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean OIFLHFJCAIN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJGCGAPHNP_OIFLHFJCAIN_OFFSET))(this);
	}

	::System::String* IPBDBKFKJPA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJGCGAPHNP_IPBDBKFKJPA_OFFSET))(this);
	}

	::System::Int32 CCANKPOGMJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJGCGAPHNP_CCANKPOGMJD_OFFSET))(this);
	}

	::System::String* CLBMJNELPFE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJGCGAPHNP_CLBMJNELPFE_OFFSET))(this);
	}

	::System::String* KAGKCHKGKBN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJGCGAPHNP_KAGKCHKGKBN_OFFSET))(this);
	}

	/*
	::EJJGCGAPHNP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EJJGCGAPHNP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJJGCGAPHNP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EJJGCGAPHNP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EJJGCGAPHNP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EJJGCGAPHNP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
