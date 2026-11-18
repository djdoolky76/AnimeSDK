#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class AppVersion; }
namespace Foundation { class VersionFileInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HGAIFFNBMHC_DIEPMAHEJPM_OFFSET UNITYSDK_OFFSET(0x1EA7EF40)
#define HGAIFFNBMHC_FMIPPEIDFAF_OFFSET UNITYSDK_OFFSET(0x1EA7EE90)
#define HGAIFFNBMHC_JICAHGKGBIJ_OFFSET UNITYSDK_OFFSET(0x1EA7F010)
#define HGAIFFNBMHC_LHEOHKIMGAK_OFFSET UNITYSDK_OFFSET(0x1EA7F170)
#define HGAIFFNBMHC_LILEFHGPFKI_OFFSET UNITYSDK_OFFSET(0x1EA7F0C0)
#define HGAIFFNBMHC_MBAOBMHDCJJ_OFFSET UNITYSDK_OFFSET(0x1EA7ED10)
#define HGAIFFNBMHC_PJICIJKDEAG_OFFSET UNITYSDK_OFFSET(0x1EA7F180)
#define HGAIFFNBMHC_PNFCBOCADHC_OFFSET UNITYSDK_OFFSET(0x1EA7EC10)
#define HGAIFFNBMHC__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA7EB80)

inline static constexpr unsigned int HGAIFFNBMHC_TypeDefinitionIndex = 8702;

class HGAIFFNBMHC : public ::System::Object
{
public:
	// static const ::System::String* EDKPBANFIGB; // 0x0
	::System::String* KGLMJIIFMKH; // 0x10
	::System::String* FKPFLHNGDBF; // 0x18
	::System::String* KACJKAHEFGH; // 0x20
	::System::String* MOCNLLDDHFA; // 0x28
	::System::String* OCJCEHILCOK; // 0x30
	::System::Collections::Generic::List_1<::Foundation::VersionFileInfo*>* HFNFJHIBOHI; // 0x38
	::System::String* CLALGMCKKIL; // 0x40
	::System::String* _KMNDECFMINM_k__BackingField; // 0x48
	::Foundation::AppVersion* FPEBFENCFIB; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAIFFNBMHC__CTOR_OFFSET))(this);
	}

	::System::String* FMIPPEIDFAF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAIFFNBMHC_FMIPPEIDFAF_OFFSET))(this);
	}

	::System::String* DIEPMAHEJPM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAIFFNBMHC_DIEPMAHEJPM_OFFSET))(this);
	}

	::System::Void PNFCBOCADHC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAIFFNBMHC_PNFCBOCADHC_OFFSET))(this);
	}

	::System::String* JICAHGKGBIJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAIFFNBMHC_JICAHGKGBIJ_OFFSET))(this);
	}

	::System::String* LILEFHGPFKI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAIFFNBMHC_LILEFHGPFKI_OFFSET))(this);
	}

	::System::String* LHEOHKIMGAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAIFFNBMHC_LHEOHKIMGAK_OFFSET))(this);
	}

	::System::Void PJICIJKDEAG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HGAIFFNBMHC_PJICIJKDEAG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MBAOBMHDCJJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAIFFNBMHC_MBAOBMHDCJJ_OFFSET))(this);
	}
};
