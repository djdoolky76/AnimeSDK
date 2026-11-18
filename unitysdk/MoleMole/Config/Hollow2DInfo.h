#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_HOLLOW2DINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x192B1F10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int Hollow2DInfo_TypeDefinitionIndex = 69933;

	class Hollow2DInfo : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 nameLockedOffset; // 0x10
		::UnityEngine::Vector3 logoScale; // 0x18
		::UnityEngine::Vector2 lockArrowPosition; // 0x24
		::UnityEngine::Vector2 unLockIconPos; // 0x2C
		::System::Int32 gridLayoutOffset; // 0x34
		::UnityEngine::Vector2 unlockArrowPosition; // 0x38
		::UnityEngine::Vector2 redPointPosition; // 0x40
		::UnityEngine::Vector2 tipsOffset; // 0x48
		::System::Int32 verticalOffset; // 0x50
		::UnityEngine::Vector3 logoPos; // 0x54
		::UnityEngine::Vector2 unLockIconSize; // 0x60
		::UnityEngine::Vector2 newPointPosition; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOW2DINFO__CTOR_OFFSET))(this);
		}
	};
}
