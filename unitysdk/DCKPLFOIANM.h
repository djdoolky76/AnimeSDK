#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBNJMPLPMDN.h"
#include "unitysdk/JGGGPPLICEA.h"

namespace System { class String; }
template <typename T> class BFMLEHMAGAK_1;

#define DCKPLFOIANM_AFMMCLGMANA_OFFSET UNITYSDK_OFFSET(0x1832A3B0)
#define DCKPLFOIANM_CBFNMKEGGLH_OFFSET UNITYSDK_OFFSET(0x1832AB50)
#define DCKPLFOIANM_CPIKCLFBOJK_OFFSET UNITYSDK_OFFSET(0x1832A380)
#define DCKPLFOIANM_GFCMLEOFMPN_OFFSET UNITYSDK_OFFSET(0x1832A810)
#define DCKPLFOIANM_GKLEFBEKJHD_OFFSET UNITYSDK_OFFSET(0x1832A9B0)
#define DCKPLFOIANM_HPCFPGDGCHI_OFFSET UNITYSDK_OFFSET(0x1832A610)
#define DCKPLFOIANM_IHJPFOFAJDI_OFFSET UNITYSDK_OFFSET(0x18329AB0)
#define DCKPLFOIANM_KDHMMKKNNPC_OFFSET UNITYSDK_OFFSET(0x1832A800)
#define DCKPLFOIANM_LNPIDMNIJJC_OFFSET UNITYSDK_OFFSET(0x18329A70)
#define DCKPLFOIANM_MFGPMPHMGBD_OFFSET UNITYSDK_OFFSET(0x18329A60)
#define DCKPLFOIANM_MMLPJHGNGFK_OFFSET UNITYSDK_OFFSET(0x1832A620)
#define DCKPLFOIANM__CTOR_OFFSET UNITYSDK_OFFSET(0x1832A2E0)

inline static constexpr unsigned int DCKPLFOIANM_TypeDefinitionIndex = 64758;

class DCKPLFOIANM : public ::BBNJMPLPMDN
{
public:
	::BFMLEHMAGAK_1<::System::Boolean>* _CAHPLIPFFOO_k__BackingField; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKPLFOIANM__CTOR_OFFSET))(this);
	}

	::JGGGPPLICEA MFGPMPHMGBD()
	{
		return ((::JGGGPPLICEA(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKPLFOIANM_MFGPMPHMGBD_OFFSET))(this);
	}

	::System::String* LNPIDMNIJJC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKPLFOIANM_LNPIDMNIJJC_OFFSET))(this);
	}

	::System::Void IHJPFOFAJDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKPLFOIANM_IHJPFOFAJDI_OFFSET))(this);
	}

	::System::Boolean CPIKCLFBOJK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKPLFOIANM_CPIKCLFBOJK_OFFSET))(this);
	}

	::System::Boolean AFMMCLGMANA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKPLFOIANM_AFMMCLGMANA_OFFSET))(this);
	}

	::BFMLEHMAGAK_1<::System::Boolean>* HPCFPGDGCHI()
	{
		return ((::BFMLEHMAGAK_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKPLFOIANM_HPCFPGDGCHI_OFFSET))(this);
	}

	::System::String* MMLPJHGNGFK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKPLFOIANM_MMLPJHGNGFK_OFFSET))(this);
	}

	::System::Void KDHMMKKNNPC(::BFMLEHMAGAK_1<::System::Boolean>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::BFMLEHMAGAK_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + DCKPLFOIANM_KDHMMKKNNPC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean GFCMLEOFMPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKPLFOIANM_GFCMLEOFMPN_OFFSET))(this);
	}

	::System::Boolean GKLEFBEKJHD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKPLFOIANM_GKLEFBEKJHD_OFFSET))(this);
	}

	::System::Boolean CBFNMKEGGLH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKPLFOIANM_CBFNMKEGGLH_OFFSET))(this);
	}
};
