#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace CriWare { class CriAtomEx3dListener; }
namespace CriWare { class CriAtomListener; }
namespace CriWare { class CriAtomRegion; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CRIWARE_CRIATOMLISTENER_ACTIVATELISTENER_OFFSET UNITYSDK_OFFSET(0x1EC5EC30)
#define CRIWARE_CRIATOMLISTENER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1EC5E7B0)
#define CRIWARE_CRIATOMLISTENER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC5F480)
#define CRIWARE_CRIATOMLISTENER_CREATEDUMMYNATIVELISTENER_OFFSET UNITYSDK_OFFSET(0x1EC5DAB0)
#define CRIWARE_CRIATOMLISTENER_CRIINTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC5F440)
#define CRIWARE_CRIATOMLISTENER_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC5F430)
#define CRIWARE_CRIATOMLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC5F450)
#define CRIWARE_CRIATOMLISTENER_DESTROYDUMMYNATIVELISTENER_OFFSET UNITYSDK_OFFSET(0x1EC5DBF0)
#define CRIWARE_CRIATOMLISTENER_GET_DUMMYNATIVELISTENER_OFFSET UNITYSDK_OFFSET(0x1EC5E780)
#define CRIWARE_CRIATOMLISTENER_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1EC5DCA0)
#define CRIWARE_CRIATOMLISTENER_GET_NATIVELISTENER_OFFSET UNITYSDK_OFFSET(0x1EC5DC80)
#define CRIWARE_CRIATOMLISTENER_GET_REGION3D_OFFSET UNITYSDK_OFFSET(0x1EC5E450)
#define CRIWARE_CRIATOMLISTENER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1EC5F300)
#define CRIWARE_CRIATOMLISTENER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1EC5F110)
#define CRIWARE_CRIATOMLISTENER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EC5EBE0)
#define CRIWARE_CRIATOMLISTENER_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1EC5DCB0)
#define CRIWARE_CRIATOMLISTENER_SET_NATIVELISTENER_OFFSET UNITYSDK_OFFSET(0x1EC5DC90)
#define CRIWARE_CRIATOMLISTENER_SET_REGION3D_OFFSET UNITYSDK_OFFSET(0x1EC5E460)
#define CRIWARE_CRIATOMLISTENER_START_OFFSET UNITYSDK_OFFSET(0x1EC5EBC0)
#define CRIWARE_CRIATOMLISTENER_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x1EC5DE10)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomListener_TypeDefinitionIndex = 40909;

	class CriAtomListener : public ::CriWare::CriMonoBehaviour
	{
	public:
		::CriWare::CriAtomEx3dListener* _nativeListener_k__BackingField; // 0x28
		::CriWare::CriAtomRegion* regionOnStart; // 0x30
		::System::Boolean activateListenerOnEnable; // 0x38
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 lastPosition; // 0x3C
		::CriWare::CriAtomRegion* currentRegion; // 0x48
		::System::Boolean _isActive; // 0x50
		static ::CriWare::CriAtomListener** StaticGet_exclusiveListener()
		{
			return (::CriWare::CriAtomListener**)UnitySDK::FromName("CriWare", "CriAtomListener")->GetStaticField(0x5C510);
		}

		static ::CriWare::CriAtomEx3dListener** StaticGet_dummyNativeListener()
		{
			return (::CriWare::CriAtomEx3dListener**)UnitySDK::FromName("CriWare", "CriAtomListener")->GetStaticField(0x5C518);
		}

		static ::System::Collections::Generic::List_1<::CriWare::CriAtomListener*>** StaticGet_listenersList()
		{
			return (::System::Collections::Generic::List_1<::CriWare::CriAtomListener*>**)UnitySDK::FromName("CriWare", "CriAtomListener")->GetStaticField(0x5C520);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_CCTOR_OFFSET))();
		}

		static ::System::Void CreateDummyNativeListener()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_CREATEDUMMYNATIVELISTENER_OFFSET))();
		}

		static ::System::Void DestroyDummyNativeListener()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_DESTROYDUMMYNATIVELISTENER_OFFSET))();
		}

		::CriWare::CriAtomEx3dListener* get_nativeListener()
		{
			return ((::CriWare::CriAtomEx3dListener*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_GET_NATIVELISTENER_OFFSET))(this);
		}

		::System::Void set_nativeListener(::CriWare::CriAtomEx3dListener* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx3dListener*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_SET_NATIVELISTENER_OFFSET))(this, a1);
		}

		::System::Boolean get_isActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_isActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_SET_ISACTIVE_OFFSET))(this, a1);
		}

		::CriWare::CriAtomRegion* get_region3d()
		{
			return ((::CriWare::CriAtomRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_GET_REGION3D_OFFSET))(this);
		}

		::System::Void set_region3d(::CriWare::CriAtomRegion* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomRegion*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_SET_REGION3D_OFFSET))(this, a1);
		}

		static ::CriWare::CriAtomEx3dListener* get_DummyNativeListener()
		{
			return ((::CriWare::CriAtomEx3dListener*(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_GET_DUMMYNATIVELISTENER_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_ONDESTROY_OFFSET))(this);
		}

		::System::Void CriInternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_CRIINTERNALUPDATE_OFFSET))(this);
		}

		::System::Void CriInternalLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_CRIINTERNALLATEUPDATE_OFFSET))(this);
		}

		::System::Void UpdatePosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_UPDATEPOSITION_OFFSET))(this);
		}

		::System::Void ActivateListener(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_ACTIVATELISTENER_OFFSET))(this, a1);
		}

	};
}
