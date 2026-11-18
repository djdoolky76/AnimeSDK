#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/NAPInput/Attitude.h"
#include "unitysdk/MoleMole/NAPInput/IMUData.h"

class AMDCFMBIJMO;
class DILAPIKNJIG;
class ELELOKKHMDJ;
class IIEBHCIFMKF;
class KLGKGCHEHKB;

#define PENGCIMGKAB_BEOFENDIOEO_OFFSET UNITYSDK_OFFSET(0x1AFDE7A0)
#define PENGCIMGKAB_CCLKGDHFBFO_OFFSET UNITYSDK_OFFSET(0x1AFDF030)
#define PENGCIMGKAB_CKFMJHHKLJL_OFFSET UNITYSDK_OFFSET(0x1AFDE5C0)
#define PENGCIMGKAB_EJFFLOLJFON_OFFSET UNITYSDK_OFFSET(0x1AFDF070)
#define PENGCIMGKAB_GBFAIDIGHDN_OFFSET UNITYSDK_OFFSET(0x1AFDF040)
#define PENGCIMGKAB_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x1AFDE7E0)
#define PENGCIMGKAB_GNFLPIIHBAI_OFFSET UNITYSDK_OFFSET(0x1AFDE740)
#define PENGCIMGKAB_HGMPDAFAOKC_OFFSET UNITYSDK_OFFSET(0x1AFDEED0)
#define PENGCIMGKAB_HHMNKGDKFEP_OFFSET UNITYSDK_OFFSET(0x1AFDF0C0)
#define PENGCIMGKAB_ICODANAONCO_OFFSET UNITYSDK_OFFSET(0x1AFDE7C0)
#define PENGCIMGKAB_JBBBPLBENKG_OFFSET UNITYSDK_OFFSET(0x1AFDF000)
#define PENGCIMGKAB_JPLHKJKDKFN_OFFSET UNITYSDK_OFFSET(0x1AFDF090)
#define PENGCIMGKAB_KFFILAICEFE_OFFSET UNITYSDK_OFFSET(0x1AFDEEF0)
#define PENGCIMGKAB_KFLEGELNFEF_OFFSET UNITYSDK_OFFSET(0x1AFDE770)
#define PENGCIMGKAB_MEOJOJBGDPL_OFFSET UNITYSDK_OFFSET(0x1AFDEE60)
#define PENGCIMGKAB_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1AFDE650)
#define PENGCIMGKAB_OMCOBCMJFEO_OFFSET UNITYSDK_OFFSET(0x1AFDEF90)
#define PENGCIMGKAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFDE470)

inline static constexpr unsigned int PENGCIMGKAB_TypeDefinitionIndex = 40862;

class PENGCIMGKAB : public ::System::Object
{
public:
	::KLGKGCHEHKB* HPLJKLBEPKE; // 0x10
	::DILAPIKNJIG* LPLMLMDCFMB; // 0x18
	::ELELOKKHMDJ* LACIBBDJINM; // 0x20
	::IIEBHCIFMKF* GLLEAGCLJIO; // 0x28
	::AMDCFMBIJMO* ECIIJPBAEAF; // 0x30
	::UnityEngine::Vector3 _DIDCCPGDDCK_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PENGCIMGKAB__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 CKFMJHHKLJL()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PENGCIMGKAB_CKFMJHHKLJL_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PENGCIMGKAB_NPOLNFDBOOD_OFFSET))(this);
	}

	::MoleMole::NAPInput::Attitude GNFLPIIHBAI()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + PENGCIMGKAB_GNFLPIIHBAI_OFFSET))(this);
	}

	::System::Single KFLEGELNFEF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PENGCIMGKAB_KFLEGELNFEF_OFFSET))(this);
	}

	::System::Single BEOFENDIOEO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PENGCIMGKAB_BEOFENDIOEO_OFFSET))(this);
	}

	::System::Single ICODANAONCO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PENGCIMGKAB_ICODANAONCO_OFFSET))(this);
	}

	::MoleMole::NAPInput::IMUData GIAOBHOJCDP(::MoleMole::NAPInput::IMUData BPIKCCNLPBD)
	{
		return ((::MoleMole::NAPInput::IMUData(*)(::PVOID, ::MoleMole::NAPInput::IMUData))((::PBYTE)hIl2Cpp + PENGCIMGKAB_GIAOBHOJCDP_OFFSET))(this, BPIKCCNLPBD);
	}

	::System::Void MEOJOJBGDPL(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PENGCIMGKAB_MEOJOJBGDPL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single HGMPDAFAOKC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PENGCIMGKAB_HGMPDAFAOKC_OFFSET))(this);
	}

	::System::Void KFFILAICEFE(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PENGCIMGKAB_KFFILAICEFE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OMCOBCMJFEO(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PENGCIMGKAB_OMCOBCMJFEO_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Vector3 JBBBPLBENKG()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PENGCIMGKAB_JBBBPLBENKG_OFFSET))(this);
	}

	::System::Void CCLKGDHFBFO(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PENGCIMGKAB_CCLKGDHFBFO_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::NAPInput::Attitude GBFAIDIGHDN()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + PENGCIMGKAB_GBFAIDIGHDN_OFFSET))(this);
	}

	::UnityEngine::Vector3 EJFFLOLJFON()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PENGCIMGKAB_EJFFLOLJFON_OFFSET))(this);
	}

	::UnityEngine::Vector3 JPLHKJKDKFN()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PENGCIMGKAB_JPLHKJKDKFN_OFFSET))(this);
	}

	::System::Void HHMNKGDKFEP(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PENGCIMGKAB_HHMNKGDKFEP_OFFSET))(this, EGEGIMGMJHN);
	}
};
