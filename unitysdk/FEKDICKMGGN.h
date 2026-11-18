#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FEKDICKMGGN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FEKDICKMGGN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FEKDICKMGGN_FEGKDNNEKLJ_OFFSET UNITYSDK_OFFSET(0x754920)
#define FEKDICKMGGN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FEKDICKMGGN_GJBINHLIGBH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define FEKDICKMGGN_IELKEGLHMOC_OFFSET UNITYSDK_OFFSET(0x788CF0)
#define FEKDICKMGGN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x187BBB60)
#define FEKDICKMGGN_OCHNLHPJJBC_OFFSET UNITYSDK_OFFSET(0x77A750)
#define FEKDICKMGGN_POLDCPDGBLM_OFFSET UNITYSDK_OFFSET(0x754F10)
#define FEKDICKMGGN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FEKDICKMGGN_TypeDefinitionIndex = 16757;

struct alignas(4) FEKDICKMGGN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKDICKMGGN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEKDICKMGGN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FEKDICKMGGN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FEKDICKMGGN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FEKDICKMGGN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::UInt64 OCHNLHPJJBC()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKDICKMGGN_OCHNLHPJJBC_OFFSET))(this);
	}

	::System::Int32 FEGKDNNEKLJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKDICKMGGN_FEGKDNNEKLJ_OFFSET))(this);
	}

	::System::UInt64 IELKEGLHMOC()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKDICKMGGN_IELKEGLHMOC_OFFSET))(this);
	}

	::System::Int32 GJBINHLIGBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKDICKMGGN_GJBINHLIGBH_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKDICKMGGN_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::FEKDICKMGGN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FEKDICKMGGN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEKDICKMGGN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* POLDCPDGBLM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKDICKMGGN_POLDCPDGBLM_OFFSET))(this);
	}
};
