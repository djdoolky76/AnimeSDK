#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EGLBLKHFBPC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EGLBLKHFBPC_AGHHDCGLIKC_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define EGLBLKHFBPC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EGLBLKHFBPC_CNIIAPNAFDM_OFFSET UNITYSDK_OFFSET(0x755190)
#define EGLBLKHFBPC_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x757290)
#define EGLBLKHFBPC_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define EGLBLKHFBPC_FELDILHMMIK_OFFSET UNITYSDK_OFFSET(0x755A00)
#define EGLBLKHFBPC_FFKHDOBKMDB_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define EGLBLKHFBPC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EGLBLKHFBPC_IHIAPPGJDDL_OFFSET UNITYSDK_OFFSET(0x757190)
#define EGLBLKHFBPC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1951E910)
#define EGLBLKHFBPC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EGLBLKHFBPC_TypeDefinitionIndex = 14746;

struct alignas(4) EGLBLKHFBPC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLBLKHFBPC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGLBLKHFBPC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EGLBLKHFBPC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EGLBLKHFBPC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EGLBLKHFBPC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLBLKHFBPC_ENJENAJGHFI_OFFSET))(this);
	}

	::System::String* FFKHDOBKMDB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLBLKHFBPC_FFKHDOBKMDB_OFFSET))(this);
	}

	::System::String* IHIAPPGJDDL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLBLKHFBPC_IHIAPPGJDDL_OFFSET))(this);
	}

	::System::Int32 CNIIAPNAFDM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLBLKHFBPC_CNIIAPNAFDM_OFFSET))(this);
	}

	::System::Int32 AGHHDCGLIKC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLBLKHFBPC_AGHHDCGLIKC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLBLKHFBPC_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::EGLBLKHFBPC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EGLBLKHFBPC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGLBLKHFBPC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* FELDILHMMIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLBLKHFBPC_FELDILHMMIK_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLBLKHFBPC_DECMGICKDLH_OFFSET))(this);
	}
};
