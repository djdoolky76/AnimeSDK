#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_DRAWATTACKRANGE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A06BF20)
#define MOLEMOLE_DRAWATTACKRANGE_PAUSE_OFFSET UNITYSDK_OFFSET(0x1A06C170)
#define MOLEMOLE_DRAWATTACKRANGE_PLAY_OFFSET UNITYSDK_OFFSET(0x1A06C120)
#define MOLEMOLE_DRAWATTACKRANGE_SETATTACKRANGE_OFFSET UNITYSDK_OFFSET(0x1A06C080)
#define MOLEMOLE_DRAWATTACKRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A06C1D0)

namespace MoleMole
{
	inline static constexpr unsigned int DrawAttackRange_TypeDefinitionIndex = 40730;

	class DrawAttackRange : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean CDBHMMCGLEJ; // 0x18
		::System::Byte _padding0[0x7];
		::UnityEngine::Transform* EDHIEFGPCNI; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAWATTACKRANGE__CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAWATTACKRANGE_INITIALIZE_OFFSET))(this);
		}

		::System::Void SetAttackRange(::System::Single LNJFKBBFABK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAWATTACKRANGE_SETATTACKRANGE_OFFSET))(this, LNJFKBBFABK);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAWATTACKRANGE_PLAY_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAWATTACKRANGE_PAUSE_OFFSET))(this);
		}
	};
}
