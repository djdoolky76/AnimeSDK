#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DAPEHNFOGIN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DAPEHNFOGIN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DAPEHNFOGIN_DKINDJFBIDG_OFFSET UNITYSDK_OFFSET(0x7612A0)
#define DAPEHNFOGIN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DAPEHNFOGIN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17A93C60)
#define DAPEHNFOGIN_PEKIDDEJCHK_OFFSET UNITYSDK_OFFSET(0x761240)
#define DAPEHNFOGIN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DAPEHNFOGIN_TypeDefinitionIndex = 10059;

struct alignas(4) DAPEHNFOGIN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPEHNFOGIN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DAPEHNFOGIN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PEKIDDEJCHK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPEHNFOGIN_PEKIDDEJCHK_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPEHNFOGIN_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::DAPEHNFOGIN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DAPEHNFOGIN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DAPEHNFOGIN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean DKINDJFBIDG(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + DAPEHNFOGIN_DKINDJFBIDG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DAPEHNFOGIN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DAPEHNFOGIN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DAPEHNFOGIN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
