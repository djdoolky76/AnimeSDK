#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class EBNPOEHOAGD;
class PDLAGKINJNL;
namespace System::Collections { class IList; }
template <typename T> class KCMIFNGABDC_1;

#define ECNKLMHCGEO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14140E90)
#define ECNKLMHCGEO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14140CE0)
#define ECNKLMHCGEO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x141419F0)
#define ECNKLMHCGEO_JHMBMAOJPCB_OFFSET UNITYSDK_OFFSET(0x14141060)
#define ECNKLMHCGEO_NBDLMLCDOOJ_OFFSET UNITYSDK_OFFSET(0x14141300)
#define ECNKLMHCGEO_NGHNHLDGNOF_OFFSET UNITYSDK_OFFSET(0x14141630)
#define ECNKLMHCGEO_NNDBEPHGALG_OFFSET UNITYSDK_OFFSET(0x14141A80)
#define ECNKLMHCGEO__CTOR_OFFSET UNITYSDK_OFFSET(0x14141200)

inline static constexpr unsigned int ECNKLMHCGEO_TypeDefinitionIndex = 76425;

class ECNKLMHCGEO : public ::CGJEMKCKIJG
{
public:
	::EBNPOEHOAGD* NKFLIDADFHN; // 0x18
	::PDLAGKINJNL* FFPKMPPCMOC; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* JALLPICFAED; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* KIOCDHHFFCL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNKLMHCGEO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNKLMHCGEO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ECNKLMHCGEO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	static ::System::Collections::IList* JHMBMAOJPCB(::System::Collections::IList* KHGFAKJKDGG, ::System::Int32 KBNHAJHPKPO, ::System::Boolean IADKHDFBEIB)
	{
		return ((::System::Collections::IList*(*)(::System::Collections::IList*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ECNKLMHCGEO_JHMBMAOJPCB_OFFSET))(KHGFAKJKDGG, KBNHAJHPKPO, IADKHDFBEIB);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNKLMHCGEO_GDEOPIBNOIN_OFFSET))(this);
	}

	static ::System::Void NGHNHLDGNOF(::System::Collections::IList* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::System::Collections::IList*))((::PBYTE)hIl2Cpp + ECNKLMHCGEO_NGHNHLDGNOF_OFFSET))(DJLOKMMLFJC);
	}

	static ::System::Void NBDLMLCDOOJ(::System::Collections::IList* KHGFAKJKDGG, ::System::Collections::IList* HODAIDNDKHD, ::System::Int32 KBNHAJHPKPO)
	{
		return ((::System::Void(*)(::System::Collections::IList*, ::System::Collections::IList*, ::System::Int32))((::PBYTE)hIl2Cpp + ECNKLMHCGEO_NBDLMLCDOOJ_OFFSET))(KHGFAKJKDGG, HODAIDNDKHD, KBNHAJHPKPO);
	}

	static ::System::Void NNDBEPHGALG(::System::Collections::IList* KHGFAKJKDGG, ::System::Collections::IList* HODAIDNDKHD, ::System::Int32 KBNHAJHPKPO)
	{
		return ((::System::Void(*)(::System::Collections::IList*, ::System::Collections::IList*, ::System::Int32))((::PBYTE)hIl2Cpp + ECNKLMHCGEO_NNDBEPHGALG_OFFSET))(KHGFAKJKDGG, HODAIDNDKHD, KBNHAJHPKPO);
	}
};
