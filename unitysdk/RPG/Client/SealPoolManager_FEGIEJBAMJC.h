#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MarbleTransformAnimationHandle;
namespace UnityEngine { class Rigidbody; }

#define RPG_CLIENT_SEALPOOLMANAGER_FEGIEJBAMJC_CTOR_OFFSET UNITYSDK_OFFSET(0xE0AB010)

namespace RPG::Client
{
	class SealPoolManager_FEGIEJBAMJC : public ::System::Object
	{
	public:
		::MarbleTransformAnimationHandle* CKDKOONONCG; // 0x10
		::UnityEngine::Rigidbody* BIPDNCFCOIN; // 0x18
		::System::Single IDCNNAMOKEH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEALPOOLMANAGER_FEGIEJBAMJC_CTOR_OFFSET))(this);
		}

	};
}
