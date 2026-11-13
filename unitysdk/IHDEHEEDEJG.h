#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONEGHOPELAC.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

#define IHDEHEEDEJG_CTOR_OFFSET UNITYSDK_OFFSET(0x19F6BC20)
#define IHDEHEEDEJG_OJNLCJGAFIH_OFFSET UNITYSDK_OFFSET(0x19F6B920)
#define IHDEHEEDEJG_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x19F6B8C0)

inline static constexpr unsigned int IHDEHEEDEJG_TypeDefinitionIndex = 49457;

	class IHDEHEEDEJG : public ::ONEGHOPELAC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDEHEEDEJG_CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + IHDEHEEDEJG_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void OJNLCJGAFIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDEHEEDEJG_OJNLCJGAFIH_OFFSET))(this);
		}

	};
