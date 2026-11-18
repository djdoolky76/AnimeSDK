#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SpaceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class HBCHFHIEJDH;
namespace UnityEngine { class Transform; }

#define DICNIHDMIFI_BIENLHEKMCD_OFFSET UNITYSDK_OFFSET(0x1833E0D0)
#define DICNIHDMIFI_CHKKELABKNO_OFFSET UNITYSDK_OFFSET(0x1833E680)
#define DICNIHDMIFI_CIMFAKPAPJB_OFFSET UNITYSDK_OFFSET(0x1833E0C0)
#define DICNIHDMIFI_HHHODEGIJED_OFFSET UNITYSDK_OFFSET(0x1833DFB0)
#define DICNIHDMIFI_KCPNIKAFIFC_OFFSET UNITYSDK_OFFSET(0x1833E0B0)
#define DICNIHDMIFI_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x1833E0E0)
#define DICNIHDMIFI_KIJMGJDMNIA_OFFSET UNITYSDK_OFFSET(0x1833DFA0)
#define DICNIHDMIFI_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1833E1C0)
#define DICNIHDMIFI__CTOR_OFFSET UNITYSDK_OFFSET(0x1833DF50)

inline static constexpr unsigned int DICNIHDMIFI_TypeDefinitionIndex = 49242;

class DICNIHDMIFI : public ::System::Object
{
public:
	::HBCHFHIEJDH* JDLAOHDBNBG; // 0x10
	::UnityEngine::Transform* _NACMHNJFFAE_k__BackingField; // 0x18
	::UnityEngine::Vector3 AEBNNHLJAPL; // 0x20
	::UnityEngine::Quaternion _KMNJLGAEBPN_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICNIHDMIFI__CTOR_OFFSET))(this);
	}

	::System::Void KIJMGJDMNIA(::UnityEngine::Transform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DICNIHDMIFI_KIJMGJDMNIA_OFFSET))(this, EGEGIMGMJHN);
	}

	::Foundation::SpaceType HHHODEGIJED()
	{
		return ((::Foundation::SpaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + DICNIHDMIFI_HHHODEGIJED_OFFSET))(this);
	}

	::UnityEngine::Quaternion KCPNIKAFIFC()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + DICNIHDMIFI_KCPNIKAFIFC_OFFSET))(this);
	}

	::System::Void CIMFAKPAPJB(::UnityEngine::Quaternion EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DICNIHDMIFI_CIMFAKPAPJB_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Transform* BIENLHEKMCD()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICNIHDMIFI_BIENLHEKMCD_OFFSET))(this);
	}

	::System::Void KDGMEFEJMGJ(::UnityEngine::Transform* GKBJOPJKCLB, ::UnityEngine::Vector3 JHNPNHDPJKH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DICNIHDMIFI_KDGMEFEJMGJ_OFFSET))(this, GKBJOPJKCLB, JHNPNHDPJKH);
	}

	::System::Void PLPONJAKNEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICNIHDMIFI_PLPONJAKNEB_OFFSET))(this);
	}

	::System::Void CHKKELABKNO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICNIHDMIFI_CHKKELABKNO_OFFSET))(this);
	}
};
