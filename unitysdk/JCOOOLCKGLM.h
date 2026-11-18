#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JCOOOLCKGLM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JCOOOLCKGLM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JCOOOLCKGLM_BNHEAFCOILJ_OFFSET UNITYSDK_OFFSET(0x757290)
#define JCOOOLCKGLM_CKJHFNIEHFM_OFFSET UNITYSDK_OFFSET(0x7631A0)
#define JCOOOLCKGLM_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x756D50)
#define JCOOOLCKGLM_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define JCOOOLCKGLM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JCOOOLCKGLM_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JCOOOLCKGLM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17C23F10)
#define JCOOOLCKGLM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JCOOOLCKGLM_TypeDefinitionIndex = 10094;

struct alignas(4) JCOOOLCKGLM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOOOLCKGLM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCOOOLCKGLM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JCOOOLCKGLM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JCOOOLCKGLM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JCOOOLCKGLM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOOOLCKGLM_DECMGICKDLH_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOOOLCKGLM_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOOOLCKGLM_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Int32 CKJHFNIEHFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOOOLCKGLM_CKJHFNIEHFM_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOOOLCKGLM_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::String* BNHEAFCOILJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOOOLCKGLM_BNHEAFCOILJ_OFFSET))(this);
	}

	/*
	::JCOOOLCKGLM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCOOOLCKGLM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCOOOLCKGLM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
