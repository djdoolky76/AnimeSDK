#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FJGMGCJHGPJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FJGMGCJHGPJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FJGMGCJHGPJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FJGMGCJHGPJ_LFJEJADGAIK_OFFSET UNITYSDK_OFFSET(0x754F10)
#define FJGMGCJHGPJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18B9A520)
#define FJGMGCJHGPJ_POBEKOPOPBI_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define FJGMGCJHGPJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FJGMGCJHGPJ_TypeDefinitionIndex = 16687;

struct alignas(4) FJGMGCJHGPJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGMGCJHGPJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJGMGCJHGPJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* LFJEJADGAIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGMGCJHGPJ_LFJEJADGAIK_OFFSET))(this);
	}

	::System::String* POBEKOPOPBI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGMGCJHGPJ_POBEKOPOPBI_OFFSET))(this);
	}

	/*
	static ::FJGMGCJHGPJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FJGMGCJHGPJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FJGMGCJHGPJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGMGCJHGPJ_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::FJGMGCJHGPJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FJGMGCJHGPJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJGMGCJHGPJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
