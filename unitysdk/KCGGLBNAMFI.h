#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KCGGLBNAMFI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KCGGLBNAMFI_GEIAKOBBBHA_OFFSET UNITYSDK_OFFSET(0x755A00)
#define KCGGLBNAMFI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KCGGLBNAMFI_GHLJABDNIMA_OFFSET UNITYSDK_OFFSET(0x76F6C0)
#define KCGGLBNAMFI_KGBFDOILPBC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KCGGLBNAMFI_LDDOEJIGINF_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KCGGLBNAMFI_NBDLOEDIBBE_OFFSET UNITYSDK_OFFSET(0x754F10)
#define KCGGLBNAMFI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KCGGLBNAMFI_TypeDefinitionIndex = 9565;

struct alignas(4) KCGGLBNAMFI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGGLBNAMFI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCGGLBNAMFI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* NBDLOEDIBBE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGGLBNAMFI_NBDLOEDIBBE_OFFSET))(this);
	}

	::System::String* GEIAKOBBBHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGGLBNAMFI_GEIAKOBBBHA_OFFSET))(this);
	}

	::System::Int32 KGBFDOILPBC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGGLBNAMFI_KGBFDOILPBC_OFFSET))(this);
	}

	::System::Int32 LDDOEJIGINF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGGLBNAMFI_LDDOEJIGINF_OFFSET))(this);
	}

	/*
	::KCGGLBNAMFI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KCGGLBNAMFI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCGGLBNAMFI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean GHLJABDNIMA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGGLBNAMFI_GHLJABDNIMA_OFFSET))(this);
	}
};
