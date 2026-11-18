#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LPMFOADIELK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LPMFOADIELK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LPMFOADIELK_CLBAAHEDGEP_OFFSET UNITYSDK_OFFSET(0x754970)
#define LPMFOADIELK_CMMDPKAOFEH_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define LPMFOADIELK_FMIJDKMDEOJ_OFFSET UNITYSDK_OFFSET(0x757190)
#define LPMFOADIELK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LPMFOADIELK_JMMCEAHHFKI_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LPMFOADIELK_LLDAMBKLDNI_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define LPMFOADIELK_NMNOFIGLGGE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LPMFOADIELK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19572FA0)
#define LPMFOADIELK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LPMFOADIELK_TypeDefinitionIndex = 10972;

struct alignas(4) LPMFOADIELK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMFOADIELK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LPMFOADIELK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CLBAAHEDGEP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMFOADIELK_CLBAAHEDGEP_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMFOADIELK_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* LLDAMBKLDNI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMFOADIELK_LLDAMBKLDNI_OFFSET))(this);
	}

	/*
	::LPMFOADIELK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LPMFOADIELK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LPMFOADIELK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NMNOFIGLGGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMFOADIELK_NMNOFIGLGGE_OFFSET))(this);
	}

	::System::Int32 CMMDPKAOFEH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMFOADIELK_CMMDPKAOFEH_OFFSET))(this);
	}

	::System::String* FMIJDKMDEOJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMFOADIELK_FMIJDKMDEOJ_OFFSET))(this);
	}

	/*
	static ::LPMFOADIELK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LPMFOADIELK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LPMFOADIELK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 JMMCEAHHFKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMFOADIELK_JMMCEAHHFKI_OFFSET))(this);
	}
};
