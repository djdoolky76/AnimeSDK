#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CPCOBJDFEPN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CPCOBJDFEPN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CPCOBJDFEPN_CJBMHNCHNHO_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define CPCOBJDFEPN_DFOPHIDDNAD_OFFSET UNITYSDK_OFFSET(0x754970)
#define CPCOBJDFEPN_DGKDKHIBMOG_OFFSET UNITYSDK_OFFSET(0x756220)
#define CPCOBJDFEPN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CPCOBJDFEPN_GPHPKFDJOIO_OFFSET UNITYSDK_OFFSET(0x756780)
#define CPCOBJDFEPN_JHKGLJCDBJE_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define CPCOBJDFEPN_JIMBCOANCEH_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define CPCOBJDFEPN_KPDGMKDDMAM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CPCOBJDFEPN_LDDDOAHMPHK_OFFSET UNITYSDK_OFFSET(0x756570)
#define CPCOBJDFEPN_MEAKGMCFGAL_OFFSET UNITYSDK_OFFSET(0x757290)
#define CPCOBJDFEPN_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x756B90)
#define CPCOBJDFEPN_NHLEBCNGAND_OFFSET UNITYSDK_OFFSET(0x7A6880)
#define CPCOBJDFEPN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19BFD0E0)
#define CPCOBJDFEPN_OBOJBCMLCJM_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define CPCOBJDFEPN_OEBELJGDNCE_OFFSET UNITYSDK_OFFSET(0x754F10)
#define CPCOBJDFEPN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CPCOBJDFEPN_TypeDefinitionIndex = 14291;

struct alignas(4) CPCOBJDFEPN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCOBJDFEPN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPCOBJDFEPN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DGKDKHIBMOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCOBJDFEPN_DGKDKHIBMOG_OFFSET))(this);
	}

	::System::Int32 JHKGLJCDBJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCOBJDFEPN_JHKGLJCDBJE_OFFSET))(this);
	}

	::System::String* CJBMHNCHNHO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCOBJDFEPN_CJBMHNCHNHO_OFFSET))(this);
	}

	::System::Int32 OBOJBCMLCJM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCOBJDFEPN_OBOJBCMLCJM_OFFSET))(this);
	}

	/*
	static ::CPCOBJDFEPN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CPCOBJDFEPN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CPCOBJDFEPN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCOBJDFEPN_NFKFHJBEPGD_OFFSET))(this);
	}

	::System::Int32 JIMBCOANCEH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCOBJDFEPN_JIMBCOANCEH_OFFSET))(this);
	}

	::System::Boolean LDDDOAHMPHK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CPCOBJDFEPN_LDDDOAHMPHK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean NHLEBCNGAND()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCOBJDFEPN_NHLEBCNGAND_OFFSET))(this);
	}

	::System::String* MEAKGMCFGAL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCOBJDFEPN_MEAKGMCFGAL_OFFSET))(this);
	}

	::System::String* OEBELJGDNCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCOBJDFEPN_OEBELJGDNCE_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCOBJDFEPN_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean GPHPKFDJOIO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CPCOBJDFEPN_GPHPKFDJOIO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 DFOPHIDDNAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCOBJDFEPN_DFOPHIDDNAD_OFFSET))(this);
	}

	::System::Int32 KPDGMKDDMAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCOBJDFEPN_KPDGMKDDMAM_OFFSET))(this);
	}

	/*
	::CPCOBJDFEPN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CPCOBJDFEPN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPCOBJDFEPN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
