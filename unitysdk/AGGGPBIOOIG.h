#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AGGGPBIOOIG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AGGGPBIOOIG_BDBHLAHCJFB_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define AGGGPBIOOIG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AGGGPBIOOIG_DEMPAFDOBCN_OFFSET UNITYSDK_OFFSET(0x757190)
#define AGGGPBIOOIG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AGGGPBIOOIG_KBFOMAONODF_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define AGGGPBIOOIG_KPGBJBBIFKH_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define AGGGPBIOOIG_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define AGGGPBIOOIG_NJONKCJEJPB_OFFSET UNITYSDK_OFFSET(0x755A00)
#define AGGGPBIOOIG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADA5AB0)
#define AGGGPBIOOIG_PJACCLMFJMF_OFFSET UNITYSDK_OFFSET(0x754F10)
#define AGGGPBIOOIG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AGGGPBIOOIG_TypeDefinitionIndex = 13881;

struct alignas(4) AGGGPBIOOIG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGGPBIOOIG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGGGPBIOOIG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* PJACCLMFJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGGPBIOOIG_PJACCLMFJMF_OFFSET))(this);
	}

	/*
	::AGGGPBIOOIG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AGGGPBIOOIG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGGGPBIOOIG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* BDBHLAHCJFB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGGPBIOOIG_BDBHLAHCJFB_OFFSET))(this);
	}

	::System::String* NJONKCJEJPB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGGPBIOOIG_NJONKCJEJPB_OFFSET))(this);
	}

	::System::String* KBFOMAONODF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGGPBIOOIG_KBFOMAONODF_OFFSET))(this);
	}

	/*
	static ::AGGGPBIOOIG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AGGGPBIOOIG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AGGGPBIOOIG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* KPGBJBBIFKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGGPBIOOIG_KPGBJBBIFKH_OFFSET))(this);
	}

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGGPBIOOIG_NENDAECBCEM_OFFSET))(this);
	}

	::System::String* DEMPAFDOBCN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGGPBIOOIG_DEMPAFDOBCN_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGGPBIOOIG_ACOEONABOJL_OFFSET))(this);
	}
};
