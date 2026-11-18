#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KLFNJCHBPFE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KLFNJCHBPFE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KLFNJCHBPFE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KLFNJCHBPFE_LKIKDBNBCAN_OFFSET UNITYSDK_OFFSET(0x755A00)
#define KLFNJCHBPFE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BA7B470)
#define KLFNJCHBPFE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KLFNJCHBPFE_TypeDefinitionIndex = 10247;

struct alignas(4) KLFNJCHBPFE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFNJCHBPFE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLFNJCHBPFE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFNJCHBPFE_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* LKIKDBNBCAN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFNJCHBPFE_LKIKDBNBCAN_OFFSET))(this);
	}

	/*
	::KLFNJCHBPFE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KLFNJCHBPFE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLFNJCHBPFE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KLFNJCHBPFE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KLFNJCHBPFE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KLFNJCHBPFE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
