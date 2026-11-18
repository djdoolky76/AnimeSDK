#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PNGJCJNECEP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PNGJCJNECEP_AKFOJHFNJJE_OFFSET UNITYSDK_OFFSET(0x7AC220)
#define PNGJCJNECEP_BANPLJBAEFK_OFFSET UNITYSDK_OFFSET(0x761360)
#define PNGJCJNECEP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PNGJCJNECEP_CEFLCNFNBDK_OFFSET UNITYSDK_OFFSET(0x7F5D10)
#define PNGJCJNECEP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PNGJCJNECEP_HIECFEHHPOG_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define PNGJCJNECEP_ICEIDGKGAME_OFFSET UNITYSDK_OFFSET(0x7612A0)
#define PNGJCJNECEP_KFDFEHPHNFJ_OFFSET UNITYSDK_OFFSET(0x755790)
#define PNGJCJNECEP_MPMPLOJCNAJ_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define PNGJCJNECEP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BF93830)
#define PNGJCJNECEP_PJJHFMEEBHF_OFFSET UNITYSDK_OFFSET(0x761240)
#define PNGJCJNECEP_PKMCJMIFMDO_OFFSET UNITYSDK_OFFSET(0x756B90)
#define PNGJCJNECEP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PNGJCJNECEP_TypeDefinitionIndex = 13660;

struct alignas(4) PNGJCJNECEP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGJCJNECEP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNGJCJNECEP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean AKFOJHFNJJE(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + PNGJCJNECEP_AKFOJHFNJJE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::PNGJCJNECEP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNGJCJNECEP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNGJCJNECEP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MPMPLOJCNAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGJCJNECEP_MPMPLOJCNAJ_OFFSET))(this);
	}

	/*
	static ::PNGJCJNECEP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 JGKNCPMELON, ::System::Int32 NPKGPFOHELJ, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PNGJCJNECEP(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PNGJCJNECEP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, JGKNCPMELON, NPKGPFOHELJ, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 KFDFEHPHNFJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGJCJNECEP_KFDFEHPHNFJ_OFFSET))(this);
	}

	::System::Boolean BANPLJBAEFK(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + PNGJCJNECEP_BANPLJBAEFK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PJJHFMEEBHF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGJCJNECEP_PJJHFMEEBHF_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGJCJNECEP_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 PKMCJMIFMDO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGJCJNECEP_PKMCJMIFMDO_OFFSET))(this);
	}

	::System::Int32 HIECFEHHPOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGJCJNECEP_HIECFEHHPOG_OFFSET))(this);
	}

	::System::Boolean ICEIDGKGAME(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + PNGJCJNECEP_ICEIDGKGAME_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean CEFLCNFNBDK(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + PNGJCJNECEP_CEFLCNFNBDK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
