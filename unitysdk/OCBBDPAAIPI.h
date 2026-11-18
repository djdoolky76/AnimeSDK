#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OICFHEBNAEE.h"

namespace FlatBuffers { class ByteBuffer; }

#define OCBBDPAAIPI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OCBBDPAAIPI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OCBBDPAAIPI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OCBBDPAAIPI_JEPAOCGGMCA_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define OCBBDPAAIPI_KAAKBIFNADL_OFFSET UNITYSDK_OFFSET(0x779A20)
#define OCBBDPAAIPI_PEDGGPCKNHM_OFFSET UNITYSDK_OFFSET(0x755C70)
#define OCBBDPAAIPI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OCBBDPAAIPI_TypeDefinitionIndex = 16727;

struct alignas(4) OCBBDPAAIPI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBBDPAAIPI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCBBDPAAIPI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OCBBDPAAIPI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OCBBDPAAIPI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCBBDPAAIPI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBBDPAAIPI_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 JEPAOCGGMCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBBDPAAIPI_JEPAOCGGMCA_OFFSET))(this);
	}

	::System::Boolean KAAKBIFNADL(::System::Int32 HPMEONKHFGG, ::OICFHEBNAEE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OICFHEBNAEE&))((::PBYTE)hIl2Cpp + OCBBDPAAIPI_KAAKBIFNADL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PEDGGPCKNHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBBDPAAIPI_PEDGGPCKNHM_OFFSET))(this);
	}
};
