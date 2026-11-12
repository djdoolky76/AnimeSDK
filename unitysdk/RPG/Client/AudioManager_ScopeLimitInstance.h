#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNCKCFCMCBK;
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0xD021320)
#define RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE_INIT_OFFSET UNITYSDK_OFFSET(0xD020E50)
#define RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE_RPG_IREFERENCE_CLEAR_OFFSET UNITYSDK_OFFSET(0xD021240)
#define RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE_TICK_OFFSET UNITYSDK_OFFSET(0xD0211D0)
#define RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE__CHECKISINRANGE_OFFSET UNITYSDK_OFFSET(0xD020EB0)
#define RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE__DEBUG_OFFSET UNITYSDK_OFFSET(0xD021290)
#define RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE__ONINSCOPESTATECHANGED_OFFSET UNITYSDK_OFFSET(0xD021100)

namespace RPG::Client
{
	inline static constexpr unsigned int AudioManager_ScopeLimitInstance_TypeDefinitionIndex = 61007;

	class AudioManager_ScopeLimitInstance : public ::System::Object
	{
	public:
		::HNCKCFCMCBK* Target; // 0x10
		::System::Boolean _IsInScope; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE_CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE_INIT_OFFSET))(this, a1);
		}

		::System::Void Tick(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE_TICK_OFFSET))(this, a1);
		}

		::System::Void RPG_IReference_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE_RPG_IREFERENCE_CLEAR_OFFSET))(this);
		}

		::System::Boolean _CheckIsInRange(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE__CHECKISINRANGE_OFFSET))(this, a1);
		}

		::System::Void _OnInScopeStateChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE__ONINSCOPESTATECHANGED_OFFSET))(this, a1);
		}

		::System::Void _Debug()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SCOPELIMITINSTANCE__DEBUG_OFFSET))(this);
		}

	};
}
