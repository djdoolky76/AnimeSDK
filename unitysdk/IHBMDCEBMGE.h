#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IHBMDCEBMGE_BGDGFOGPFDD_OFFSET UNITYSDK_OFFSET(0x756B90)
#define IHBMDCEBMGE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IHBMDCEBMGE_FPKLHKBFPJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IHBMDCEBMGE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IHBMDCEBMGE_HDNCCEDDKDG_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define IHBMDCEBMGE_JOADBFHPNAH_OFFSET UNITYSDK_OFFSET(0x756B10)
#define IHBMDCEBMGE_MGKINJAIDJI_OFFSET UNITYSDK_OFFSET(0x755D20)
#define IHBMDCEBMGE_NACMHJGMEAP_OFFSET UNITYSDK_OFFSET(0x756D50)
#define IHBMDCEBMGE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B625960)
#define IHBMDCEBMGE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IHBMDCEBMGE_TypeDefinitionIndex = 11271;

struct alignas(4) IHBMDCEBMGE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBMDCEBMGE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IHBMDCEBMGE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BGDGFOGPFDD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBMDCEBMGE_BGDGFOGPFDD_OFFSET))(this);
	}

	::System::String* JOADBFHPNAH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBMDCEBMGE_JOADBFHPNAH_OFFSET))(this);
	}

	/*
	::IHBMDCEBMGE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IHBMDCEBMGE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IHBMDCEBMGE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IHBMDCEBMGE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IHBMDCEBMGE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IHBMDCEBMGE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 FPKLHKBFPJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBMDCEBMGE_FPKLHKBFPJL_OFFSET))(this);
	}

	::System::String* NACMHJGMEAP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBMDCEBMGE_NACMHJGMEAP_OFFSET))(this);
	}

	::System::String* HDNCCEDDKDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBMDCEBMGE_HDNCCEDDKDG_OFFSET))(this);
	}

	::System::Int32 MGKINJAIDJI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBMDCEBMGE_MGKINJAIDJI_OFFSET))(this);
	}
};
