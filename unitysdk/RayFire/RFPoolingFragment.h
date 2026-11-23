#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RayFire { class RayfireRigid; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RFPOOLINGFRAGMENT_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x2971940)
#define RAYFIRE_RFPOOLINGFRAGMENT_CREATEPOOLOBJECT_OFFSET UNITYSDK_OFFSET(0x2971A90)
#define RAYFIRE_RFPOOLINGFRAGMENT_CREATEPOOLROOT_OFFSET UNITYSDK_OFFSET(0x2971C60)
#define RAYFIRE_RFPOOLINGFRAGMENT_CREATERIGIDINSTANCE_OFFSET UNITYSDK_OFFSET(0x2971D80)
#define RAYFIRE_RFPOOLINGFRAGMENT_GETPOOLOBJECT_OFFSET UNITYSDK_OFFSET(0x2971F80)
#define RAYFIRE_RFPOOLINGFRAGMENT_STARTPOOLINGCOR_OFFSET UNITYSDK_OFFSET(0x2972040)
#define RAYFIRE_RFPOOLINGFRAGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x295BB00)

namespace RayFire
{
	inline static constexpr unsigned int RFPoolingFragment_TypeDefinitionIndex = 15504;

	class RFPoolingFragment : public ::System::Object
	{
	public:
		::System::Boolean enable; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 capacity; // 0x14
		::System::Int32 poolRate; // 0x18
		::System::Byte _padding1[0x4];
		::RayFire::RayfireRigid* poolInstance; // 0x20
		::UnityEngine::Transform* poolRoot; // 0x28
		::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>* poolList; // 0x30

		::System::Void CreatePoolRoot(::UnityEngine::Transform* F4C93EE716471CD7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPOOLINGFRAGMENT_CREATEPOOLROOT_OFFSET))(this, F4C93EE716471CD7);
		}

		::System::Void CreateInstance(::UnityEngine::Transform* F4C93EE716471CD7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPOOLINGFRAGMENT_CREATEINSTANCE_OFFSET))(this, F4C93EE716471CD7);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFPOOLINGFRAGMENT__CTOR_OFFSET))(this);
		}

		::RayFire::RayfireRigid* GetPoolObject(::UnityEngine::Transform* F4C93EE716471CD7)
		{
			return ((::RayFire::RayfireRigid*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPOOLINGFRAGMENT_GETPOOLOBJECT_OFFSET))(this, F4C93EE716471CD7);
		}

		::System::Collections::IEnumerator* StartPoolingCor(::UnityEngine::Transform* F4C93EE716471CD7)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPOOLINGFRAGMENT_STARTPOOLINGCOR_OFFSET))(this, F4C93EE716471CD7);
		}

		static ::RayFire::RayfireRigid* CreateRigidInstance()
		{
			return ((::RayFire::RayfireRigid*(*)())((::PBYTE)hIl2Cpp + RAYFIRE_RFPOOLINGFRAGMENT_CREATERIGIDINSTANCE_OFFSET))();
		}

		::RayFire::RayfireRigid* CreatePoolObject(::UnityEngine::Transform* F4C93EE716471CD7)
		{
			return ((::RayFire::RayfireRigid*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPOOLINGFRAGMENT_CREATEPOOLOBJECT_OFFSET))(this, F4C93EE716471CD7);
		}
	};
}
