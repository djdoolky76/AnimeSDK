#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EJIECHGHPIN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754920)
#define EJIECHGHPIN_AFHFLLBEEHM_OFFSET UNITYSDK_OFFSET(0x757330)
#define EJIECHGHPIN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EJIECHGHPIN_FKPHBLOOCCI_OFFSET UNITYSDK_OFFSET(0x757B50)
#define EJIECHGHPIN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EJIECHGHPIN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x195213E0)
#define EJIECHGHPIN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EJIECHGHPIN_TypeDefinitionIndex = 11354;

struct alignas(4) EJIECHGHPIN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIECHGHPIN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJIECHGHPIN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::EJIECHGHPIN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EJIECHGHPIN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJIECHGHPIN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean FKPHBLOOCCI(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + EJIECHGHPIN_FKPHBLOOCCI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EJIECHGHPIN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EJIECHGHPIN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EJIECHGHPIN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIECHGHPIN_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 AFHFLLBEEHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIECHGHPIN_AFHFLLBEEHM_OFFSET))(this);
	}
};
