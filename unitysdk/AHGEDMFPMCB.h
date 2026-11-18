#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AHGEDMFPMCB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AHGEDMFPMCB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AHGEDMFPMCB_JANPBCJAGPH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AHGEDMFPMCB_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x754920)
#define AHGEDMFPMCB_LOBLDINBMPO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define AHGEDMFPMCB_NOHKHMNBDMK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define AHGEDMFPMCB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADA74D0)
#define AHGEDMFPMCB_PIPBFOBLJFJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define AHGEDMFPMCB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AHGEDMFPMCB_TypeDefinitionIndex = 10673;

struct alignas(4) AHGEDMFPMCB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGEDMFPMCB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHGEDMFPMCB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PIPBFOBLJFJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGEDMFPMCB_PIPBFOBLJFJ_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGEDMFPMCB_LNOBBAIGKJL_OFFSET))(this);
	}

	/*
	::AHGEDMFPMCB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AHGEDMFPMCB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHGEDMFPMCB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LOBLDINBMPO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGEDMFPMCB_LOBLDINBMPO_OFFSET))(this);
	}

	::System::String* NOHKHMNBDMK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGEDMFPMCB_NOHKHMNBDMK_OFFSET))(this);
	}

	/*
	static ::AHGEDMFPMCB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AHGEDMFPMCB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AHGEDMFPMCB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 JANPBCJAGPH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGEDMFPMCB_JANPBCJAGPH_OFFSET))(this);
	}
};
