#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HCGDMEADJCA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HCGDMEADJCA_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HCGDMEADJCA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HCGDMEADJCA_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754920)
#define HCGDMEADJCA_IKMEOKGAEPG_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HCGDMEADJCA_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x756B90)
#define HCGDMEADJCA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x166563C0)
#define HCGDMEADJCA_ODKLDGDHHGP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define HCGDMEADJCA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HCGDMEADJCA_TypeDefinitionIndex = 9662;

struct alignas(4) HCGDMEADJCA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGDMEADJCA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCGDMEADJCA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* ODKLDGDHHGP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGDMEADJCA_ODKLDGDHHGP_OFFSET))(this);
	}

	/*
	static ::HCGDMEADJCA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HCGDMEADJCA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HCGDMEADJCA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGDMEADJCA_DGFAJDNHCIJ_OFFSET))(this);
	}

	/*
	::HCGDMEADJCA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCGDMEADJCA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCGDMEADJCA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGDMEADJCA_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Int32 IKMEOKGAEPG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGDMEADJCA_IKMEOKGAEPG_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGDMEADJCA_HKELPCLHLEC_OFFSET))(this);
	}
};
