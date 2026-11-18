#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NJPMFCGOGKA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NJPMFCGOGKA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NJPMFCGOGKA_CKNPDAJMFAE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define NJPMFCGOGKA_GBOLDFJEGEO_OFFSET UNITYSDK_OFFSET(0x758780)
#define NJPMFCGOGKA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NJPMFCGOGKA_NLAIFNFGGMA_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define NJPMFCGOGKA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BF70250)
#define NJPMFCGOGKA_OCOHAEFEKHH_OFFSET UNITYSDK_OFFSET(0x754920)
#define NJPMFCGOGKA_OKGKODNEICJ_OFFSET UNITYSDK_OFFSET(0x754970)
#define NJPMFCGOGKA_PHALDLDFONO_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define NJPMFCGOGKA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NJPMFCGOGKA_TypeDefinitionIndex = 11022;

struct alignas(4) NJPMFCGOGKA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPMFCGOGKA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJPMFCGOGKA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NJPMFCGOGKA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NJPMFCGOGKA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJPMFCGOGKA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NJPMFCGOGKA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NJPMFCGOGKA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NJPMFCGOGKA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPMFCGOGKA_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 OCOHAEFEKHH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPMFCGOGKA_OCOHAEFEKHH_OFFSET))(this);
	}

	::System::Int32 OKGKODNEICJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPMFCGOGKA_OKGKODNEICJ_OFFSET))(this);
	}

	::System::Int32 NLAIFNFGGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPMFCGOGKA_NLAIFNFGGMA_OFFSET))(this);
	}

	::System::Int32 GBOLDFJEGEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPMFCGOGKA_GBOLDFJEGEO_OFFSET))(this);
	}

	::System::Int32 CKNPDAJMFAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPMFCGOGKA_CKNPDAJMFAE_OFFSET))(this);
	}

	::System::String* PHALDLDFONO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPMFCGOGKA_PHALDLDFONO_OFFSET))(this);
	}
};
