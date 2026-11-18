#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EEHKJHDNDIH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EEHKJHDNDIH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EEHKJHDNDIH_CBFABJJBIOD_OFFSET UNITYSDK_OFFSET(0x755C70)
#define EEHKJHDNDIH_CEINNDGEIHD_OFFSET UNITYSDK_OFFSET(0x756B90)
#define EEHKJHDNDIH_DMOLIELPHPA_OFFSET UNITYSDK_OFFSET(0x766740)
#define EEHKJHDNDIH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EEHKJHDNDIH_GKOKJPOPMDA_OFFSET UNITYSDK_OFFSET(0x757190)
#define EEHKJHDNDIH_HNPIFGEHMKL_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define EEHKJHDNDIH_IICIBABMACP_OFFSET UNITYSDK_OFFSET(0x755790)
#define EEHKJHDNDIH_KMHJBEEJCJL_OFFSET UNITYSDK_OFFSET(0x761710)
#define EEHKJHDNDIH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADD00E0)
#define EEHKJHDNDIH_ONLLMDIGMPA_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define EEHKJHDNDIH_PGANNIPJBCM_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define EEHKJHDNDIH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EEHKJHDNDIH_TypeDefinitionIndex = 16884;

struct alignas(4) EEHKJHDNDIH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHKJHDNDIH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EEHKJHDNDIH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CBFABJJBIOD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHKJHDNDIH_CBFABJJBIOD_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHKJHDNDIH_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 IICIBABMACP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHKJHDNDIH_IICIBABMACP_OFFSET))(this);
	}

	::System::Int32 CEINNDGEIHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHKJHDNDIH_CEINNDGEIHD_OFFSET))(this);
	}

	::System::String* KMHJBEEJCJL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHKJHDNDIH_KMHJBEEJCJL_OFFSET))(this);
	}

	::System::String* ONLLMDIGMPA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHKJHDNDIH_ONLLMDIGMPA_OFFSET))(this);
	}

	::System::Single DMOLIELPHPA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHKJHDNDIH_DMOLIELPHPA_OFFSET))(this);
	}

	::System::Boolean HNPIFGEHMKL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EEHKJHDNDIH_HNPIFGEHMKL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::EEHKJHDNDIH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EEHKJHDNDIH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EEHKJHDNDIH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EEHKJHDNDIH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EEHKJHDNDIH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EEHKJHDNDIH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* PGANNIPJBCM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHKJHDNDIH_PGANNIPJBCM_OFFSET))(this);
	}

	::System::String* GKOKJPOPMDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHKJHDNDIH_GKOKJPOPMDA_OFFSET))(this);
	}
};
