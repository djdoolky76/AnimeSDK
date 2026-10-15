#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

#define JFOHLGCBLDO_CTOR_OFFSET UNITYSDK_OFFSET(0x1665B3C0)
#define JFOHLGCBLDO_GET_USEUI3DCAMERA_OFFSET UNITYSDK_OFFSET(0x1665AF20)
#define JFOHLGCBLDO_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1665AF40)
#define JFOHLGCBLDO_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x1665B200)
#define JFOHLGCBLDO_SET_USEUI3DCAMERA_OFFSET UNITYSDK_OFFSET(0x1665AF30)

inline static constexpr unsigned int JFOHLGCBLDO_TypeDefinitionIndex = 48060;

	class JFOHLGCBLDO : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Boolean _UseUI3DCamera_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOHLGCBLDO_CTOR_OFFSET))(this);
		}

		::System::Boolean get_UseUI3DCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOHLGCBLDO_GET_USEUI3DCAMERA_OFFSET))(this);
		}

		::System::Void set_UseUI3DCamera(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JFOHLGCBLDO_SET_USEUI3DCAMERA_OFFSET))(this, a1);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + JFOHLGCBLDO_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + JFOHLGCBLDO_ONGRAPHSTOP_OFFSET))(this, a1);
		}

	};
