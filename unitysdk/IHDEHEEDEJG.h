#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONEGHOPELAC.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

#define IHDEHEEDEJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1641A1F0)
#define IHDEHEEDEJG_OJNLCJGAFIH_OFFSET UNITYSDK_OFFSET(0x16419EF0)
#define IHDEHEEDEJG_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x16419E90)

inline static constexpr unsigned int IHDEHEEDEJG_TypeDefinitionIndex = 48416;

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
