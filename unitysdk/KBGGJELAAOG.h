#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KBGGJELAAOG_ADBBCNFGHPJ_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define KBGGJELAAOG_ANGGNOJPPIB_OFFSET UNITYSDK_OFFSET(0x755790)
#define KBGGJELAAOG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KBGGJELAAOG_BPOPIDFJDBK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KBGGJELAAOG_DCGJGALIIHB_OFFSET UNITYSDK_OFFSET(0x754F10)
#define KBGGJELAAOG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KBGGJELAAOG_KIMDMHCFJID_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define KBGGJELAAOG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BAFFB40)
#define KBGGJELAAOG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KBGGJELAAOG_TypeDefinitionIndex = 9774;

struct alignas(4) KBGGJELAAOG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGGJELAAOG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBGGJELAAOG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DCGJGALIIHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGGJELAAOG_DCGJGALIIHB_OFFSET))(this);
	}

	::System::Int32 BPOPIDFJDBK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGGJELAAOG_BPOPIDFJDBK_OFFSET))(this);
	}

	::System::Boolean KIMDMHCFJID(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KBGGJELAAOG_KIMDMHCFJID_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ANGGNOJPPIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGGJELAAOG_ANGGNOJPPIB_OFFSET))(this);
	}

	/*
	static ::KBGGJELAAOG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KBGGJELAAOG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KBGGJELAAOG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::KBGGJELAAOG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KBGGJELAAOG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBGGJELAAOG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* ADBBCNFGHPJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGGJELAAOG_ADBBCNFGHPJ_OFFSET))(this);
	}
};
