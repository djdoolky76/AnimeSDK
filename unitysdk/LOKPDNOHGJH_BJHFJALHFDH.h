#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LOKPDNOHGJH_AMPDMIEBCLM.h"
#include "unitysdk/LOKPDNOHGJH_BJHFJALHFDH_GNGMAHALLHM.h"
#include "unitysdk/LOKPDNOHGJH_BJHFJALHFDH_LHAPNHBHGPM.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DNGEKLMPBAC;
class FBAMLABJMKF;
class IANEJNBHNPJ;
class KLFOBDFJFJE;
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace MoleMole::Config { class ConfigHollowChessboardCamera; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define LOKPDNOHGJH_BJHFJALHFDH_DOCLEKNMNDN_OFFSET UNITYSDK_OFFSET(0x15902810)
#define LOKPDNOHGJH_BJHFJALHFDH_EDCFLFILJNK_OFFSET UNITYSDK_OFFSET(0x15902820)
#define LOKPDNOHGJH_BJHFJALHFDH_FMDLCBGAFOP_OFFSET UNITYSDK_OFFSET(0x15902830)
#define LOKPDNOHGJH_BJHFJALHFDH_PEJFAJMEMFH_OFFSET UNITYSDK_OFFSET(0x15902800)
#define LOKPDNOHGJH_BJHFJALHFDH__CTOR_OFFSET UNITYSDK_OFFSET(0x159027F0)

inline static constexpr unsigned int LOKPDNOHGJH_BJHFJALHFDH_TypeDefinitionIndex = 46429;

class LOKPDNOHGJH_BJHFJALHFDH : public ::System::Object
{
public:
	::KLFOBDFJFJE* LDOOMLCIJOM; // 0x10
	::System::Action_1<::FBAMLABJMKF*>* DOACDIPCIBK; // 0x18
	::UnityEngine::Transform* HEMCKHKBGJE; // 0x20
	::MoleMole::Config::ConfigHollowChessboardCamera* CNBDJGBKFFH; // 0x28
	::MoleMole::Config::ConfigHollowChessboard* ENBIMBGCCBD; // 0x30
	::DNGEKLMPBAC* FAEIGDGDOON; // 0x38
	::IANEJNBHNPJ* MLCFEGOMFGH; // 0x40
	::System::Boolean BJEDEIIGJCF; // 0x48
	::System::Byte _padding0[0x3];
	::LOKPDNOHGJH_AMPDMIEBCLM _DKICDNPJCAF_k__BackingField; // 0x4C
	::System::Nullable_1<::UnityEngine::Vector3> LJMLOEOGOIE; // 0x50
	::System::Byte _padding1[0x8];
	::LOKPDNOHGJH_BJHFJALHFDH_GNGMAHALLHM OBMBANIGGNL; // 0x60
	::MoleMole::HollowChessboard::HollowChessboardUID LKDJGGNEEAL; // 0x64
	::LOKPDNOHGJH_BJHFJALHFDH_LHAPNHBHGPM CEHGFFDBHOJ; // 0x6C
	::System::Boolean NJGPBMAHICG; // 0x70
	::System::Boolean _ELCBMKKELNF_k__BackingField; // 0x71
	::System::Boolean HJOBMIJOGII; // 0x72
	::System::Boolean LKKFOFMEKDH; // 0x73

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKPDNOHGJH_BJHFJALHFDH__CTOR_OFFSET))(this);
	}

	::System::Void PEJFAJMEMFH(::LOKPDNOHGJH_AMPDMIEBCLM EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LOKPDNOHGJH_AMPDMIEBCLM))((::PBYTE)hIl2Cpp + LOKPDNOHGJH_BJHFJALHFDH_PEJFAJMEMFH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DOCLEKNMNDN(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOKPDNOHGJH_BJHFJALHFDH_DOCLEKNMNDN_OFFSET))(this, EGEGIMGMJHN);
	}

	::LOKPDNOHGJH_AMPDMIEBCLM EDCFLFILJNK()
	{
		return ((::LOKPDNOHGJH_AMPDMIEBCLM(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKPDNOHGJH_BJHFJALHFDH_EDCFLFILJNK_OFFSET))(this);
	}

	::System::Boolean FMDLCBGAFOP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKPDNOHGJH_BJHFJALHFDH_FMDLCBGAFOP_OFFSET))(this);
	}
};
