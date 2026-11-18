#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KGEAJENDKCB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KGEAJENDKCB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KGEAJENDKCB_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KGEAJENDKCB_FECFCHMJHML_OFFSET UNITYSDK_OFFSET(0x756B10)
#define KGEAJENDKCB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KGEAJENDKCB_LLNNAHCIAOM_OFFSET UNITYSDK_OFFSET(0x755A00)
#define KGEAJENDKCB_MEAKGMCFGAL_OFFSET UNITYSDK_OFFSET(0x754F10)
#define KGEAJENDKCB_MNGNAMLGGJN_OFFSET UNITYSDK_OFFSET(0x756D50)
#define KGEAJENDKCB_PKOMGKJLKGM_OFFSET UNITYSDK_OFFSET(0x755C70)
#define KGEAJENDKCB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KGEAJENDKCB_TypeDefinitionIndex = 15523;

struct alignas(4) KGEAJENDKCB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGEAJENDKCB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGEAJENDKCB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* FECFCHMJHML()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGEAJENDKCB_FECFCHMJHML_OFFSET))(this);
	}

	::System::Int32 PKOMGKJLKGM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGEAJENDKCB_PKOMGKJLKGM_OFFSET))(this);
	}

	::System::String* MNGNAMLGGJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGEAJENDKCB_MNGNAMLGGJN_OFFSET))(this);
	}

	::System::String* MEAKGMCFGAL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGEAJENDKCB_MEAKGMCFGAL_OFFSET))(this);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGEAJENDKCB_DGFAJDNHCIJ_OFFSET))(this);
	}

	/*
	::KGEAJENDKCB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KGEAJENDKCB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGEAJENDKCB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* LLNNAHCIAOM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGEAJENDKCB_LLNNAHCIAOM_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGEAJENDKCB_ACOEONABOJL_OFFSET))(this);
	}
};
