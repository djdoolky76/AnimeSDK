#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CAJHEJINMDF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CAJHEJINMDF_DIJJMHNLOHC_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define CAJHEJINMDF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CAJHEJINMDF_MDGLCEHCOIF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CAJHEJINMDF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19AC90D0)
#define CAJHEJINMDF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CAJHEJINMDF_TypeDefinitionIndex = 9807;

struct alignas(4) CAJHEJINMDF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJHEJINMDF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAJHEJINMDF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CAJHEJINMDF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CAJHEJINMDF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CAJHEJINMDF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 MDGLCEHCOIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJHEJINMDF_MDGLCEHCOIF_OFFSET))(this);
	}

	::System::String* DIJJMHNLOHC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJHEJINMDF_DIJJMHNLOHC_OFFSET))(this);
	}

	/*
	::CAJHEJINMDF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CAJHEJINMDF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAJHEJINMDF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
