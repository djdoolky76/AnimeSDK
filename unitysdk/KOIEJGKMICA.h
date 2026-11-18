#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KOIEJGKMICA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KOIEJGKMICA_BIJANJAICOD_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define KOIEJGKMICA_BMFCDFFMOEC_OFFSET UNITYSDK_OFFSET(0x757190)
#define KOIEJGKMICA_COMLBMIAAHJ_OFFSET UNITYSDK_OFFSET(0x764220)
#define KOIEJGKMICA_GAPFKOEALLP_OFFSET UNITYSDK_OFFSET(0x754970)
#define KOIEJGKMICA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KOIEJGKMICA_KDKJGJBCINC_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define KOIEJGKMICA_LMALPLOKMOB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KOIEJGKMICA_MDMLAEKKIFH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KOIEJGKMICA_MHHPDOLEIIE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KOIEJGKMICA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18DF1F10)
#define KOIEJGKMICA_OLEOFHCBCNG_OFFSET UNITYSDK_OFFSET(0x757290)
#define KOIEJGKMICA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KOIEJGKMICA_TypeDefinitionIndex = 13414;

struct alignas(4) KOIEJGKMICA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIEJGKMICA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KOIEJGKMICA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* OLEOFHCBCNG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIEJGKMICA_OLEOFHCBCNG_OFFSET))(this);
	}

	::System::Int32 LMALPLOKMOB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIEJGKMICA_LMALPLOKMOB_OFFSET))(this);
	}

	::System::String* KDKJGJBCINC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIEJGKMICA_KDKJGJBCINC_OFFSET))(this);
	}

	::System::Int32 GAPFKOEALLP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIEJGKMICA_GAPFKOEALLP_OFFSET))(this);
	}

	::System::Int32 MHHPDOLEIIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIEJGKMICA_MHHPDOLEIIE_OFFSET))(this);
	}

	::System::String* BMFCDFFMOEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIEJGKMICA_BMFCDFFMOEC_OFFSET))(this);
	}

	/*
	::KOIEJGKMICA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KOIEJGKMICA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KOIEJGKMICA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Single COMLBMIAAHJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIEJGKMICA_COMLBMIAAHJ_OFFSET))(this);
	}

	::System::Int32 MDMLAEKKIFH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIEJGKMICA_MDMLAEKKIFH_OFFSET))(this);
	}

	/*
	static ::KOIEJGKMICA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KOIEJGKMICA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KOIEJGKMICA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* BIJANJAICOD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIEJGKMICA_BIJANJAICOD_OFFSET))(this);
	}
};
