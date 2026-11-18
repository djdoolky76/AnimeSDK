#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MDCJIGMGBFJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MDCJIGMGBFJ_AFDKMEKANEH_OFFSET UNITYSDK_OFFSET(0x754C20)
#define MDCJIGMGBFJ_BAFPGMCLAGF_OFFSET UNITYSDK_OFFSET(0x754920)
#define MDCJIGMGBFJ_BBJPNPFPFOK_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define MDCJIGMGBFJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MDCJIGMGBFJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MDCJIGMGBFJ_JLEGHNGEBOG_OFFSET UNITYSDK_OFFSET(0x754F10)
#define MDCJIGMGBFJ_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MDCJIGMGBFJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C176EB0)
#define MDCJIGMGBFJ_ONHEBDDLMNO_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define MDCJIGMGBFJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MDCJIGMGBFJ_TypeDefinitionIndex = 13877;

struct alignas(4) MDCJIGMGBFJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCJIGMGBFJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDCJIGMGBFJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ONHEBDDLMNO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCJIGMGBFJ_ONHEBDDLMNO_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCJIGMGBFJ_LPFMNKEFPMM_OFFSET))(this);
	}

	/*
	::MDCJIGMGBFJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MDCJIGMGBFJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDCJIGMGBFJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* JLEGHNGEBOG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCJIGMGBFJ_JLEGHNGEBOG_OFFSET))(this);
	}

	::System::Boolean BBJPNPFPFOK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MDCJIGMGBFJ_BBJPNPFPFOK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 BAFPGMCLAGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCJIGMGBFJ_BAFPGMCLAGF_OFFSET))(this);
	}

	::System::Int32 AFDKMEKANEH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCJIGMGBFJ_AFDKMEKANEH_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCJIGMGBFJ_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::MDCJIGMGBFJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MDCJIGMGBFJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MDCJIGMGBFJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
