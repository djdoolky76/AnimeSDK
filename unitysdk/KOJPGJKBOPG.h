#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SpaceType.h"
#include "unitysdk/JKDOGGMIEBG.h"
#include "unitysdk/MoleMole/NAPInput/Attitude.h"
#include "unitysdk/MoleMole/NAPInput/IMUData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GCDJNNKAEPI;
class ILGNNEMGHCK;

#define KOJPGJKBOPG_BAFEALGIHHL_OFFSET UNITYSDK_OFFSET(0x1682E950)
#define KOJPGJKBOPG_CHKKELABKNO_OFFSET UNITYSDK_OFFSET(0x1682F060)
#define KOJPGJKBOPG_COBPIICGJJA_OFFSET UNITYSDK_OFFSET(0x1682F010)
#define KOJPGJKBOPG_EBDGBINJDHH_OFFSET UNITYSDK_OFFSET(0x1682EF00)
#define KOJPGJKBOPG_FOHODNKFKCD_OFFSET UNITYSDK_OFFSET(0x1682F5D0)
#define KOJPGJKBOPG_GPCJBHFMGGJ_OFFSET UNITYSDK_OFFSET(0x1682E850)
#define KOJPGJKBOPG_HGMPDAFAOKC_OFFSET UNITYSDK_OFFSET(0x1682F440)
#define KOJPGJKBOPG_ICODANAONCO_OFFSET UNITYSDK_OFFSET(0x1682F540)
#define KOJPGJKBOPG_KFPBMNBPJND_OFFSET UNITYSDK_OFFSET(0x1682F040)
#define KOJPGJKBOPG_KPNBBCDCPOA_OFFSET UNITYSDK_OFFSET(0x1682F1E0)
#define KOJPGJKBOPG_MDFEBAEFKAL_OFFSET UNITYSDK_OFFSET(0x1682F4D0)
#define KOJPGJKBOPG_MEOJOJBGDPL_OFFSET UNITYSDK_OFFSET(0x1682EF50)
#define KOJPGJKBOPG_MJBPJACNOKO_OFFSET UNITYSDK_OFFSET(0x1682E9C0)
#define KOJPGJKBOPG_OMCOBCMJFEO_OFFSET UNITYSDK_OFFSET(0x1682F120)
#define KOJPGJKBOPG__CTOR_OFFSET UNITYSDK_OFFSET(0x1682E6D0)

inline static constexpr unsigned int KOJPGJKBOPG_TypeDefinitionIndex = 75202;

class KOJPGJKBOPG : public ::System::Object
{
public:
	::GCDJNNKAEPI* FFHCIKPKIDL; // 0x10
	::ILGNNEMGHCK* BCKGCFPJNJE; // 0x18
	::MoleMole::NAPInput::Attitude CCEPGMKILHC; // 0x20
	::MoleMole::NAPInput::IMUData DFJOCNFBOGM; // 0x3C
	::Foundation::SpaceType JJPEDAMOOLA; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJPGJKBOPG__CTOR_OFFSET))(this);
	}

	::MoleMole::NAPInput::Attitude GPCJBHFMGGJ()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJPGJKBOPG_GPCJBHFMGGJ_OFFSET))(this);
	}

	::System::Void EBDGBINJDHH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJPGJKBOPG_EBDGBINJDHH_OFFSET))(this);
	}

	::System::Void MEOJOJBGDPL(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KOJPGJKBOPG_MEOJOJBGDPL_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Quaternion COBPIICGJJA()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJPGJKBOPG_COBPIICGJJA_OFFSET))(this);
	}

	::JKDOGGMIEBG KFPBMNBPJND()
	{
		return ((::JKDOGGMIEBG(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJPGJKBOPG_KFPBMNBPJND_OFFSET))(this);
	}

	::System::Void CHKKELABKNO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJPGJKBOPG_CHKKELABKNO_OFFSET))(this);
	}

	::System::Void OMCOBCMJFEO(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KOJPGJKBOPG_OMCOBCMJFEO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KPNBBCDCPOA(::UnityEngine::Vector3 MMGKMLFBMEM, ::UnityEngine::Vector3 NJJNJBLDLBC, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + KOJPGJKBOPG_KPNBBCDCPOA_OFFSET))(this, MMGKMLFBMEM, NJJNJBLDLBC, PMNLNNGEIFM);
	}

	::System::Single HGMPDAFAOKC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJPGJKBOPG_HGMPDAFAOKC_OFFSET))(this);
	}

	::GCDJNNKAEPI* BAFEALGIHHL()
	{
		return ((::GCDJNNKAEPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJPGJKBOPG_BAFEALGIHHL_OFFSET))(this);
	}

	::UnityEngine::Quaternion MJBPJACNOKO(::UnityEngine::Quaternion& LDDJOFHAOHG, ::UnityEngine::Quaternion& CMDKBCFKKHC)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + KOJPGJKBOPG_MJBPJACNOKO_OFFSET))(this, LDDJOFHAOHG, CMDKBCFKKHC);
	}

	::System::Single MDFEBAEFKAL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJPGJKBOPG_MDFEBAEFKAL_OFFSET))(this);
	}

	::System::Single ICODANAONCO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJPGJKBOPG_ICODANAONCO_OFFSET))(this);
	}

	::System::Single FOHODNKFKCD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJPGJKBOPG_FOHODNKFKCD_OFFSET))(this);
	}
};
