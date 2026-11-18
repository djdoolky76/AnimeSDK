#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GIAAAJFOOOK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GIAAAJFOOOK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GIAAAJFOOOK_DMLHOHFHNLC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define GIAAAJFOOOK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GIAAAJFOOOK_GKKEEOMPEGE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GIAAAJFOOOK_LGACJDNBPJN_OFFSET UNITYSDK_OFFSET(0x756B10)
#define GIAAAJFOOOK_MBHPDJMIPMM_OFFSET UNITYSDK_OFFSET(0x754970)
#define GIAAAJFOOOK_MNBGAIEPADE_OFFSET UNITYSDK_OFFSET(0x757290)
#define GIAAAJFOOOK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18BA46B0)
#define GIAAAJFOOOK_PIJAPCEIGIF_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define GIAAAJFOOOK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GIAAAJFOOOK_TypeDefinitionIndex = 12300;

struct alignas(4) GIAAAJFOOOK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAAAJFOOOK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GIAAAJFOOOK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MBHPDJMIPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAAAJFOOOK_MBHPDJMIPMM_OFFSET))(this);
	}

	::System::String* LGACJDNBPJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAAAJFOOOK_LGACJDNBPJN_OFFSET))(this);
	}

	::System::String* MNBGAIEPADE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAAAJFOOOK_MNBGAIEPADE_OFFSET))(this);
	}

	::System::Int32 GKKEEOMPEGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAAAJFOOOK_GKKEEOMPEGE_OFFSET))(this);
	}

	/*
	::GIAAAJFOOOK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GIAAAJFOOOK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GIAAAJFOOOK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAAAJFOOOK_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 DMLHOHFHNLC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAAAJFOOOK_DMLHOHFHNLC_OFFSET))(this);
	}

	::System::String* PIJAPCEIGIF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAAAJFOOOK_PIJAPCEIGIF_OFFSET))(this);
	}

	/*
	static ::GIAAAJFOOOK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GIAAAJFOOOK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GIAAAJFOOOK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
