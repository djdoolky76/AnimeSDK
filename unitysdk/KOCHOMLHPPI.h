#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KOCHOMLHPPI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KOCHOMLHPPI_BEJAGNCLLCI_OFFSET UNITYSDK_OFFSET(0x754920)
#define KOCHOMLHPPI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KOCHOMLHPPI_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define KOCHOMLHPPI_EFIMOGGEBHM_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KOCHOMLHPPI_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define KOCHOMLHPPI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KOCHOMLHPPI_ICAAIFLHIOE_OFFSET UNITYSDK_OFFSET(0x754970)
#define KOCHOMLHPPI_LCIFIGOIGJI_OFFSET UNITYSDK_OFFSET(0x758780)
#define KOCHOMLHPPI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KOCHOMLHPPI_TypeDefinitionIndex = 16000;

struct alignas(4) KOCHOMLHPPI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCHOMLHPPI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KOCHOMLHPPI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCHOMLHPPI_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Int32 BEJAGNCLLCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCHOMLHPPI_BEJAGNCLLCI_OFFSET))(this);
	}

	::System::Int32 ICAAIFLHIOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCHOMLHPPI_ICAAIFLHIOE_OFFSET))(this);
	}

	/*
	::KOCHOMLHPPI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KOCHOMLHPPI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KOCHOMLHPPI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 EFIMOGGEBHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCHOMLHPPI_EFIMOGGEBHM_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCHOMLHPPI_DECMGICKDLH_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCHOMLHPPI_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 LCIFIGOIGJI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCHOMLHPPI_LCIFIGOIGJI_OFFSET))(this);
	}
};
