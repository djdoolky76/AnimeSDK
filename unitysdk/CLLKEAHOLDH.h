#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CLLKEAHOLDH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CLLKEAHOLDH_ALECJINCBOH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define CLLKEAHOLDH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CLLKEAHOLDH_FLEMCOOMJCM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CLLKEAHOLDH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CLLKEAHOLDH_LNANIMEHAFP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define CLLKEAHOLDH_PKAKBPGKKFD_OFFSET UNITYSDK_OFFSET(0x756B10)
#define CLLKEAHOLDH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CLLKEAHOLDH_TypeDefinitionIndex = 16868;

struct alignas(4) CLLKEAHOLDH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLKEAHOLDH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLLKEAHOLDH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CLLKEAHOLDH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CLLKEAHOLDH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLLKEAHOLDH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* ALECJINCBOH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLKEAHOLDH_ALECJINCBOH_OFFSET))(this);
	}

	::System::Int32 FLEMCOOMJCM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLKEAHOLDH_FLEMCOOMJCM_OFFSET))(this);
	}

	::System::String* LNANIMEHAFP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLKEAHOLDH_LNANIMEHAFP_OFFSET))(this);
	}

	::System::String* PKAKBPGKKFD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLKEAHOLDH_PKAKBPGKKFD_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLKEAHOLDH_ACOEONABOJL_OFFSET))(this);
	}
};
