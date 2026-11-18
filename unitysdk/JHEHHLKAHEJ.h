#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/MoleMole/Config/CameraDitherLayerData.h"
#include "unitysdk/MoleMole/Config/CharacterFadeDitheringDataV2.h"
#include "unitysdk/MoleMole/Config/LocalAvatarElevationRatioDitheringData.h"
#include "unitysdk/MoleMole/Config/SceneObjDitherData.h"
#include "unitysdk/MoleMole/CharacterCameraDitheringData.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class CommonDitherConfigs; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define JHEHHLKAHEJ_AEFHJLKHJLL_OFFSET UNITYSDK_OFFSET(0x13CBD250)
#define JHEHHLKAHEJ_CNKNGNCJGAP_OFFSET UNITYSDK_OFFSET(0x13CBDE00)
#define JHEHHLKAHEJ_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x13CBC4C0)
#define JHEHHLKAHEJ_CREATEOP_OFFSET UNITYSDK_OFFSET(0x13CBC070)
#define JHEHHLKAHEJ_ELGHLJNAODL_OFFSET UNITYSDK_OFFSET(0x13CBD7A0)
#define JHEHHLKAHEJ_FLIJDMKBHIA_1_OFFSET UNITYSDK_OFFSET(0x13CBD050)
#define JHEHHLKAHEJ_FLIJDMKBHIA_OFFSET UNITYSDK_OFFSET(0x13CBCF00)
#define JHEHHLKAHEJ_FPDAICPALBL_OFFSET UNITYSDK_OFFSET(0x13CBDAF0)
#define JHEHHLKAHEJ_HIKNGKMLPDL_OFFSET UNITYSDK_OFFSET(0x13CBC580)
#define JHEHHLKAHEJ_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x13CBCE30)
#define JHEHHLKAHEJ_KPECAGMFAMD_OFFSET UNITYSDK_OFFSET(0x13CBC1A0)
#define JHEHHLKAHEJ_MHLBGKGOABJ_OFFSET UNITYSDK_OFFSET(0x13CBCB00)
#define JHEHHLKAHEJ_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x13CBBFD0)
#define JHEHHLKAHEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13CBBF40)

inline static constexpr unsigned int JHEHHLKAHEJ_TypeDefinitionIndex = 54099;

class JHEHHLKAHEJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEHHLKAHEJ__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + JHEHHLKAHEJ_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::CommonDitherConfigs*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::CommonDitherConfigs*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEHHLKAHEJ_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::LocalAvatarElevationRatioDitheringData KPECAGMFAMD()
	{
		return ((::MoleMole::Config::LocalAvatarElevationRatioDitheringData(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEHHLKAHEJ_KPECAGMFAMD_OFFSET))(this);
	}

	::MoleMole::CharacterCameraDitheringData HIKNGKMLPDL(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::CharacterCameraDitheringData(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JHEHHLKAHEJ_HIKNGKMLPDL_OFFSET))(this, MCOHLHMKLIP);
	}

	::MoleMole::Config::SceneObjDitherData MHLBGKGOABJ()
	{
		return ((::MoleMole::Config::SceneObjDitherData(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEHHLKAHEJ_MHLBGKGOABJ_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + JHEHHLKAHEJ_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::CommonDitherConfigs* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::CommonDitherConfigs*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEHHLKAHEJ_COPIDBEMEIE_OFFSET))(this);
	}

	::System::Boolean FLIJDMKBHIA(::UnityEngine::AnimationCurve*& FAJHPKBELMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AnimationCurve*&))((::PBYTE)hIl2Cpp + JHEHHLKAHEJ_FLIJDMKBHIA_OFFSET))(this, FAJHPKBELMF);
	}

	::MoleMole::Config::CameraDitherLayerData AEFHJLKHJLL(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::CameraDitherLayerData(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JHEHHLKAHEJ_AEFHJLKHJLL_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Boolean ELGHLJNAODL(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JHEHHLKAHEJ_ELGHLJNAODL_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Single FPDAICPALBL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEHHLKAHEJ_FPDAICPALBL_OFFSET))(this);
	}

	::System::Boolean CNKNGNCJGAP(::System::String* MCOHLHMKLIP, ::MoleMole::Config::CharacterFadeDitheringDataV2& LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Config::CharacterFadeDitheringDataV2&))((::PBYTE)hIl2Cpp + JHEHHLKAHEJ_CNKNGNCJGAP_OFFSET))(this, MCOHLHMKLIP, LJBPECKCCEA);
	}

	::System::Boolean FLIJDMKBHIA_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEHHLKAHEJ_FLIJDMKBHIA_1_OFFSET))(this);
	}
};
