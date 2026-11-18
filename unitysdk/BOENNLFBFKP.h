#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BOENNLFBFKP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BOENNLFBFKP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BOENNLFBFKP_COCBPLOBGDB_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define BOENNLFBFKP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BOENNLFBFKP_KEMMJPBPDAJ_OFFSET UNITYSDK_OFFSET(0x77ABF0)
#define BOENNLFBFKP_KHBFBCLCDLA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BOENNLFBFKP_KMMCJGHEPGI_OFFSET UNITYSDK_OFFSET(0x764220)
#define BOENNLFBFKP_NDOFJFMJJAB_OFFSET UNITYSDK_OFFSET(0x757290)
#define BOENNLFBFKP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5387B0)
#define BOENNLFBFKP_OBPHKIHJFOE_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define BOENNLFBFKP_OCHMOAIHKAD_OFFSET UNITYSDK_OFFSET(0x757A90)
#define BOENNLFBFKP_PPAFGBILMME_OFFSET UNITYSDK_OFFSET(0x754970)
#define BOENNLFBFKP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BOENNLFBFKP_TypeDefinitionIndex = 13899;

struct alignas(4) BOENNLFBFKP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOENNLFBFKP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOENNLFBFKP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 COCBPLOBGDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOENNLFBFKP_COCBPLOBGDB_OFFSET))(this);
	}

	/*
	static ::BOENNLFBFKP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BOENNLFBFKP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BOENNLFBFKP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean KEMMJPBPDAJ(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + BOENNLFBFKP_KEMMJPBPDAJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PPAFGBILMME()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOENNLFBFKP_PPAFGBILMME_OFFSET))(this);
	}

	/*
	::BOENNLFBFKP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BOENNLFBFKP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOENNLFBFKP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Single KMMCJGHEPGI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BOENNLFBFKP_KMMCJGHEPGI_OFFSET))(this);
	}

	::System::Int32 KHBFBCLCDLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOENNLFBFKP_KHBFBCLCDLA_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOENNLFBFKP_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* NDOFJFMJJAB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOENNLFBFKP_NDOFJFMJJAB_OFFSET))(this);
	}

	::System::Boolean OCHMOAIHKAD(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + BOENNLFBFKP_OCHMOAIHKAD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 OBPHKIHJFOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOENNLFBFKP_OBPHKIHJFOE_OFFSET))(this);
	}
};
