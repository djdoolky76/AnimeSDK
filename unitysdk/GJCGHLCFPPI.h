#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GJCGHLCFPPI_ALLENMMGLEK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GJCGHLCFPPI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GJCGHLCFPPI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GJCGHLCFPPI_HDJLCKBGHJA_OFFSET UNITYSDK_OFFSET(0x754F10)
#define GJCGHLCFPPI_LCNAPELFGBG_OFFSET UNITYSDK_OFFSET(0x754B50)
#define GJCGHLCFPPI_OAHPPGCJFMJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define GJCGHLCFPPI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GJCGHLCFPPI_TypeDefinitionIndex = 14256;

struct alignas(4) GJCGHLCFPPI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCGHLCFPPI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJCGHLCFPPI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* HDJLCKBGHJA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCGHLCFPPI_HDJLCKBGHJA_OFFSET))(this);
	}

	/*
	::GJCGHLCFPPI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GJCGHLCFPPI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJCGHLCFPPI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LCNAPELFGBG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCGHLCFPPI_LCNAPELFGBG_OFFSET))(this);
	}

	::System::Int32 ALLENMMGLEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCGHLCFPPI_ALLENMMGLEK_OFFSET))(this);
	}

	::System::Int32 OAHPPGCJFMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCGHLCFPPI_OAHPPGCJFMJ_OFFSET))(this);
	}
};
