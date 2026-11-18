#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKHMCDMMOJK.h"
#include "unitysdk/GALJGJIGMEK.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/NOHGGLFKBEH.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DDDAHJHLPJM_FIAILLCLHGK;
class DDDAHJHLPJM_IPCEKPELHJO;
class DDDAHJHLPJM_LCMBIDJBNDB;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole::Cameras { class CameraAvatarPrepareData; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Config { class PipelineCameraAvatarConfigData; }

#define DDDAHJHLPJM_AAMMFJBPPFF_OFFSET UNITYSDK_OFFSET(0x168B06B0)
#define DDDAHJHLPJM_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x168B0610)
#define DDDAHJHLPJM_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x168B0840)
#define DDDAHJHLPJM_CIFMCLJDFCP_OFFSET UNITYSDK_OFFSET(0x168B0C90)
#define DDDAHJHLPJM_CKJLLANBAOB_OFFSET UNITYSDK_OFFSET(0x168B06F0)
#define DDDAHJHLPJM_EGOKJBDHFII_OFFSET UNITYSDK_OFFSET(0x168B08F0)
#define DDDAHJHLPJM_EHFFGABAKED_OFFSET UNITYSDK_OFFSET(0x168B1080)
#define DDDAHJHLPJM_GACPDCEMJOA_OFFSET UNITYSDK_OFFSET(0x168B11C0)
#define DDDAHJHLPJM_GCEHDIOBOMM_OFFSET UNITYSDK_OFFSET(0x168B0600)
#define DDDAHJHLPJM_GFEACNJBDNM_OFFSET UNITYSDK_OFFSET(0x168B0B90)
#define DDDAHJHLPJM_GMAAKJFLOFE_OFFSET UNITYSDK_OFFSET(0x168B0D40)
#define DDDAHJHLPJM_HMGAKEKMBLI_OFFSET UNITYSDK_OFFSET(0x168B0880)
#define DDDAHJHLPJM_IPGLFGNIJIE_OFFSET UNITYSDK_OFFSET(0x168B09D0)
#define DDDAHJHLPJM_JEGEEHFGOHI_OFFSET UNITYSDK_OFFSET(0x168B0F00)
#define DDDAHJHLPJM_JJJLDNHEDMJ_OFFSET UNITYSDK_OFFSET(0x168B0E40)
#define DDDAHJHLPJM_JMGDLBOJKML_OFFSET UNITYSDK_OFFSET(0x168B0670)
#define DDDAHJHLPJM_KCDMPKGDICJ_OFFSET UNITYSDK_OFFSET(0x168B07B0)
#define DDDAHJHLPJM_LFCFFEJJJEA_OFFSET UNITYSDK_OFFSET(0x168B0F80)
#define DDDAHJHLPJM_LKCDLACHKKH_OFFSET UNITYSDK_OFFSET(0x168B0AE0)
#define DDDAHJHLPJM_NJLKANEEMKH_OFFSET UNITYSDK_OFFSET(0x168B0A20)
#define DDDAHJHLPJM_OBHONJGMNCF_OFFSET UNITYSDK_OFFSET(0x168B0A60)
#define DDDAHJHLPJM_OELDGDMHOMJ_OFFSET UNITYSDK_OFFSET(0x168B0960)
#define DDDAHJHLPJM_OJNPGADAFHO_OFFSET UNITYSDK_OFFSET(0x168B1100)
#define DDDAHJHLPJM_OPCCLAPFGLN_OFFSET UNITYSDK_OFFSET(0x168B0800)
#define DDDAHJHLPJM_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x168B0750)
#define DDDAHJHLPJM__CTOR_OFFSET UNITYSDK_OFFSET(0x168B0EF0)

inline static constexpr unsigned int DDDAHJHLPJM_TypeDefinitionIndex = 75994;

class DDDAHJHLPJM : public ::System::Object
{
public:
	::DDDAHJHLPJM_LCMBIDJBNDB* NANMKEDKFCN; // 0x10
	::DDDAHJHLPJM_IPCEKPELHJO* MCMLJPOMILM; // 0x18
	::DDDAHJHLPJM_FIAILLCLHGK* DNDHBBPKBKC; // 0x20
	::MoleMole::Cameras::CameraDataAccessor* EFFAONJBCOG; // 0x28
	::Cinemachine::CinemachineVirtualCameraBase* HEDNNIKBIPB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDAHJHLPJM__CTOR_OFFSET))(this);
	}

	::GALJGJIGMEK GCEHDIOBOMM()
	{
		return ((::GALJGJIGMEK(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_GCEHDIOBOMM_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::Cinemachine::CinemachineVirtualCameraBase* JNLBPMKIFNK, ::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_BBOMJDBNHIC_OFFSET))(this, JNLBPMKIFNK, LJBPECKCCEA);
	}

	::System::Void JMGDLBOJKML()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_JMGDLBOJKML_OFFSET))(this);
	}

	::System::Boolean AAMMFJBPPFF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_AAMMFJBPPFF_OFFSET))(this);
	}

	::System::Void CKJLLANBAOB(::System::Single PMNLNNGEIFM, ::NOHGGLFKBEH& BLLBLFJKMFA, ::MoleMole::Cameras::CameraAvatarPrepareData* OECKPBFDDFK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::NOHGGLFKBEH&, ::MoleMole::Cameras::CameraAvatarPrepareData*))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_CKJLLANBAOB_OFFSET))(this, PMNLNNGEIFM, BLLBLFJKMFA, OECKPBFDDFK);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM, ::Cinemachine::CameraState& ANOHIDIPEMN, ::NOHGGLFKBEH& BLLBLFJKMFA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Cinemachine::CameraState&, ::NOHGGLFKBEH&))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM, ANOHIDIPEMN, BLLBLFJKMFA);
	}

	::System::Void KCDMPKGDICJ(::CKHMCDMMOJK BLLEBKEADAO)
	{
		return ((::System::Void(*)(::PVOID, ::CKHMCDMMOJK))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_KCDMPKGDICJ_OFFSET))(this, BLLEBKEADAO);
	}

	::System::Void OPCCLAPFGLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_OPCCLAPFGLN_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void HMGAKEKMBLI(::Cinemachine::CameraState JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_HMGAKEKMBLI_OFFSET))(this, JKBLDFBGBPK);
	}

	::System::Void EGOKJBDHFII(::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Quaternion GJNLCLDFFIN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_EGOKJBDHFII_OFFSET))(this, CKPGOKHECCH, GJNLCLDFFIN);
	}

	::System::Void OELDGDMHOMJ(::System::Single MFMNGEBODMF, ::System::Single ABNNPOHPJLM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_OELDGDMHOMJ_OFFSET))(this, MFMNGEBODMF, ABNNPOHPJLM);
	}

	::System::Void IPGLFGNIJIE(::MoleMole::CameraModuleAvatarDataConfigExt* OLMACFDNMEC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_IPGLFGNIJIE_OFFSET))(this, OLMACFDNMEC);
	}

	::System::Void NJLKANEEMKH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_NJLKANEEMKH_OFFSET))(this);
	}

	::System::Void OBHONJGMNCF(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_OBHONJGMNCF_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM);
	}

	::System::Void LKCDLACHKKH(::DDDAHJHLPJM_FIAILLCLHGK* MKBCMHIAMHF)
	{
		return ((::System::Void(*)(::PVOID, ::DDDAHJHLPJM_FIAILLCLHGK*))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_LKCDLACHKKH_OFFSET))(this, MKBCMHIAMHF);
	}

	::System::Void GFEACNJBDNM(::DDDAHJHLPJM_IPCEKPELHJO* MKBCMHIAMHF)
	{
		return ((::System::Void(*)(::PVOID, ::DDDAHJHLPJM_IPCEKPELHJO*))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_GFEACNJBDNM_OFFSET))(this, MKBCMHIAMHF);
	}

	::System::Void CIFMCLJDFCP(::DDDAHJHLPJM_LCMBIDJBNDB* MKBCMHIAMHF)
	{
		return ((::System::Void(*)(::PVOID, ::DDDAHJHLPJM_LCMBIDJBNDB*))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_CIFMCLJDFCP_OFFSET))(this, MKBCMHIAMHF);
	}

	::System::Void GMAAKJFLOFE(::DDDAHJHLPJM_LCMBIDJBNDB* MKBCMHIAMHF)
	{
		return ((::System::Void(*)(::PVOID, ::DDDAHJHLPJM_LCMBIDJBNDB*))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_GMAAKJFLOFE_OFFSET))(this, MKBCMHIAMHF);
	}

	::System::Void JJJLDNHEDMJ(::DDDAHJHLPJM_LCMBIDJBNDB* MKBCMHIAMHF)
	{
		return ((::System::Void(*)(::PVOID, ::DDDAHJHLPJM_LCMBIDJBNDB*))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_JJJLDNHEDMJ_OFFSET))(this, MKBCMHIAMHF);
	}

	::System::Void JEGEEHFGOHI(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_JEGEEHFGOHI_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM);
	}

	::System::Void LFCFFEJJJEA(::DDDAHJHLPJM_FIAILLCLHGK* MKBCMHIAMHF)
	{
		return ((::System::Void(*)(::PVOID, ::DDDAHJHLPJM_FIAILLCLHGK*))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_LFCFFEJJJEA_OFFSET))(this, MKBCMHIAMHF);
	}

	::System::Void EHFFGABAKED(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_EHFFGABAKED_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM);
	}

	::MoleMole::Config::PipelineCameraAvatarConfigData* OJNPGADAFHO()
	{
		return ((::MoleMole::Config::PipelineCameraAvatarConfigData*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_OJNPGADAFHO_OFFSET))(this);
	}

	::MoleMole::CameraModuleAvatarDataConfigExt* GACPDCEMJOA()
	{
		return ((::MoleMole::CameraModuleAvatarDataConfigExt*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_GACPDCEMJOA_OFFSET))(this);
	}
};
