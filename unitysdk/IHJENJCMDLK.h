#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IHJENJCMDLK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IHJENJCMDLK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IHJENJCMDLK_DOHANFCIALC_OFFSET UNITYSDK_OFFSET(0x755A00)
#define IHJENJCMDLK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IHJENJCMDLK_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define IHJENJCMDLK_NOGPEGNPCGM_OFFSET UNITYSDK_OFFSET(0x756B10)
#define IHJENJCMDLK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5DCE50)
#define IHJENJCMDLK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IHJENJCMDLK_TypeDefinitionIndex = 14613;

struct alignas(4) IHJENJCMDLK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJENJCMDLK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IHJENJCMDLK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::IHJENJCMDLK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IHJENJCMDLK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IHJENJCMDLK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* DOHANFCIALC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJENJCMDLK_DOHANFCIALC_OFFSET))(this);
	}

	::System::String* NOGPEGNPCGM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJENJCMDLK_NOGPEGNPCGM_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJENJCMDLK_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJENJCMDLK_NENDAECBCEM_OFFSET))(this);
	}

	/*
	static ::IHJENJCMDLK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IHJENJCMDLK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IHJENJCMDLK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
