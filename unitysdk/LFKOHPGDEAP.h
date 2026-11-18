#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LFKOHPGDEAP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LFKOHPGDEAP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LFKOHPGDEAP_CKJHFNIEHFM_OFFSET UNITYSDK_OFFSET(0x755C70)
#define LFKOHPGDEAP_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x756B10)
#define LFKOHPGDEAP_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x755A00)
#define LFKOHPGDEAP_FELDILHMMIK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LFKOHPGDEAP_FFKHDOBKMDB_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define LFKOHPGDEAP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LFKOHPGDEAP_JABAIPLOCEL_OFFSET UNITYSDK_OFFSET(0x755190)
#define LFKOHPGDEAP_MNBGAIEPADE_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define LFKOHPGDEAP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17FB08E0)
#define LFKOHPGDEAP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LFKOHPGDEAP_TypeDefinitionIndex = 17743;

struct alignas(4) LFKOHPGDEAP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKOHPGDEAP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFKOHPGDEAP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::LFKOHPGDEAP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LFKOHPGDEAP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFKOHPGDEAP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKOHPGDEAP_DECMGICKDLH_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKOHPGDEAP_ENJENAJGHFI_OFFSET))(this);
	}

	/*
	static ::LFKOHPGDEAP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LFKOHPGDEAP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LFKOHPGDEAP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 CKJHFNIEHFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKOHPGDEAP_CKJHFNIEHFM_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKOHPGDEAP_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* FELDILHMMIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKOHPGDEAP_FELDILHMMIK_OFFSET))(this);
	}

	::System::String* FFKHDOBKMDB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKOHPGDEAP_FFKHDOBKMDB_OFFSET))(this);
	}

	::System::String* MNBGAIEPADE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKOHPGDEAP_MNBGAIEPADE_OFFSET))(this);
	}

	::System::Int32 JABAIPLOCEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKOHPGDEAP_JABAIPLOCEL_OFFSET))(this);
	}
};
