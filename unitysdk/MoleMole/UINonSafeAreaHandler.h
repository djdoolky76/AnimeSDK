#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace UnityEngine { class Canvas; }

#define MOLEMOLE_UINONSAFEAREAHANDLER_BMOGOLBNPCF_OFFSET UNITYSDK_OFFSET(0x16762AD0)
#define MOLEMOLE_UINONSAFEAREAHANDLER_DJFLFBMCHLH_OFFSET UNITYSDK_OFFSET(0x16762AC0)
#define MOLEMOLE_UINONSAFEAREAHANDLER_GGPCOLFPHPN_OFFSET UNITYSDK_OFFSET(0x167617E0)
#define MOLEMOLE_UINONSAFEAREAHANDLER_INLEAIPJAHP_OFFSET UNITYSDK_OFFSET(0x167628C0)
#define MOLEMOLE_UINONSAFEAREAHANDLER_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x16761750)
#define MOLEMOLE_UINONSAFEAREAHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x167614D0)
#define MOLEMOLE_UINONSAFEAREAHANDLER_PIOOPLAPDPK_OFFSET UNITYSDK_OFFSET(0x16762AE0)
#define MOLEMOLE_UINONSAFEAREAHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16761560)
#define MOLEMOLE_UINONSAFEAREAHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16761700)

namespace MoleMole
{
	inline static constexpr unsigned int UINonSafeAreaHandler_TypeDefinitionIndex = 81506;

	class UINonSafeAreaHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::Canvas* LHHCBJMINFM; // 0x18
		::System::Boolean JJJFLPOLELO; // 0x20
		::System::Boolean _ADPHDBHIELK_k__BackingField; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINONSAFEAREAHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINONSAFEAREAHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINONSAFEAREAHANDLER_UPDATE_OFFSET))(this);
		}

		::System::Void KDOIBCBFBAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINONSAFEAREAHANDLER_KDOIBCBFBAG_OFFSET))(this);
		}

		::System::Void GGPCOLFPHPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINONSAFEAREAHANDLER_GGPCOLFPHPN_OFFSET))(this);
		}

		::System::Boolean DJFLFBMCHLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINONSAFEAREAHANDLER_DJFLFBMCHLH_OFFSET))(this);
		}

		::System::Void BMOGOLBNPCF(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINONSAFEAREAHANDLER_BMOGOLBNPCF_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Canvas* INLEAIPJAHP()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINONSAFEAREAHANDLER_INLEAIPJAHP_OFFSET))(this);
		}

		::System::Void PIOOPLAPDPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINONSAFEAREAHANDLER_PIOOPLAPDPK_OFFSET))(this);
		}
	};
}
