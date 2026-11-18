#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCLHPCOKMPC.h"
#include "unitysdk/GDNLDDJELIH.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOUIENABLESOUNDPLAYER_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x135C0730)
#define MOLEMOLE_MONOUIENABLESOUNDPLAYER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x135C06E0)
#define MOLEMOLE_MONOUIENABLESOUNDPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x135C09A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIEnableSoundPlayer_TypeDefinitionIndex = 60691;

	class MonoUIEnableSoundPlayer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean isCustom; // 0x18
		::System::Byte _padding0[0x3];
		::GCLHPCOKMPC enableSoundType; // 0x1C
		::System::Int32 enableSoundID; // 0x20
		::System::Int32 soundSystemID; // 0x24
		::GDNLDDJELIH soundSystemType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIENABLESOUNDPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIENABLESOUNDPLAYER_ONENABLE_OFFSET))(this);
		}

		::System::Void LCJEELHBNHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIENABLESOUNDPLAYER_LCJEELHBNHG_OFFSET))(this);
		}
	};
}
