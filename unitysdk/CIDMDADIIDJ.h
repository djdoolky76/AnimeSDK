#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CIDMDADIIDJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CIDMDADIIDJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CIDMDADIIDJ_FPHICNFENOJ_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define CIDMDADIIDJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CIDMDADIIDJ_HKKGIKHOFCM_OFFSET UNITYSDK_OFFSET(0x757190)
#define CIDMDADIIDJ_KEGFFDCFCBI_OFFSET UNITYSDK_OFFSET(0x757290)
#define CIDMDADIIDJ_NGMFBELJJAG_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CIDMDADIIDJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17F11530)
#define CIDMDADIIDJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CIDMDADIIDJ_TypeDefinitionIndex = 10055;

struct alignas(4) CIDMDADIIDJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDMDADIIDJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CIDMDADIIDJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* FPHICNFENOJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDMDADIIDJ_FPHICNFENOJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDMDADIIDJ_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* HKKGIKHOFCM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDMDADIIDJ_HKKGIKHOFCM_OFFSET))(this);
	}

	::System::Int32 NGMFBELJJAG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDMDADIIDJ_NGMFBELJJAG_OFFSET))(this);
	}

	/*
	::CIDMDADIIDJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CIDMDADIIDJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CIDMDADIIDJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CIDMDADIIDJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CIDMDADIIDJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CIDMDADIIDJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* KEGFFDCFCBI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDMDADIIDJ_KEGFFDCFCBI_OFFSET))(this);
	}
};
