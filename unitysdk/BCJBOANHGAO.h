#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BCJBOANHGAO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BCJBOANHGAO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BCJBOANHGAO_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define BCJBOANHGAO_DHNOLPMMNCN_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define BCJBOANHGAO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BCJBOANHGAO_LPFHBOMNFPE_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define BCJBOANHGAO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1577ADD0)
#define BCJBOANHGAO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BCJBOANHGAO_TypeDefinitionIndex = 14997;

struct alignas(4) BCJBOANHGAO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJBOANHGAO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCJBOANHGAO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BCJBOANHGAO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BCJBOANHGAO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCJBOANHGAO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJBOANHGAO_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::BCJBOANHGAO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BCJBOANHGAO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BCJBOANHGAO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LPFHBOMNFPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJBOANHGAO_LPFHBOMNFPE_OFFSET))(this);
	}

	::System::Boolean DHNOLPMMNCN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BCJBOANHGAO_DHNOLPMMNCN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJBOANHGAO_DECMGICKDLH_OFFSET))(this);
	}
};
