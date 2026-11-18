#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HIHBLFIJEGF_BBKGGJDNOFI_OFFSET UNITYSDK_OFFSET(0x754920)
#define HIHBLFIJEGF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HIHBLFIJEGF_EPBDFBNKOCD_OFFSET UNITYSDK_OFFSET(0x754970)
#define HIHBLFIJEGF_FJALCCKGFCH_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define HIHBLFIJEGF_FNBOALOOFEL_OFFSET UNITYSDK_OFFSET(0x754A70)
#define HIHBLFIJEGF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HIHBLFIJEGF_JBOIMNAPIKG_OFFSET UNITYSDK_OFFSET(0x756B90)
#define HIHBLFIJEGF_JIGCIDPFIHP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define HIHBLFIJEGF_LMDMNKPMOBO_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define HIHBLFIJEGF_MLKFNKGDBPN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HIHBLFIJEGF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HIHBLFIJEGF_TypeDefinitionIndex = 13860;

struct alignas(4) HIHBLFIJEGF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIHBLFIJEGF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HIHBLFIJEGF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LMDMNKPMOBO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIHBLFIJEGF_LMDMNKPMOBO_OFFSET))(this);
	}

	::System::Int32 JBOIMNAPIKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIHBLFIJEGF_JBOIMNAPIKG_OFFSET))(this);
	}

	/*
	::HIHBLFIJEGF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HIHBLFIJEGF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HIHBLFIJEGF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* JIGCIDPFIHP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIHBLFIJEGF_JIGCIDPFIHP_OFFSET))(this);
	}

	::System::Int32 EPBDFBNKOCD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIHBLFIJEGF_EPBDFBNKOCD_OFFSET))(this);
	}

	::System::Int32 FJALCCKGFCH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIHBLFIJEGF_FJALCCKGFCH_OFFSET))(this);
	}

	::System::Int32 BBKGGJDNOFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIHBLFIJEGF_BBKGGJDNOFI_OFFSET))(this);
	}

	::System::Boolean FNBOALOOFEL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HIHBLFIJEGF_FNBOALOOFEL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 MLKFNKGDBPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIHBLFIJEGF_MLKFNKGDBPN_OFFSET))(this);
	}
};
