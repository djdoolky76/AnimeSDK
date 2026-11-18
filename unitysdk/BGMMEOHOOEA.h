#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define BGMMEOHOOEA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BGMMEOHOOEA_ALEELPICCHK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BGMMEOHOOEA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BGMMEOHOOEA_DMOLIELPHPA_OFFSET UNITYSDK_OFFSET(0x7A5B80)
#define BGMMEOHOOEA_EINJBNFNDFD_OFFSET UNITYSDK_OFFSET(0x756720)
#define BGMMEOHOOEA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BGMMEOHOOEA_GIJPJCFDKNG_OFFSET UNITYSDK_OFFSET(0x7E3690)
#define BGMMEOHOOEA_HLGJCMDCOIC_OFFSET UNITYSDK_OFFSET(0x77ABF0)
#define BGMMEOHOOEA_JNHOBGAJHPI_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define BGMMEOHOOEA_KKJNDKODFGM_OFFSET UNITYSDK_OFFSET(0x7E9D80)
#define BGMMEOHOOEA_MFELCAGGAOH_OFFSET UNITYSDK_OFFSET(0x754D50)
#define BGMMEOHOOEA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19AC4760)
#define BGMMEOHOOEA_PPAFGBILMME_OFFSET UNITYSDK_OFFSET(0x7666A0)
#define BGMMEOHOOEA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BGMMEOHOOEA_TypeDefinitionIndex = 12317;

struct alignas(4) BGMMEOHOOEA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMMEOHOOEA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BGMMEOHOOEA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ALEELPICCHK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMMEOHOOEA_ALEELPICCHK_OFFSET))(this);
	}

	::System::Int32 EINJBNFNDFD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMMEOHOOEA_EINJBNFNDFD_OFFSET))(this);
	}

	/*
	static ::BGMMEOHOOEA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BGMMEOHOOEA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BGMMEOHOOEA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::BGMMEOHOOEA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BGMMEOHOOEA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BGMMEOHOOEA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean HLGJCMDCOIC(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + BGMMEOHOOEA_HLGJCMDCOIC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean GIJPJCFDKNG(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + BGMMEOHOOEA_GIJPJCFDKNG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Single DMOLIELPHPA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMMEOHOOEA_DMOLIELPHPA_OFFSET))(this);
	}

	::System::Int32 MFELCAGGAOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMMEOHOOEA_MFELCAGGAOH_OFFSET))(this);
	}

	::System::Boolean KKJNDKODFGM(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + BGMMEOHOOEA_KKJNDKODFGM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMMEOHOOEA_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 JNHOBGAJHPI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMMEOHOOEA_JNHOBGAJHPI_OFFSET))(this);
	}

	::System::Single PPAFGBILMME()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMMEOHOOEA_PPAFGBILMME_OFFSET))(this);
	}
};
