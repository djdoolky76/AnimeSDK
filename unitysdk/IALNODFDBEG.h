#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IALNODFDBEG_ALLPBOMCCDM_OFFSET UNITYSDK_OFFSET(0x1A392660)
#define IALNODFDBEG_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x1A38FE60)
#define IALNODFDBEG_BLOCGHDEENL_OFFSET UNITYSDK_OFFSET(0x1A393090)
#define IALNODFDBEG_DBBLDIPLMID_OFFSET UNITYSDK_OFFSET(0x1A390F60)
#define IALNODFDBEG_DMGEAODNGKL_OFFSET UNITYSDK_OFFSET(0x1A392460)
#define IALNODFDBEG_FKCFJDEJFEG_OFFSET UNITYSDK_OFFSET(0x1A38F300)
#define IALNODFDBEG_FLPLAIBBPIA_OFFSET UNITYSDK_OFFSET(0x1A3911F0)
#define IALNODFDBEG_GKECDPAGHHG_OFFSET UNITYSDK_OFFSET(0x1A392080)
#define IALNODFDBEG_GPMIJOPJJHJ_OFFSET UNITYSDK_OFFSET(0x1A3934D0)
#define IALNODFDBEG_HEAENJMPEJM_OFFSET UNITYSDK_OFFSET(0x1A38FC90)
#define IALNODFDBEG_IBKCGMIHDNC_OFFSET UNITYSDK_OFFSET(0x1A390AC0)
#define IALNODFDBEG_IHFOJFFPLNA_OFFSET UNITYSDK_OFFSET(0x1A391F90)
#define IALNODFDBEG_JAJONEILOIN_OFFSET UNITYSDK_OFFSET(0x1A38F670)
#define IALNODFDBEG_KBEOGNPHMAJ_OFFSET UNITYSDK_OFFSET(0x1A38F700)
#define IALNODFDBEG_MMOPOGEDBNA_OFFSET UNITYSDK_OFFSET(0x1A390380)
#define IALNODFDBEG_MNKOBJJHLPE_OFFSET UNITYSDK_OFFSET(0x1A38FB50)
#define IALNODFDBEG_NEPMOGHIKAM_OFFSET UNITYSDK_OFFSET(0x1A390EA0)
#define IALNODFDBEG_NHBDPLFHNKD_OFFSET UNITYSDK_OFFSET(0x1A38FC10)
#define IALNODFDBEG_NHHJIDIHDDC_OFFSET UNITYSDK_OFFSET(0x1A391CD0)
#define IALNODFDBEG_NKELMFPHEIP_OFFSET UNITYSDK_OFFSET(0x1A392130)
#define IALNODFDBEG_OIPIEDFEBKN_OFFSET UNITYSDK_OFFSET(0x1A393830)
#define IALNODFDBEG_ONADCFJOFKN_OFFSET UNITYSDK_OFFSET(0x1A392DE0)
#define IALNODFDBEG_PCGACJOJOKG_OFFSET UNITYSDK_OFFSET(0x1A391760)
#define IALNODFDBEG_PPHJAGKLFAN_OFFSET UNITYSDK_OFFSET(0x1A392B50)
#define IALNODFDBEG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A38F120)

inline static constexpr unsigned int IALNODFDBEG_TypeDefinitionIndex = 58968;

class IALNODFDBEG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* OBCDAEOOMJO; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* EMMANHKMCIB; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* KACOCNJABNN; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* CHJFINHIKIK; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* FAIMEEBOCPP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALNODFDBEG__CTOR_OFFSET))(this);
	}

	::MoleMole::UIWindowController* FKCFJDEJFEG(::MIKOMFIBMBN HKGCJDDIMAH)
	{
		return ((::MoleMole::UIWindowController*(*)(::PVOID, ::MIKOMFIBMBN))((::PBYTE)hIl2Cpp + IALNODFDBEG_FKCFJDEJFEG_OFFSET))(this, HKGCJDDIMAH);
	}

	::MoleMole::UIWindowController* JAJONEILOIN()
	{
		return ((::MoleMole::UIWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALNODFDBEG_JAJONEILOIN_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* KBEOGNPHMAJ()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALNODFDBEG_KBEOGNPHMAJ_OFFSET))(this);
	}

	::System::Boolean HEAENJMPEJM(::System::Int32 KKGGACLGGPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IALNODFDBEG_HEAENJMPEJM_OFFSET))(this, KKGGACLGGPN);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALNODFDBEG_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void NEPMOGHIKAM(::MoleMole::UIWindowController* HHDOPDCBGJI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + IALNODFDBEG_NEPMOGHIKAM_OFFSET))(this, HHDOPDCBGJI);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* DBBLDIPLMID(::System::Boolean HKPCOMAGGCM)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IALNODFDBEG_DBBLDIPLMID_OFFSET))(this, HKPCOMAGGCM);
	}

	::System::Void FLPLAIBBPIA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALNODFDBEG_FLPLAIBBPIA_OFFSET))(this);
	}

	::System::Void PCGACJOJOKG(::System::Boolean DINGEEHHDBD, ::System::Boolean LJGFCCGCMAD, ::System::Predicate_1<::MoleMole::UIBaseController*>* BDCBEOGMGJI, ::System::Action_1<::MoleMole::UIBaseController*>* CALJKDFFLMH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Predicate_1<::MoleMole::UIBaseController*>*, ::System::Action_1<::MoleMole::UIBaseController*>*))((::PBYTE)hIl2Cpp + IALNODFDBEG_PCGACJOJOKG_OFFSET))(this, DINGEEHHDBD, LJGFCCGCMAD, BDCBEOGMGJI, CALJKDFFLMH);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* NHHJIDIHDDC(::System::Boolean HKPCOMAGGCM)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IALNODFDBEG_NHHJIDIHDDC_OFFSET))(this, HKPCOMAGGCM);
	}

	::System::Boolean MNKOBJJHLPE(::MIKOMFIBMBN HKGCJDDIMAH)
	{
		return ((::System::Boolean(*)(::PVOID, ::MIKOMFIBMBN))((::PBYTE)hIl2Cpp + IALNODFDBEG_MNKOBJJHLPE_OFFSET))(this, HKGCJDDIMAH);
	}

	::System::Boolean IBKCGMIHDNC(::MoleMole::UIWindowController* NCIMBHDKIJM)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + IALNODFDBEG_IBKCGMIHDNC_OFFSET))(this, NCIMBHDKIJM);
	}

	::System::Void GKECDPAGHHG(::MoleMole::UIWindowController* KCAAHHAOKLC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + IALNODFDBEG_GKECDPAGHHG_OFFSET))(this, KCAAHHAOKLC);
	}

	::System::Boolean IHFOJFFPLNA(::MoleMole::UIWindowController* NCIMBHDKIJM)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + IALNODFDBEG_IHFOJFFPLNA_OFFSET))(this, NCIMBHDKIJM);
	}

	::System::Boolean NKELMFPHEIP(::MoleMole::UIWindowController* HHDOPDCBGJI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + IALNODFDBEG_NKELMFPHEIP_OFFSET))(this, HHDOPDCBGJI);
	}

	::System::Boolean DMGEAODNGKL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IALNODFDBEG_DMGEAODNGKL_OFFSET))(this);
	}

	::MoleMole::UIWindowController* ALLPBOMCCDM(::System::String* ECAFOHDBICH)
	{
		return ((::MoleMole::UIWindowController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IALNODFDBEG_ALLPBOMCCDM_OFFSET))(this, ECAFOHDBICH);
	}

	::System::Boolean PPHJAGKLFAN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IALNODFDBEG_PPHJAGKLFAN_OFFSET))(this);
	}

	::System::Void MMOPOGEDBNA(::System::Boolean EEHAMNAHBCN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IALNODFDBEG_MMOPOGEDBNA_OFFSET))(this, EEHAMNAHBCN);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* ONADCFJOFKN()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALNODFDBEG_ONADCFJOFKN_OFFSET))(this);
	}

	::MoleMole::UIWindowController* BLOCGHDEENL(::Foundation::AssetPath OEDPDCAICHH)
	{
		return ((::MoleMole::UIWindowController*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + IALNODFDBEG_BLOCGHDEENL_OFFSET))(this, OEDPDCAICHH);
	}

	::System::Boolean NHBDPLFHNKD(::MIKOMFIBMBN HKGCJDDIMAH)
	{
		return ((::System::Boolean(*)(::PVOID, ::MIKOMFIBMBN))((::PBYTE)hIl2Cpp + IALNODFDBEG_NHBDPLFHNKD_OFFSET))(this, HKGCJDDIMAH);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* GPMIJOPJJHJ()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALNODFDBEG_GPMIJOPJJHJ_OFFSET))(this);
	}

	::System::Void OIPIEDFEBKN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALNODFDBEG_OIPIEDFEBKN_OFFSET))(this);
	}
};
