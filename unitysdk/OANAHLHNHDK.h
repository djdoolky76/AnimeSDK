#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OANAHLHNHDK_AEHKAIHLAGJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define OANAHLHNHDK_AIBJDPAHEKI_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OANAHLHNHDK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OANAHLHNHDK_BHOCGBENING_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OANAHLHNHDK_FBCPINCKHBD_OFFSET UNITYSDK_OFFSET(0x754F10)
#define OANAHLHNHDK_FMKDFIGMLMH_OFFSET UNITYSDK_OFFSET(0x756D50)
#define OANAHLHNHDK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OANAHLHNHDK_JAEHFEGFJOO_OFFSET UNITYSDK_OFFSET(0x757290)
#define OANAHLHNHDK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1D0CFA80)
#define OANAHLHNHDK_PEFLCCDCFHB_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define OANAHLHNHDK_PEGKIDPLJPD_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define OANAHLHNHDK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OANAHLHNHDK_TypeDefinitionIndex = 17636;

struct alignas(4) OANAHLHNHDK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OANAHLHNHDK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OANAHLHNHDK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* FBCPINCKHBD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OANAHLHNHDK_FBCPINCKHBD_OFFSET))(this);
	}

	::System::String* JAEHFEGFJOO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OANAHLHNHDK_JAEHFEGFJOO_OFFSET))(this);
	}

	/*
	static ::OANAHLHNHDK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OANAHLHNHDK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OANAHLHNHDK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 AIBJDPAHEKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OANAHLHNHDK_AIBJDPAHEKI_OFFSET))(this);
	}

	::System::Int32 BHOCGBENING()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OANAHLHNHDK_BHOCGBENING_OFFSET))(this);
	}

	/*
	::OANAHLHNHDK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OANAHLHNHDK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OANAHLHNHDK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 AEHKAIHLAGJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OANAHLHNHDK_AEHKAIHLAGJ_OFFSET))(this);
	}

	::System::String* PEFLCCDCFHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OANAHLHNHDK_PEFLCCDCFHB_OFFSET))(this);
	}

	::System::String* FMKDFIGMLMH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OANAHLHNHDK_FMKDFIGMLMH_OFFSET))(this);
	}

	::System::String* PEGKIDPLJPD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OANAHLHNHDK_PEGKIDPLJPD_OFFSET))(this);
	}
};
