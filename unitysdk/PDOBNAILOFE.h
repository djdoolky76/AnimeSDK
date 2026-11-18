#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PDOBNAILOFE_ABPCHJMNBCI_OFFSET UNITYSDK_OFFSET(0x755A00)
#define PDOBNAILOFE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PDOBNAILOFE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PDOBNAILOFE_CKCJGANIBJI_OFFSET UNITYSDK_OFFSET(0x757330)
#define PDOBNAILOFE_EFPENCFDING_OFFSET UNITYSDK_OFFSET(0x761C30)
#define PDOBNAILOFE_FAFLCOIIIDL_OFFSET UNITYSDK_OFFSET(0x755930)
#define PDOBNAILOFE_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x755140)
#define PDOBNAILOFE_FKKCAANNMHJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define PDOBNAILOFE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PDOBNAILOFE_GKKEEOMPEGE_OFFSET UNITYSDK_OFFSET(0x757450)
#define PDOBNAILOFE_HGIIDGPCOGM_OFFSET UNITYSDK_OFFSET(0x761BD0)
#define PDOBNAILOFE_JHGBJKHCDAD_OFFSET UNITYSDK_OFFSET(0x7617E0)
#define PDOBNAILOFE_JHKGLJCDBJE_OFFSET UNITYSDK_OFFSET(0x754970)
#define PDOBNAILOFE_KMKCMMJOHHA_OFFSET UNITYSDK_OFFSET(0x754F90)
#define PDOBNAILOFE_LMPMGEBECIK_OFFSET UNITYSDK_OFFSET(0x7551E0)
#define PDOBNAILOFE_LPGBKKLKMJL_OFFSET UNITYSDK_OFFSET(0x755D20)
#define PDOBNAILOFE_NAIFCJGEBBP_OFFSET UNITYSDK_OFFSET(0x755260)
#define PDOBNAILOFE_NKHCIIBKJKI_OFFSET UNITYSDK_OFFSET(0x7A5700)
#define PDOBNAILOFE_NMDKGCEALMH_OFFSET UNITYSDK_OFFSET(0x761000)
#define PDOBNAILOFE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BABDFD0)
#define PDOBNAILOFE_OCKOGBMGJNP_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define PDOBNAILOFE_OEBELJGDNCE_OFFSET UNITYSDK_OFFSET(0x757520)
#define PDOBNAILOFE_OECIOIKGBEG_OFFSET UNITYSDK_OFFSET(0x7552C0)
#define PDOBNAILOFE_PLGIAACNHJA_OFFSET UNITYSDK_OFFSET(0x763920)
#define PDOBNAILOFE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PDOBNAILOFE_TypeDefinitionIndex = 9224;

struct alignas(4) PDOBNAILOFE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOBNAILOFE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PDOBNAILOFE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PDOBNAILOFE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PDOBNAILOFE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PDOBNAILOFE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* OEBELJGDNCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOBNAILOFE_OEBELJGDNCE_OFFSET))(this);
	}

	::System::Int32 KMKCMMJOHHA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOBNAILOFE_KMKCMMJOHHA_OFFSET))(this);
	}

	::System::Boolean LMPMGEBECIK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PDOBNAILOFE_LMPMGEBECIK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean NKHCIIBKJKI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PDOBNAILOFE_NKHCIIBKJKI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 FKKCAANNMHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOBNAILOFE_FKKCAANNMHJ_OFFSET))(this);
	}

	::System::Int32 GKKEEOMPEGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOBNAILOFE_GKKEEOMPEGE_OFFSET))(this);
	}

	::System::String* ABPCHJMNBCI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOBNAILOFE_ABPCHJMNBCI_OFFSET))(this);
	}

	::System::String* NMDKGCEALMH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOBNAILOFE_NMDKGCEALMH_OFFSET))(this);
	}

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOBNAILOFE_FJPGCNGHHCC_OFFSET))(this);
	}

	::System::Int32 CKCJGANIBJI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOBNAILOFE_CKCJGANIBJI_OFFSET))(this);
	}

	::System::Boolean PLGIAACNHJA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PDOBNAILOFE_PLGIAACNHJA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 HGIIDGPCOGM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOBNAILOFE_HGIIDGPCOGM_OFFSET))(this);
	}

	::System::Int32 JHKGLJCDBJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOBNAILOFE_JHKGLJCDBJE_OFFSET))(this);
	}

	::System::String* OCKOGBMGJNP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOBNAILOFE_OCKOGBMGJNP_OFFSET))(this);
	}

	::System::Int32 NAIFCJGEBBP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOBNAILOFE_NAIFCJGEBBP_OFFSET))(this);
	}

	::System::Int32 FAFLCOIIIDL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOBNAILOFE_FAFLCOIIIDL_OFFSET))(this);
	}

	::System::Boolean JHGBJKHCDAD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOBNAILOFE_JHGBJKHCDAD_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOBNAILOFE_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 OECIOIKGBEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOBNAILOFE_OECIOIKGBEG_OFFSET))(this);
	}

	/*
	::PDOBNAILOFE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PDOBNAILOFE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PDOBNAILOFE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LPGBKKLKMJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOBNAILOFE_LPGBKKLKMJL_OFFSET))(this);
	}

	::System::Boolean EFPENCFDING(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PDOBNAILOFE_EFPENCFDING_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
