#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNGFDKLCIBE.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define MOLEMOLE_NAPLEVEL_MONOSCENEANIMATIONHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x14B12110)
#define MOLEMOLE_NAPLEVEL_MONOSCENEANIMATIONHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x14B120C0)
#define MOLEMOLE_NAPLEVEL_MONOSCENEANIMATIONHANDLER_ONSCENEANIMATIONINTERRUPT_OFFSET UNITYSDK_OFFSET(0x14B121D0)
#define MOLEMOLE_NAPLEVEL_MONOSCENEANIMATIONHANDLER_ONSCENEANIMATIONPLAY_OFFSET UNITYSDK_OFFSET(0x14B12160)
#define MOLEMOLE_NAPLEVEL_MONOSCENEANIMATIONHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14B12220)

namespace MoleMole
{
	inline static constexpr unsigned int NapLevel_MonoSceneAnimationHandler_TypeDefinitionIndex = 39763;

	class NapLevel_MonoSceneAnimationHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MONOSCENEANIMATIONHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MONOSCENEANIMATIONHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MONOSCENEANIMATIONHANDLER_ONDISABLE_OFFSET))(this);
		}

		::HNGFDKLCIBE OnSceneAnimationPlay(::System::String* EOAOLNDPOEN, ::System::Int32 AMHLPIAIEDC, ::System::Int32 PHNMGNKKILJ, ::System::Boolean EPGLPGPOOJN, ::System::Boolean COEFBDIAGBI)
		{
			return ((::HNGFDKLCIBE(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MONOSCENEANIMATIONHANDLER_ONSCENEANIMATIONPLAY_OFFSET))(this, EOAOLNDPOEN, AMHLPIAIEDC, PHNMGNKKILJ, EPGLPGPOOJN, COEFBDIAGBI);
		}

		::HNGFDKLCIBE OnSceneAnimationInterrupt(::System::String* EOAOLNDPOEN)
		{
			return ((::HNGFDKLCIBE(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MONOSCENEANIMATIONHANDLER_ONSCENEANIMATIONINTERRUPT_OFFSET))(this, EOAOLNDPOEN);
		}
	};
}
