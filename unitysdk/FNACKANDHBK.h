#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FNACKANDHBK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FNACKANDHBK_BBPGDMKHFFF_OFFSET UNITYSDK_OFFSET(0x754F10)
#define FNACKANDHBK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FNACKANDHBK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FNACKANDHBK_GKEKHIPEBBC_OFFSET UNITYSDK_OFFSET(0x754920)
#define FNACKANDHBK_JPNGINMDGPK_OFFSET UNITYSDK_OFFSET(0x754970)
#define FNACKANDHBK_LBFBBNGNBFF_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define FNACKANDHBK_LDONBFMFFPG_OFFSET UNITYSDK_OFFSET(0x755A00)
#define FNACKANDHBK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18B9CAB0)
#define FNACKANDHBK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FNACKANDHBK_TypeDefinitionIndex = 17507;

struct alignas(4) FNACKANDHBK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNACKANDHBK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNACKANDHBK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* LDONBFMFFPG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNACKANDHBK_LDONBFMFFPG_OFFSET))(this);
	}

	::System::String* BBPGDMKHFFF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNACKANDHBK_BBPGDMKHFFF_OFFSET))(this);
	}

	::System::String* LBFBBNGNBFF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNACKANDHBK_LBFBBNGNBFF_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNACKANDHBK_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 JPNGINMDGPK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNACKANDHBK_JPNGINMDGPK_OFFSET))(this);
	}

	/*
	static ::FNACKANDHBK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FNACKANDHBK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FNACKANDHBK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GKEKHIPEBBC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNACKANDHBK_GKEKHIPEBBC_OFFSET))(this);
	}

	/*
	::FNACKANDHBK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FNACKANDHBK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNACKANDHBK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
