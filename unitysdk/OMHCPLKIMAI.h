#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OMHCPLKIMAI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OMHCPLKIMAI_AGEGMEEGFFC_OFFSET UNITYSDK_OFFSET(0x757330)
#define OMHCPLKIMAI_AIJBOJDHBBH_OFFSET UNITYSDK_OFFSET(0x763920)
#define OMHCPLKIMAI_BDNHODOCNAA_OFFSET UNITYSDK_OFFSET(0x758320)
#define OMHCPLKIMAI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OMHCPLKIMAI_DFPKLCKMHJM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OMHCPLKIMAI_EFFBHHELIDG_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define OMHCPLKIMAI_EGGLHJJGCHM_OFFSET UNITYSDK_OFFSET(0x755C70)
#define OMHCPLKIMAI_GCNHJNMJFBG_OFFSET UNITYSDK_OFFSET(0x758780)
#define OMHCPLKIMAI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OMHCPLKIMAI_GJDJIIPLCLP_OFFSET UNITYSDK_OFFSET(0x763D90)
#define OMHCPLKIMAI_GLBFBMFNGIJ_OFFSET UNITYSDK_OFFSET(0x7552C0)
#define OMHCPLKIMAI_GOPAOBCNFLJ_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define OMHCPLKIMAI_HGOPJHOLGEO_OFFSET UNITYSDK_OFFSET(0x7551E0)
#define OMHCPLKIMAI_JHKGLJCDBJE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define OMHCPLKIMAI_KJJOFKKNKMG_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define OMHCPLKIMAI_LABBPAOONKA_OFFSET UNITYSDK_OFFSET(0x7624E0)
#define OMHCPLKIMAI_LBLEAJLAKDG_OFFSET UNITYSDK_OFFSET(0x755320)
#define OMHCPLKIMAI_MCBKKOBAJPN_OFFSET UNITYSDK_OFFSET(0x754970)
#define OMHCPLKIMAI_MIHCCIFCKPH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define OMHCPLKIMAI_MMEHFFAOPGB_OFFSET UNITYSDK_OFFSET(0x762FE0)
#define OMHCPLKIMAI_NBHELJMLFBO_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define OMHCPLKIMAI_NIOLACCPKHH_OFFSET UNITYSDK_OFFSET(0x756B10)
#define OMHCPLKIMAI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x195C9400)
#define OMHCPLKIMAI_OIHLCDMCHDI_OFFSET UNITYSDK_OFFSET(0x757A30)
#define OMHCPLKIMAI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OMHCPLKIMAI_TypeDefinitionIndex = 11649;

struct alignas(4) OMHCPLKIMAI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHCPLKIMAI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMHCPLKIMAI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 EFFBHHELIDG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHCPLKIMAI_EFFBHHELIDG_OFFSET))(this);
	}

	::System::Int32 KJJOFKKNKMG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHCPLKIMAI_KJJOFKKNKMG_OFFSET))(this);
	}

	::System::Int32 LBLEAJLAKDG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHCPLKIMAI_LBLEAJLAKDG_OFFSET))(this);
	}

	::System::String* NIOLACCPKHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHCPLKIMAI_NIOLACCPKHH_OFFSET))(this);
	}

	::System::Int32 AGEGMEEGFFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHCPLKIMAI_AGEGMEEGFFC_OFFSET))(this);
	}

	::System::Boolean GJDJIIPLCLP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OMHCPLKIMAI_GJDJIIPLCLP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::OMHCPLKIMAI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OMHCPLKIMAI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OMHCPLKIMAI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 MCBKKOBAJPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHCPLKIMAI_MCBKKOBAJPN_OFFSET))(this);
	}

	::System::Boolean AIJBOJDHBBH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OMHCPLKIMAI_AIJBOJDHBBH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GCNHJNMJFBG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHCPLKIMAI_GCNHJNMJFBG_OFFSET))(this);
	}

	::System::Int32 MMEHFFAOPGB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHCPLKIMAI_MMEHFFAOPGB_OFFSET))(this);
	}

	::System::String* NBHELJMLFBO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHCPLKIMAI_NBHELJMLFBO_OFFSET))(this);
	}

	::System::Int32 EGGLHJJGCHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHCPLKIMAI_EGGLHJJGCHM_OFFSET))(this);
	}

	::System::Int32 GLBFBMFNGIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHCPLKIMAI_GLBFBMFNGIJ_OFFSET))(this);
	}

	::System::Int32 OIHLCDMCHDI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHCPLKIMAI_OIHLCDMCHDI_OFFSET))(this);
	}

	::System::Boolean HGOPJHOLGEO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OMHCPLKIMAI_HGOPJHOLGEO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 JHKGLJCDBJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHCPLKIMAI_JHKGLJCDBJE_OFFSET))(this);
	}

	::System::Int32 DFPKLCKMHJM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHCPLKIMAI_DFPKLCKMHJM_OFFSET))(this);
	}

	::System::Int32 GOPAOBCNFLJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHCPLKIMAI_GOPAOBCNFLJ_OFFSET))(this);
	}

	::System::String* MIHCCIFCKPH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHCPLKIMAI_MIHCCIFCKPH_OFFSET))(this);
	}

	::System::Boolean LABBPAOONKA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHCPLKIMAI_LABBPAOONKA_OFFSET))(this);
	}

	/*
	::OMHCPLKIMAI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OMHCPLKIMAI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMHCPLKIMAI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHCPLKIMAI_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* BDNHODOCNAA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHCPLKIMAI_BDNHODOCNAA_OFFSET))(this);
	}
};
