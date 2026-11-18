#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LFJJHNGEGKN_AEONMFHPLPF_OFFSET UNITYSDK_OFFSET(0x761500)
#define LFJJHNGEGKN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LFJJHNGEGKN_DLBMCODFPON_OFFSET UNITYSDK_OFFSET(0x754920)
#define LFJJHNGEGKN_FNLEDPJHPCC_OFFSET UNITYSDK_OFFSET(0x754F10)
#define LFJJHNGEGKN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LFJJHNGEGKN_HDAGGDKMDAI_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LFJJHNGEGKN_HHPOMDPBIED_OFFSET UNITYSDK_OFFSET(0x754C20)
#define LFJJHNGEGKN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AAFA470)
#define LFJJHNGEGKN_PCBIMDJIEOK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LFJJHNGEGKN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LFJJHNGEGKN_TypeDefinitionIndex = 17054;

struct alignas(4) LFJJHNGEGKN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFJJHNGEGKN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFJJHNGEGKN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HHPOMDPBIED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFJJHNGEGKN_HHPOMDPBIED_OFFSET))(this);
	}

	::System::String* FNLEDPJHPCC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFJJHNGEGKN_FNLEDPJHPCC_OFFSET))(this);
	}

	::System::Int32 PCBIMDJIEOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFJJHNGEGKN_PCBIMDJIEOK_OFFSET))(this);
	}

	/*
	::LFJJHNGEGKN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LFJJHNGEGKN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFJJHNGEGKN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HDAGGDKMDAI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFJJHNGEGKN_HDAGGDKMDAI_OFFSET))(this);
	}

	::System::Boolean AEONMFHPLPF(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + LFJJHNGEGKN_AEONMFHPLPF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::LFJJHNGEGKN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LFJJHNGEGKN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LFJJHNGEGKN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DLBMCODFPON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFJJHNGEGKN_DLBMCODFPON_OFFSET))(this);
	}
};
