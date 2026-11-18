#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JENBEIGALIM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JENBEIGALIM_BFCHMGIDKLF_OFFSET UNITYSDK_OFFSET(0x754E10)
#define JENBEIGALIM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JENBEIGALIM_BKJOAIDFIJD_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JENBEIGALIM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JENBEIGALIM_LIEJACHHBOD_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define JENBEIGALIM_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x754920)
#define JENBEIGALIM_MBMGFNMNKJM_OFFSET UNITYSDK_OFFSET(0x755A00)
#define JENBEIGALIM_NCHAGFCJLJJ_OFFSET UNITYSDK_OFFSET(0x754970)
#define JENBEIGALIM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B895B50)
#define JENBEIGALIM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JENBEIGALIM_TypeDefinitionIndex = 15387;

struct alignas(4) JENBEIGALIM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JENBEIGALIM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JENBEIGALIM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JENBEIGALIM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JENBEIGALIM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JENBEIGALIM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JENBEIGALIM_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* LIEJACHHBOD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JENBEIGALIM_LIEJACHHBOD_OFFSET))(this);
	}

	::System::String* BKJOAIDFIJD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JENBEIGALIM_BKJOAIDFIJD_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JENBEIGALIM_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Boolean BFCHMGIDKLF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JENBEIGALIM_BFCHMGIDKLF_OFFSET))(this);
	}

	/*
	static ::JENBEIGALIM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JENBEIGALIM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JENBEIGALIM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NCHAGFCJLJJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JENBEIGALIM_NCHAGFCJLJJ_OFFSET))(this);
	}

	::System::String* MBMGFNMNKJM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JENBEIGALIM_MBMGFNMNKJM_OFFSET))(this);
	}
};
