#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HENIDDICPFP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HENIDDICPFP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HENIDDICPFP_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754970)
#define HENIDDICPFP_GKKEEOMPEGE_OFFSET UNITYSDK_OFFSET(0x754920)
#define HENIDDICPFP_JMCLOPHNIDO_OFFSET UNITYSDK_OFFSET(0x755A00)
#define HENIDDICPFP_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HENIDDICPFP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A4EAB80)
#define HENIDDICPFP_OEBELJGDNCE_OFFSET UNITYSDK_OFFSET(0x754F10)
#define HENIDDICPFP_OOKDENEFBJO_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define HENIDDICPFP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HENIDDICPFP_TypeDefinitionIndex = 12097;

struct alignas(4) HENIDDICPFP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENIDDICPFP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HENIDDICPFP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HENIDDICPFP_NKCNGLADFNA_OFFSET))(this);
	}

	/*
	::HENIDDICPFP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HENIDDICPFP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HENIDDICPFP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* JMCLOPHNIDO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENIDDICPFP_JMCLOPHNIDO_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HENIDDICPFP_GKBAJJACIEA_OFFSET))(this);
	}

	::System::String* OOKDENEFBJO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENIDDICPFP_OOKDENEFBJO_OFFSET))(this);
	}

	/*
	static ::HENIDDICPFP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HENIDDICPFP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HENIDDICPFP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* OEBELJGDNCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENIDDICPFP_OEBELJGDNCE_OFFSET))(this);
	}

	::System::Int32 GKKEEOMPEGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HENIDDICPFP_GKKEEOMPEGE_OFFSET))(this);
	}
};
