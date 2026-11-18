#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HNKAJOAEKKL_BELMIKIMNBG_OFFSET UNITYSDK_OFFSET(0x755A00)
#define HNKAJOAEKKL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HNKAJOAEKKL_CABAEDNMIAL_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define HNKAJOAEKKL_DIDMBFLIJFM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HNKAJOAEKKL_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HNKAJOAEKKL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HNKAJOAEKKL_JGHPPIFOLGP_OFFSET UNITYSDK_OFFSET(0x756B10)
#define HNKAJOAEKKL_LALMOHBAJEL_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define HNKAJOAEKKL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HNKAJOAEKKL_TypeDefinitionIndex = 12834;

struct alignas(4) HNKAJOAEKKL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKAJOAEKKL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNKAJOAEKKL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LALMOHBAJEL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HNKAJOAEKKL_LALMOHBAJEL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* JGHPPIFOLGP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKAJOAEKKL_JGHPPIFOLGP_OFFSET))(this);
	}

	::System::Int32 DIDMBFLIJFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKAJOAEKKL_DIDMBFLIJFM_OFFSET))(this);
	}

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKAJOAEKKL_FJPGCNGHHCC_OFFSET))(this);
	}

	::System::Int32 CABAEDNMIAL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKAJOAEKKL_CABAEDNMIAL_OFFSET))(this);
	}

	::System::String* BELMIKIMNBG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKAJOAEKKL_BELMIKIMNBG_OFFSET))(this);
	}

	/*
	::HNKAJOAEKKL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNKAJOAEKKL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNKAJOAEKKL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
