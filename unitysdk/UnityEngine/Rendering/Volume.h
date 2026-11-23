#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine::Rendering { class VolumeProfile; }

#define UNITYENGINE_RENDERING_VOLUME_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x4040D90)
#define UNITYENGINE_RENDERING_VOLUME_A4B09FBD8C806DDD_OFFSET UNITYSDK_OFFSET(0x4041130)
#define UNITYENGINE_RENDERING_VOLUME_A9705314FB97EA3C_OFFSET UNITYSDK_OFFSET(0x17D6270)
#define UNITYENGINE_RENDERING_VOLUME_AACCD84F17C5A78D_OFFSET UNITYSDK_OFFSET(0x16E1590)
#define UNITYENGINE_RENDERING_VOLUME_B9F0B3A535AB0445_OFFSET UNITYSDK_OFFSET(0x165A410)
#define UNITYENGINE_RENDERING_VOLUME_BC180A0A7C1D7440_OFFSET UNITYSDK_OFFSET(0x17D6420)
#define UNITYENGINE_RENDERING_VOLUME_BD094E8EF107C0E0_OFFSET UNITYSDK_OFFSET(0x4040EC0)
#define UNITYENGINE_RENDERING_VOLUME_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x4040E20)
#define UNITYENGINE_RENDERING_VOLUME_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x4040F70)
#define UNITYENGINE_RENDERING_VOLUME_F2C93DE6EC060A2E_OFFSET UNITYSDK_OFFSET(0x4040D40)
#define UNITYENGINE_RENDERING_VOLUME_F3EFAB6FC6CBE5EE_OFFSET UNITYSDK_OFFSET(0x40411B0)
#define UNITYENGINE_RENDERING_VOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x40410A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int Volume_TypeDefinitionIndex = 20375;

	class Volume : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean m_IsGlobal; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single priority; // 0x24
		::System::Single blendDistance; // 0x28
		::System::Single weight; // 0x2C
		::UnityEngine::Rendering::VolumeProfile* sharedProfile; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* AF857B6E60C7093C; // 0x38
		::System::Int32 FD432E716C355AF5; // 0x40
		::System::Single A9CFC76509BBF4FD; // 0x44
		::UnityEngine::Rendering::VolumeProfile* B262719FAB87AD2F; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME__CTOR_OFFSET))(this);
		}

		::System::Void BD094E8EF107C0E0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_BD094E8EF107C0E0_OFFSET))(this);
		}

		::System::Boolean F2C93DE6EC060A2E()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_F2C93DE6EC060A2E_OFFSET))(this);
		}

		::UnityEngine::Rendering::VolumeProfile* F3EFAB6FC6CBE5EE()
		{
			return ((::UnityEngine::Rendering::VolumeProfile*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_F3EFAB6FC6CBE5EE_OFFSET))(this);
		}

		::System::Void BC180A0A7C1D7440(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_BC180A0A7C1D7440_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_BF13C91AD80643D2_OFFSET))(this);
		}

		::UnityEngine::Rendering::VolumeProfile* A4B09FBD8C806DDD()
		{
			return ((::UnityEngine::Rendering::VolumeProfile*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_A4B09FBD8C806DDD_OFFSET))(this);
		}

		::System::Void AACCD84F17C5A78D(::UnityEngine::Rendering::VolumeProfile* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProfile*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_AACCD84F17C5A78D_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean A9705314FB97EA3C()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_A9705314FB97EA3C_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* B9F0B3A535AB0445()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Collider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_B9F0B3A535AB0445_OFFSET))(this);
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_E02954280801633F_OFFSET))(this);
		}

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_A28D6A0C3E793E7D_OFFSET))(this);
		}
	};
}
