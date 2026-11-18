#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define IGCLOKHMDIC_BFOLBJOPNJB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IGCLOKHMDIC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IGCLOKHMDIC_DICAICPAGCO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define IGCLOKHMDIC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IGCLOKHMDIC_JNHIENBHHCE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define IGCLOKHMDIC_JNNCOPHAECJ_OFFSET UNITYSDK_OFFSET(0x754970)
#define IGCLOKHMDIC_MKJLCCLONJB_OFFSET UNITYSDK_OFFSET(0x754920)
#define IGCLOKHMDIC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1934C330)
#define IGCLOKHMDIC_PFJKHMEPCLK_OFFSET UNITYSDK_OFFSET(0x78A030)
#define IGCLOKHMDIC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IGCLOKHMDIC_TypeDefinitionIndex = 13885;

struct alignas(4) IGCLOKHMDIC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCLOKHMDIC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGCLOKHMDIC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BFOLBJOPNJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCLOKHMDIC_BFOLBJOPNJB_OFFSET))(this);
	}

	::System::Int32 JNHIENBHHCE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCLOKHMDIC_JNHIENBHHCE_OFFSET))(this);
	}

	::System::Single PFJKHMEPCLK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCLOKHMDIC_PFJKHMEPCLK_OFFSET))(this);
	}

	::System::Int32 JNNCOPHAECJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCLOKHMDIC_JNNCOPHAECJ_OFFSET))(this);
	}

	/*
	static ::IGCLOKHMDIC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IGCLOKHMDIC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IGCLOKHMDIC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 MKJLCCLONJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCLOKHMDIC_MKJLCCLONJB_OFFSET))(this);
	}

	::System::Int32 DICAICPAGCO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCLOKHMDIC_DICAICPAGCO_OFFSET))(this);
	}

	/*
	::IGCLOKHMDIC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IGCLOKHMDIC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGCLOKHMDIC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
