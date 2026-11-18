#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KENBFELAEOG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KENBFELAEOG_CKHJMGDFFFJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KENBFELAEOG_EJEFCIFDJKI_OFFSET UNITYSDK_OFFSET(0x754920)
#define KENBFELAEOG_FIEFJPIGEOC_OFFSET UNITYSDK_OFFSET(0x755C70)
#define KENBFELAEOG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KENBFELAEOG_HGCHKJPOPPD_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KENBFELAEOG_HLMNLEKFFAD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KENBFELAEOG_KLCMLGDLOBB_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define KENBFELAEOG_MKENIKHDGNF_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KENBFELAEOG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5F8D70)
#define KENBFELAEOG_PBCLDLLAPII_OFFSET UNITYSDK_OFFSET(0x755E40)
#define KENBFELAEOG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KENBFELAEOG_TypeDefinitionIndex = 15642;

struct alignas(4) KENBFELAEOG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KENBFELAEOG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KENBFELAEOG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CKHJMGDFFFJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KENBFELAEOG_CKHJMGDFFFJ_OFFSET))(this);
	}

	::System::Int32 FIEFJPIGEOC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KENBFELAEOG_FIEFJPIGEOC_OFFSET))(this);
	}

	/*
	::KENBFELAEOG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KENBFELAEOG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KENBFELAEOG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HLMNLEKFFAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KENBFELAEOG_HLMNLEKFFAD_OFFSET))(this);
	}

	::System::Int32 KLCMLGDLOBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KENBFELAEOG_KLCMLGDLOBB_OFFSET))(this);
	}

	::System::Int32 HGCHKJPOPPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KENBFELAEOG_HGCHKJPOPPD_OFFSET))(this);
	}

	::System::Int32 MKENIKHDGNF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KENBFELAEOG_MKENIKHDGNF_OFFSET))(this);
	}

	/*
	static ::KENBFELAEOG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KENBFELAEOG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KENBFELAEOG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 PBCLDLLAPII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KENBFELAEOG_PBCLDLLAPII_OFFSET))(this);
	}

	::System::Int32 EJEFCIFDJKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KENBFELAEOG_EJEFCIFDJKI_OFFSET))(this);
	}
};
