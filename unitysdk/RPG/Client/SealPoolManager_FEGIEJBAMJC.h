#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MarbleTransformAnimationHandle;
namespace UnityEngine { class Rigidbody; }

#define RPG_CLIENT_SEALPOOLMANAGER_FEGIEJBAMJC_CTOR_OFFSET UNITYSDK_OFFSET(0xEB15750)

namespace RPG::Client
{
	inline static constexpr unsigned int SealPoolManager_FEGIEJBAMJC_TypeDefinitionIndex = 61714;

	class SealPoolManager_FEGIEJBAMJC : public ::System::Object
	{
	public:
		::UnityEngine::Rigidbody* BIPDNCFCOIN; // 0x10
		::MarbleTransformAnimationHandle* CKDKOONONCG; // 0x18
		::System::Single IDCNNAMOKEH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEALPOOLMANAGER_FEGIEJBAMJC_CTOR_OFFSET))(this);
		}

	};
}
