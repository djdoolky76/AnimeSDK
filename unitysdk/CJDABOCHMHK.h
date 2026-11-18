#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CJDABOCHMHK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CJDABOCHMHK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CJDABOCHMHK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CJDABOCHMHK_HKEMFICFMAB_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define CJDABOCHMHK_LFEKKNKDLCI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define CJDABOCHMHK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17F12090)
#define CJDABOCHMHK_OCMHAHBOGAC_OFFSET UNITYSDK_OFFSET(0x755A00)
#define CJDABOCHMHK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CJDABOCHMHK_TypeDefinitionIndex = 17455;

struct alignas(4) CJDABOCHMHK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDABOCHMHK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJDABOCHMHK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDABOCHMHK_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::CJDABOCHMHK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CJDABOCHMHK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CJDABOCHMHK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* HKEMFICFMAB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDABOCHMHK_HKEMFICFMAB_OFFSET))(this);
	}

	::System::String* OCMHAHBOGAC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDABOCHMHK_OCMHAHBOGAC_OFFSET))(this);
	}

	::System::String* LFEKKNKDLCI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDABOCHMHK_LFEKKNKDLCI_OFFSET))(this);
	}

	/*
	::CJDABOCHMHK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CJDABOCHMHK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJDABOCHMHK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
