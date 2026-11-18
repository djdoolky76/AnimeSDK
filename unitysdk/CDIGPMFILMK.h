#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CDIGPMFILMK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CDIGPMFILMK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CDIGPMFILMK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CDIGPMFILMK_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CDIGPMFILMK_LDKPIFKHGKM_OFFSET UNITYSDK_OFFSET(0x754F10)
#define CDIGPMFILMK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CDIGPMFILMK_TypeDefinitionIndex = 17433;

struct alignas(4) CDIGPMFILMK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIGPMFILMK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDIGPMFILMK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CDIGPMFILMK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CDIGPMFILMK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDIGPMFILMK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIGPMFILMK_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIGPMFILMK_HKELPCLHLEC_OFFSET))(this);
	}

	::System::String* LDKPIFKHGKM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIGPMFILMK_LDKPIFKHGKM_OFFSET))(this);
	}
};
