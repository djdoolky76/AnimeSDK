#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KAJAGPBJADH_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x155D5F60)
#define KAJAGPBJADH_BMGJAHDEHIE_OFFSET UNITYSDK_OFFSET(0x155D6380)
#define KAJAGPBJADH_CKDAAPIOOFN_OFFSET UNITYSDK_OFFSET(0x155D61D0)
#define KAJAGPBJADH_DCAKNGIDIFL_OFFSET UNITYSDK_OFFSET(0x155D60C0)
#define KAJAGPBJADH_FCDNIIBPFAL_OFFSET UNITYSDK_OFFSET(0x155D6D80)
#define KAJAGPBJADH_IKFCOPBEPEL_OFFSET UNITYSDK_OFFSET(0x155D6730)
#define KAJAGPBJADH_JNBGBKMJGAG_OFFSET UNITYSDK_OFFSET(0x155D6B70)
#define KAJAGPBJADH_KDAKHBHMOGF_OFFSET UNITYSDK_OFFSET(0x155D6490)
#define KAJAGPBJADH_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x155D6050)
#define KAJAGPBJADH_NONMGDMHHIC_OFFSET UNITYSDK_OFFSET(0x155D6C70)
#define KAJAGPBJADH_OBBPBBMKJHO_OFFSET UNITYSDK_OFFSET(0x155D69A0)
#define KAJAGPBJADH_OOCEDMJNLAF_OFFSET UNITYSDK_OFFSET(0x155D6280)
#define KAJAGPBJADH__CTOR_OFFSET UNITYSDK_OFFSET(0x155D6040)

inline static constexpr unsigned int KAJAGPBJADH_TypeDefinitionIndex = 58288;

class KAJAGPBJADH : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* ADBPCFFEBPL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ADHPAFILMHJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJAGPBJADH__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJAGPBJADH_BEFORERECYCLE_OFFSET))(this);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJAGPBJADH_NGFKBKCFPLK_OFFSET))(this);
	}

	::System::Boolean DCAKNGIDIFL(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KAJAGPBJADH_DCAKNGIDIFL_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Boolean CKDAAPIOOFN(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KAJAGPBJADH_CKDAAPIOOFN_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Boolean OOCEDMJNLAF(::System::String* MCOHLHMKLIP, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + KAJAGPBJADH_OOCEDMJNLAF_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN);
	}

	::System::Boolean BMGJAHDEHIE(::System::String* MCOHLHMKLIP, ::System::Double& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Double&))((::PBYTE)hIl2Cpp + KAJAGPBJADH_BMGJAHDEHIE_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN);
	}

	::KAJAGPBJADH* KDAKHBHMOGF()
	{
		return ((::KAJAGPBJADH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJAGPBJADH_KDAKHBHMOGF_OFFSET))(this);
	}

	::System::Void JNBGBKMJGAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJAGPBJADH_JNBGBKMJGAG_OFFSET))(this);
	}

	::System::Boolean OBBPBBMKJHO(::System::String* MCOHLHMKLIP, ::System::String* EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + KAJAGPBJADH_OBBPBBMKJHO_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN);
	}

	::System::Boolean NONMGDMHHIC(::System::String* MCOHLHMKLIP, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + KAJAGPBJADH_NONMGDMHHIC_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN);
	}

	::System::Boolean FCDNIIBPFAL(::System::String* MCOHLHMKLIP, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + KAJAGPBJADH_FCDNIIBPFAL_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN);
	}

	::System::Boolean IKFCOPBEPEL(::System::String* MCOHLHMKLIP, ::System::Double EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + KAJAGPBJADH_IKFCOPBEPEL_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN);
	}
};
