#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define FOUNDATION_ASSETPOOLRUNMODE___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE91090)
#define FOUNDATION_ASSETPOOLRUNMODE___C__DISPLAYCLASS29_0__GETINSTANCEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1EE91260)
#define FOUNDATION_ASSETPOOLRUNMODE___C__DISPLAYCLASS29_0__GETINSTANCEASYNC_B__1_OFFSET UNITYSDK_OFFSET(0x1EE910A0)
#define FOUNDATION_ASSETPOOLRUNMODE___C__DISPLAYCLASS29_0__GETINSTANCEASYNC_B__2_OFFSET UNITYSDK_OFFSET(0x1EE91390)

namespace Foundation
{
	inline static constexpr unsigned int AssetPoolRunMode___c__DisplayClass29_0_TypeDefinitionIndex = 8132;

	class AssetPoolRunMode___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* completed; // 0x10
		::Foundation::AssetRequestHandle request; // 0x18
		::UnityEngine::Transform* parent; // 0x38
		::Foundation::AssetPath assetPath; // 0x40
		::System::Boolean activeState; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetInstanceAsync_b__1(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE___C__DISPLAYCLASS29_0__GETINSTANCEASYNC_B__1_OFFSET))(this, obj);
		}

		::System::Void _GetInstanceAsync_b__0(::UnityEngine::Object* _p0_, ::Foundation::AssetRequestHandle _p1_)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE___C__DISPLAYCLASS29_0__GETINSTANCEASYNC_B__0_OFFSET))(this, _p0_, _p1_);
		}

		::System::Void _GetInstanceAsync_b__2(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE___C__DISPLAYCLASS29_0__GETINSTANCEASYNC_B__2_OFFSET))(this, obj);
		}
	};
}
