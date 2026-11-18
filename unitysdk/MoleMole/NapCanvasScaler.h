#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/CanvasScaler.h"

#define MOLEMOLE_NAPCANVASSCALER_BMOGOLBNPCF_OFFSET UNITYSDK_OFFSET(0x15ACDF00)
#define MOLEMOLE_NAPCANVASSCALER_CALLHANDLE_OFFSET UNITYSDK_OFFSET(0x15ACDD80)
#define MOLEMOLE_NAPCANVASSCALER_DJFLFBMCHLH_OFFSET UNITYSDK_OFFSET(0x15ACDEA0)
#define MOLEMOLE_NAPCANVASSCALER_GGPCOLFPHPN_OFFSET UNITYSDK_OFFSET(0x15ACDEB0)
#define MOLEMOLE_NAPCANVASSCALER_PIOOPLAPDPK_OFFSET UNITYSDK_OFFSET(0x15ACDE60)
#define MOLEMOLE_NAPCANVASSCALER__CTOR_OFFSET UNITYSDK_OFFSET(0x15ACDDD0)

namespace MoleMole
{
	inline static constexpr unsigned int NapCanvasScaler_TypeDefinitionIndex = 71803;

	class NapCanvasScaler : public ::UnityEngine::UI::CanvasScaler
	{
	public:
		::System::Boolean _ADPHDBHIELK_k__BackingField; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCANVASSCALER__CTOR_OFFSET))(this);
		}

		::System::Void CallHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCANVASSCALER_CALLHANDLE_OFFSET))(this);
		}

		::System::Void PIOOPLAPDPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCANVASSCALER_PIOOPLAPDPK_OFFSET))(this);
		}

		::System::Boolean DJFLFBMCHLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCANVASSCALER_DJFLFBMCHLH_OFFSET))(this);
		}

		::System::Void GGPCOLFPHPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCANVASSCALER_GGPCOLFPHPN_OFFSET))(this);
		}

		::System::Void BMOGOLBNPCF(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCANVASSCALER_BMOGOLBNPCF_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
