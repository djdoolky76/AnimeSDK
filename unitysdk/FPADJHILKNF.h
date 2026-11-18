#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FPADJHILKNF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FPADJHILKNF_GDEDEJDDEJE_OFFSET UNITYSDK_OFFSET(0x761240)
#define FPADJHILKNF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FPADJHILKNF_GOMEICIMLCN_OFFSET UNITYSDK_OFFSET(0x7612A0)
#define FPADJHILKNF_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define FPADJHILKNF_IMFELMMICNE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FPADJHILKNF_JEADKJAHBKI_OFFSET UNITYSDK_OFFSET(0x755D20)
#define FPADJHILKNF_LIMHOINKFHA_OFFSET UNITYSDK_OFFSET(0x754920)
#define FPADJHILKNF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18B9ECA0)
#define FPADJHILKNF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FPADJHILKNF_TypeDefinitionIndex = 11218;

struct alignas(4) FPADJHILKNF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPADJHILKNF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FPADJHILKNF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LIMHOINKFHA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPADJHILKNF_LIMHOINKFHA_OFFSET))(this);
	}

	/*
	::FPADJHILKNF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FPADJHILKNF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FPADJHILKNF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IMFELMMICNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPADJHILKNF_IMFELMMICNE_OFFSET))(this);
	}

	::System::Boolean GOMEICIMLCN(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + FPADJHILKNF_GOMEICIMLCN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 JEADKJAHBKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPADJHILKNF_JEADKJAHBKI_OFFSET))(this);
	}

	/*
	static ::FPADJHILKNF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FPADJHILKNF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FPADJHILKNF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPADJHILKNF_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 GDEDEJDDEJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPADJHILKNF_GDEDEJDDEJE_OFFSET))(this);
	}
};
