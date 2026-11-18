#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OHMJJNECAEE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OHMJJNECAEE_BIOGBGBMGCF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OHMJJNECAEE_CACAMGIIEFC_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define OHMJJNECAEE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OHMJJNECAEE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17FE0980)
#define OHMJJNECAEE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OHMJJNECAEE_TypeDefinitionIndex = 13486;

struct alignas(4) OHMJJNECAEE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMJJNECAEE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHMJJNECAEE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* CACAMGIIEFC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMJJNECAEE_CACAMGIIEFC_OFFSET))(this);
	}

	/*
	::OHMJJNECAEE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OHMJJNECAEE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHMJJNECAEE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BIOGBGBMGCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMJJNECAEE_BIOGBGBMGCF_OFFSET))(this);
	}

	/*
	static ::OHMJJNECAEE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OHMJJNECAEE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OHMJJNECAEE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
