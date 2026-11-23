#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RFPOOLINGPARTICLES_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x295B550)
#define RAYFIRE_RFPOOLINGPARTICLES_CREATEPARTICLEINSTANCE_OFFSET UNITYSDK_OFFSET(0x295B730)
#define RAYFIRE_RFPOOLINGPARTICLES_CREATEPOOLOBJECT_OFFSET UNITYSDK_OFFSET(0x295B7D0)
#define RAYFIRE_RFPOOLINGPARTICLES_CREATEPOOLROOT_OFFSET UNITYSDK_OFFSET(0x295B890)
#define RAYFIRE_RFPOOLINGPARTICLES_GETPOOLOBJECT_OFFSET UNITYSDK_OFFSET(0x295B9B0)
#define RAYFIRE_RFPOOLINGPARTICLES_STARTPOOLINGCOR_OFFSET UNITYSDK_OFFSET(0x295BA70)
#define RAYFIRE_RFPOOLINGPARTICLES__CTOR_OFFSET UNITYSDK_OFFSET(0x295BB00)

namespace RayFire
{
	inline static constexpr unsigned int RFPoolingParticles_TypeDefinitionIndex = 15461;

	class RFPoolingParticles : public ::System::Object
	{
	public:
		::System::Boolean enable; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 capacity; // 0x14
		::System::Int32 poolRate; // 0x18
		::System::Byte _padding1[0x4];
		::UnityEngine::ParticleSystem* poolInstance; // 0x20
		::UnityEngine::Transform* poolRoot; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* poolList; // 0x30

		static ::UnityEngine::ParticleSystem* CreateParticleInstance()
		{
			return ((::UnityEngine::ParticleSystem*(*)())((::PBYTE)hIl2Cpp + RAYFIRE_RFPOOLINGPARTICLES_CREATEPARTICLEINSTANCE_OFFSET))();
		}

		::System::Collections::IEnumerator* StartPoolingCor(::UnityEngine::Transform* F4C93EE716471CD7)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPOOLINGPARTICLES_STARTPOOLINGCOR_OFFSET))(this, F4C93EE716471CD7);
		}

		::UnityEngine::ParticleSystem* CreatePoolObject(::UnityEngine::Transform* F4C93EE716471CD7)
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPOOLINGPARTICLES_CREATEPOOLOBJECT_OFFSET))(this, F4C93EE716471CD7);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFPOOLINGPARTICLES__CTOR_OFFSET))(this);
		}

		::System::Void CreateInstance(::UnityEngine::Transform* F4C93EE716471CD7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPOOLINGPARTICLES_CREATEINSTANCE_OFFSET))(this, F4C93EE716471CD7);
		}

		::System::Void CreatePoolRoot(::UnityEngine::Transform* F4C93EE716471CD7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPOOLINGPARTICLES_CREATEPOOLROOT_OFFSET))(this, F4C93EE716471CD7);
		}

		::UnityEngine::ParticleSystem* GetPoolObject(::UnityEngine::Transform* F4C93EE716471CD7)
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPOOLINGPARTICLES_GETPOOLOBJECT_OFFSET))(this, F4C93EE716471CD7);
		}
	};
}
