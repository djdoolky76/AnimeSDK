#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NOLEBCPEIFH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NOLEBCPEIFH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NOLEBCPEIFH_DAJGIANOENP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NOLEBCPEIFH_EHEDNGGDAKF_OFFSET UNITYSDK_OFFSET(0x754920)
#define NOLEBCPEIFH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NOLEBCPEIFH_JJBHCOFPGDJ_OFFSET UNITYSDK_OFFSET(0x756D50)
#define NOLEBCPEIFH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NOLEBCPEIFH_TypeDefinitionIndex = 12113;

struct alignas(4) NOLEBCPEIFH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLEBCPEIFH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NOLEBCPEIFH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NOLEBCPEIFH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NOLEBCPEIFH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NOLEBCPEIFH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DAJGIANOENP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLEBCPEIFH_DAJGIANOENP_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLEBCPEIFH_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* JJBHCOFPGDJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLEBCPEIFH_JJBHCOFPGDJ_OFFSET))(this);
	}

	::System::Int32 EHEDNGGDAKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLEBCPEIFH_EHEDNGGDAKF_OFFSET))(this);
	}
};
