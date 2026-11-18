#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KHKFIFCGOPG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KHKFIFCGOPG_AHPCIOIIDML_OFFSET UNITYSDK_OFFSET(0x763D90)
#define KHKFIFCGOPG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KHKFIFCGOPG_CBFABJJBIOD_OFFSET UNITYSDK_OFFSET(0x760910)
#define KHKFIFCGOPG_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x757E20)
#define KHKFIFCGOPG_DENCIMLDOCI_OFFSET UNITYSDK_OFFSET(0x7631A0)
#define KHKFIFCGOPG_FJOLPGBLBBH_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define KHKFIFCGOPG_GCCHOADAIJI_OFFSET UNITYSDK_OFFSET(0x755190)
#define KHKFIFCGOPG_GEALJMDJHNC_OFFSET UNITYSDK_OFFSET(0x756140)
#define KHKFIFCGOPG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KHKFIFCGOPG_IMCCIHKBAHI_OFFSET UNITYSDK_OFFSET(0x755140)
#define KHKFIFCGOPG_INGFEHBHLPI_OFFSET UNITYSDK_OFFSET(0x754920)
#define KHKFIFCGOPG_JIKHODMEBOA_OFFSET UNITYSDK_OFFSET(0x755C70)
#define KHKFIFCGOPG_KIMIEGIIDGK_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KHKFIFCGOPG_LNNNEICICGB_OFFSET UNITYSDK_OFFSET(0x757450)
#define KHKFIFCGOPG_MEGCMHDHFEM_OFFSET UNITYSDK_OFFSET(0x7561C0)
#define KHKFIFCGOPG_NAHGOLIIIJK_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define KHKFIFCGOPG_NBLDHOEPBIC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KHKFIFCGOPG_NEADEEJAJCO_OFFSET UNITYSDK_OFFSET(0x757A30)
#define KHKFIFCGOPG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KHKFIFCGOPG_TypeDefinitionIndex = 12383;

struct alignas(4) KHKFIFCGOPG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKFIFCGOPG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHKFIFCGOPG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MEGCMHDHFEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKFIFCGOPG_MEGCMHDHFEM_OFFSET))(this);
	}

	::System::Int32 NBLDHOEPBIC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKFIFCGOPG_NBLDHOEPBIC_OFFSET))(this);
	}

	::System::Int32 JIKHODMEBOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKFIFCGOPG_JIKHODMEBOA_OFFSET))(this);
	}

	::System::Int32 KIMIEGIIDGK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKFIFCGOPG_KIMIEGIIDGK_OFFSET))(this);
	}

	::System::Int32 FJOLPGBLBBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKFIFCGOPG_FJOLPGBLBBH_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKFIFCGOPG_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 LNNNEICICGB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKFIFCGOPG_LNNNEICICGB_OFFSET))(this);
	}

	::System::Int32 INGFEHBHLPI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKFIFCGOPG_INGFEHBHLPI_OFFSET))(this);
	}

	::System::Int32 IMCCIHKBAHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKFIFCGOPG_IMCCIHKBAHI_OFFSET))(this);
	}

	::System::Int32 CBFABJJBIOD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKFIFCGOPG_CBFABJJBIOD_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKFIFCGOPG_DECMGICKDLH_OFFSET))(this);
	}

	::System::Int32 DENCIMLDOCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKFIFCGOPG_DENCIMLDOCI_OFFSET))(this);
	}

	::System::Boolean AHPCIOIIDML(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KHKFIFCGOPG_AHPCIOIIDML_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NAHGOLIIIJK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKFIFCGOPG_NAHGOLIIIJK_OFFSET))(this);
	}

	::System::Int32 GCCHOADAIJI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKFIFCGOPG_GCCHOADAIJI_OFFSET))(this);
	}

	/*
	::KHKFIFCGOPG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KHKFIFCGOPG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHKFIFCGOPG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean GEALJMDJHNC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KHKFIFCGOPG_GEALJMDJHNC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NEADEEJAJCO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKFIFCGOPG_NEADEEJAJCO_OFFSET))(this);
	}
};
