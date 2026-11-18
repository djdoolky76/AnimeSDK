#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IKFAIPPHKPB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IKFAIPPHKPB_BMJNPIDOPNO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IKFAIPPHKPB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IKFAIPPHKPB_LEPAFHIMGMM_OFFSET UNITYSDK_OFFSET(0x754F10)
#define IKFAIPPHKPB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A4FA310)
#define IKFAIPPHKPB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IKFAIPPHKPB_TypeDefinitionIndex = 17564;

struct alignas(4) IKFAIPPHKPB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFAIPPHKPB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IKFAIPPHKPB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* LEPAFHIMGMM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFAIPPHKPB_LEPAFHIMGMM_OFFSET))(this);
	}

	/*
	::IKFAIPPHKPB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IKFAIPPHKPB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IKFAIPPHKPB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BMJNPIDOPNO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFAIPPHKPB_BMJNPIDOPNO_OFFSET))(this);
	}

	/*
	static ::IKFAIPPHKPB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IKFAIPPHKPB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IKFAIPPHKPB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
