#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NEOGDJAKOKD_ACEONKLAFDI_OFFSET UNITYSDK_OFFSET(0x756D50)
#define NEOGDJAKOKD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NEOGDJAKOKD_BLDBNKJKGPH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NEOGDJAKOKD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NEOGDJAKOKD_NKPAIJFGECO_OFFSET UNITYSDK_OFFSET(0x755A00)
#define NEOGDJAKOKD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x191173E0)
#define NEOGDJAKOKD_OBPPADKHAEJ_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NEOGDJAKOKD_ODHGMOLOPCA_OFFSET UNITYSDK_OFFSET(0x756B10)
#define NEOGDJAKOKD_ONGLFGGFHMF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NEOGDJAKOKD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NEOGDJAKOKD_TypeDefinitionIndex = 16432;

struct alignas(4) NEOGDJAKOKD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOGDJAKOKD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NEOGDJAKOKD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* BLDBNKJKGPH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOGDJAKOKD_BLDBNKJKGPH_OFFSET))(this);
	}

	/*
	static ::NEOGDJAKOKD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NEOGDJAKOKD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NEOGDJAKOKD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* NKPAIJFGECO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOGDJAKOKD_NKPAIJFGECO_OFFSET))(this);
	}

	::System::String* ACEONKLAFDI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOGDJAKOKD_ACEONKLAFDI_OFFSET))(this);
	}

	::System::Int32 ONGLFGGFHMF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOGDJAKOKD_ONGLFGGFHMF_OFFSET))(this);
	}

	/*
	::NEOGDJAKOKD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NEOGDJAKOKD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NEOGDJAKOKD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* ODHGMOLOPCA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOGDJAKOKD_ODHGMOLOPCA_OFFSET))(this);
	}

	::System::String* OBPPADKHAEJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOGDJAKOKD_OBPPADKHAEJ_OFFSET))(this);
	}
};
