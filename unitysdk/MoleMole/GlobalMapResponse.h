#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class RawImage; }

#define MOLEMOLE_GLOBALMAPRESPONSE_NAPAJCCIJAM_OFFSET UNITYSDK_OFFSET(0x1357EC80)
#define MOLEMOLE_GLOBALMAPRESPONSE_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1357EB40)
#define MOLEMOLE_GLOBALMAPRESPONSE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1357EB00)
#define MOLEMOLE_GLOBALMAPRESPONSE_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1357EB90)
#define MOLEMOLE_GLOBALMAPRESPONSE_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1357EBE0)
#define MOLEMOLE_GLOBALMAPRESPONSE_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1357EAB0)
#define MOLEMOLE_GLOBALMAPRESPONSE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1357E870)
#define MOLEMOLE_GLOBALMAPRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1357EC30)

namespace MoleMole
{
	inline static constexpr unsigned int GlobalMapResponse_TypeDefinitionIndex = 41065;

	class GlobalMapResponse : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 COHHDNENFPM; // 0x18
		::UnityEngine::Vector3 LLLLLBLNBHG; // 0x24
		::UnityEngine::Vector2 FILFKNJCJOF; // 0x30
		::UnityEngine::UI::RawImage* GlobalmapFogMask; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALMAPRESPONSE__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALMAPRESPONSE_UPDATE_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALMAPRESPONSE_ONPOINTERCLICK_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALMAPRESPONSE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALMAPRESPONSE_ONBEGINDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALMAPRESPONSE_ONDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALMAPRESPONSE_ONENDDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::UnityEngine::Vector3 NAPAJCCIJAM(::UnityEngine::Vector2 NGPJEGEADOA)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALMAPRESPONSE_NAPAJCCIJAM_OFFSET))(this, NGPJEGEADOA);
		}
	};
}
