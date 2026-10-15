#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGIHIELHLGF.h"
#include "unitysdk/MLFEHGAFNBE.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Action; }

#define NCHDFGJBFPN_AENPHDMACPG_OFFSET UNITYSDK_OFFSET(0x1F850)
#define NCHDFGJBFPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1F710)
#define NCHDFGJBFPN_EEBEEAOOKMP_OFFSET UNITYSDK_OFFSET(0x1FA20)
#define NCHDFGJBFPN_EMKKJFGMHFJ_OFFSET UNITYSDK_OFFSET(0x1F810)
#define NCHDFGJBFPN_GJFKGBILNCN_OFFSET UNITYSDK_OFFSET(0x1F830)
#define NCHDFGJBFPN_HKMBBHAJIGM_OFFSET UNITYSDK_OFFSET(0x1F920)
#define NCHDFGJBFPN_IELPHHCMADO_OFFSET UNITYSDK_OFFSET(0x1F990)
#define NCHDFGJBFPN_IOLODGNILIF_OFFSET UNITYSDK_OFFSET(0x1F890)
#define NCHDFGJBFPN_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x1F8D0)
#define NCHDFGJBFPN_NNNABDMKCJM_OFFSET UNITYSDK_OFFSET(0x1FA70)

	struct alignas(4) NCHDFGJBFPN
	{
		::MLFEHGAFNBE OIBKPJEGPOK; // 0x10
		::HGIHIELHLGF DICDJJOJKGF; // 0x40
		::System::Single IDKONBFPBLH; // 0xA0
		::System::Single NIIHAFIENBB; // 0xA4
		::System::Void _ctor(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Action* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + NCHDFGJBFPN_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::MLFEHGAFNBE EMKKJFGMHFJ()
		{
			return ((::MLFEHGAFNBE(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHDFGJBFPN_EMKKJFGMHFJ_OFFSET))(this);
		}

		::System::Void GJFKGBILNCN(::MLFEHGAFNBE a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLFEHGAFNBE))((::PBYTE)hIl2Cpp + NCHDFGJBFPN_GJFKGBILNCN_OFFSET))(this, a1);
		}

		::HGIHIELHLGF AENPHDMACPG()
		{
			return ((::HGIHIELHLGF(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHDFGJBFPN_AENPHDMACPG_OFFSET))(this);
		}

		::System::Void IOLODGNILIF(::HGIHIELHLGF a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGIHIELHLGF))((::PBYTE)hIl2Cpp + NCHDFGJBFPN_IOLODGNILIF_OFFSET))(this, a1);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHDFGJBFPN_LDAMHBBILAD_OFFSET))(this);
		}

		::UnityEngine::Vector3 HKMBBHAJIGM()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHDFGJBFPN_HKMBBHAJIGM_OFFSET))(this);
		}

		::UnityEngine::Vector3 IELPHHCMADO()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHDFGJBFPN_IELPHHCMADO_OFFSET))(this);
		}

		::System::Single EEBEEAOOKMP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHDFGJBFPN_EEBEEAOOKMP_OFFSET))(this);
		}

		::System::Single NNNABDMKCJM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHDFGJBFPN_NNNABDMKCJM_OFFSET))(this);
		}

	};
