#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OONBHFCCFPN.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/MonoGamepadVirtualCursor_OOABFKDMAAA.h"

class GFBEPBHPKKF;

#define NMHALNJNGBM_CEDNEBFHAPM_OFFSET UNITYSDK_OFFSET(0x1729BBF0)
#define NMHALNJNGBM_DMLDKGJPNLG_OFFSET UNITYSDK_OFFSET(0x1729C690)
#define NMHALNJNGBM_EJLKEPHMLFB_OFFSET UNITYSDK_OFFSET(0x1729C630)
#define NMHALNJNGBM_HIHPKPFOFBD_OFFSET UNITYSDK_OFFSET(0x1729BBE0)
#define NMHALNJNGBM_KIEMJHOJCGI_OFFSET UNITYSDK_OFFSET(0x1729C540)
#define NMHALNJNGBM_LDCPLILGNIK_OFFSET UNITYSDK_OFFSET(0x1729BED0)
#define NMHALNJNGBM_MJAMMHGHACD_OFFSET UNITYSDK_OFFSET(0x1729C250)
#define NMHALNJNGBM_NGEKBFOHPBF_OFFSET UNITYSDK_OFFSET(0x1729C6A0)
#define NMHALNJNGBM_NHHPNDJLOJC_OFFSET UNITYSDK_OFFSET(0x1729BE70)
#define NMHALNJNGBM_NJKCBKKJHKP_OFFSET UNITYSDK_OFFSET(0x1729BC50)
#define NMHALNJNGBM_PLGCDJNPHOC_OFFSET UNITYSDK_OFFSET(0x1729C780)
#define NMHALNJNGBM__CTOR_OFFSET UNITYSDK_OFFSET(0x1729C0F0)

inline static constexpr unsigned int NMHALNJNGBM_TypeDefinitionIndex = 81035;

class NMHALNJNGBM : public ::OONBHFCCFPN
{
public:
	::UnityEngine::Vector3 MGKNCJOGKEN; // 0x38

	::System::Void _ctor(::GFBEPBHPKKF* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::GFBEPBHPKKF*))((::PBYTE)hIl2Cpp + NMHALNJNGBM__CTOR_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Boolean HIHPKPFOFBD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHALNJNGBM_HIHPKPFOFBD_OFFSET))(this);
	}

	::System::Boolean CEDNEBFHAPM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHALNJNGBM_CEDNEBFHAPM_OFFSET))(this);
	}

	::System::Boolean NHHPNDJLOJC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHALNJNGBM_NHHPNDJLOJC_OFFSET))(this);
	}

	::System::Void MJAMMHGHACD(::UnityEngine::Vector3 HBEKKMCBGBK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NMHALNJNGBM_MJAMMHGHACD_OFFSET))(this, HBEKKMCBGBK);
	}

	::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA KIEMJHOJCGI(::System::Boolean CLBEKOAAEED)
	{
		return ((::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NMHALNJNGBM_KIEMJHOJCGI_OFFSET))(this, CLBEKOAAEED);
	}

	::System::Boolean NJKCBKKJHKP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHALNJNGBM_NJKCBKKJHKP_OFFSET))(this);
	}

	::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA EJLKEPHMLFB(::System::Boolean MIALFKCCCPI)
	{
		return ((::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NMHALNJNGBM_EJLKEPHMLFB_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean DMLDKGJPNLG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHALNJNGBM_DMLDKGJPNLG_OFFSET))(this);
	}

	::System::Void NGEKBFOHPBF(::UnityEngine::Vector3 MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NMHALNJNGBM_NGEKBFOHPBF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean PLGCDJNPHOC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHALNJNGBM_PLGCDJNPHOC_OFFSET))(this);
	}

	::System::Boolean LDCPLILGNIK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHALNJNGBM_LDCPLILGNIK_OFFSET))(this);
	}
};
