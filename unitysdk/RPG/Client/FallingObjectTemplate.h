#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class INFENGJKFBI;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FALLINGOBJECTTEMPLATE_APIDHHKLGEJ_OFFSET UNITYSDK_OFFSET(0xCE62870)
#define RPG_CLIENT_FALLINGOBJECTTEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0xCE62E90)
#define RPG_CLIENT_FALLINGOBJECTTEMPLATE_DKBKNGPBELL_OFFSET UNITYSDK_OFFSET(0xCE62BA0)
#define RPG_CLIENT_FALLINGOBJECTTEMPLATE_DNPJEFGIGEO_OFFSET UNITYSDK_OFFSET(0xCE62DB0)
#define RPG_CLIENT_FALLINGOBJECTTEMPLATE_KEGPGKGFIKO_OFFSET UNITYSDK_OFFSET(0xCE62CE0)

namespace RPG::Client
{
	class FallingObjectTemplate : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* FallingObject; // 0x10
		::System::Single Resistance; // 0x18
		::UnityEngine::Vector3 Gravity; // 0x1C
		::System::Single Mass; // 0x28
		::System::Single EmissionWeight; // 0x2C
		::System::Single RotateSpeed; // 0x30
		::System::Single MaxStartSpeed; // 0x34
		::System::Single MaxStartAcceleration; // 0x38
		::System::Boolean EnableSplash; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Single SplashScale; // 0x40
		::UnityEngine::Vector2 MinmaxRandomScale; // 0x44
		::System::Boolean _InitIRIDatas; // 0x4C
		::System::Byte _padding1[0x3];
		::System::Collections::Generic::List_1<::System::Object*>* InstanceObjectIRIDatas; // 0x50
		::System::Collections::Generic::List_1<::INFENGJKFBI*>* _ObjectPool; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FALLINGOBJECTTEMPLATE_CTOR_OFFSET))(this);
		}

		::System::Void APIDHHKLGEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FALLINGOBJECTTEMPLATE_APIDHHKLGEJ_OFFSET))(this);
		}

		::INFENGJKFBI* DKBKNGPBELL(::UnityEngine::Transform* a1)
		{
			return ((::INFENGJKFBI*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FALLINGOBJECTTEMPLATE_DKBKNGPBELL_OFFSET))(this, a1);
		}

		::System::Void KEGPGKGFIKO(::INFENGJKFBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INFENGJKFBI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FALLINGOBJECTTEMPLATE_KEGPGKGFIKO_OFFSET))(this, a1);
		}

		::System::Void DNPJEFGIGEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FALLINGOBJECTTEMPLATE_DNPJEFGIGEO_OFFSET))(this);
		}

	};
}
