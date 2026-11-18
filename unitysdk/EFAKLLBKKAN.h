#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EFAKLLBKKAN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EFAKLLBKKAN_BJNDNNHPMMC_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define EFAKLLBKKAN_DEOOOIILOJP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EFAKLLBKKAN_FCFKOHBAOIK_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define EFAKLLBKKAN_GBLGGFKIPPA_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define EFAKLLBKKAN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EFAKLLBKKAN_MHJGDDBMBIB_OFFSET UNITYSDK_OFFSET(0x754920)
#define EFAKLLBKKAN_NCHOPPLAEBF_OFFSET UNITYSDK_OFFSET(0x754970)
#define EFAKLLBKKAN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A19B3B0)
#define EFAKLLBKKAN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EFAKLLBKKAN_TypeDefinitionIndex = 9829;

struct alignas(4) EFAKLLBKKAN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAKLLBKKAN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFAKLLBKKAN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EFAKLLBKKAN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EFAKLLBKKAN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EFAKLLBKKAN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::EFAKLLBKKAN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EFAKLLBKKAN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFAKLLBKKAN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* FCFKOHBAOIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAKLLBKKAN_FCFKOHBAOIK_OFFSET))(this);
	}

	::System::Int32 DEOOOIILOJP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAKLLBKKAN_DEOOOIILOJP_OFFSET))(this);
	}

	::System::String* BJNDNNHPMMC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAKLLBKKAN_BJNDNNHPMMC_OFFSET))(this);
	}

	::System::String* GBLGGFKIPPA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAKLLBKKAN_GBLGGFKIPPA_OFFSET))(this);
	}

	::System::Int32 MHJGDDBMBIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAKLLBKKAN_MHJGDDBMBIB_OFFSET))(this);
	}

	::System::Int32 NCHOPPLAEBF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAKLLBKKAN_NCHOPPLAEBF_OFFSET))(this);
	}
};
