#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace CriWare { class CriMonoBehaviour; }
namespace CriWare { class CriMonoBehaviourManager; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CRIWARE_CRIMONOBEHAVIOURMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F463E30)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F464350)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1F463B30)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F464340)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_GETINDEX_OFFSET UNITYSDK_OFFSET(0x1F463C20)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1F4635E0)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1F464100)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1F4636F0)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1F463950)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F463EC0)

namespace CriWare
{
	inline static constexpr unsigned int CriMonoBehaviourManager_TypeDefinitionIndex = 41175;

	class CriMonoBehaviourManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::CriWare::CriMonoBehaviourManager** StaticGet__instance()
		{
			return (::CriWare::CriMonoBehaviourManager**)UnitySDK::FromName("CriWare", "CriMonoBehaviourManager")->GetStaticField(0x5E410);
		}

		static ::System::Collections::Generic::List_1<::CriWare::CriMonoBehaviour*>** StaticGet_criMonoBehaviourList()
		{
			return (::System::Collections::Generic::List_1<::CriWare::CriMonoBehaviour*>**)UnitySDK::FromName("CriWare", "CriMonoBehaviourManager")->GetStaticField(0x5E418);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_CCTOR_OFFSET))();
		}

		static ::CriWare::CriMonoBehaviourManager* get_instance()
		{
			return ((::CriWare::CriMonoBehaviourManager*(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void CreateInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_CREATEINSTANCE_OFFSET))();
		}

		static ::System::Int32 GetIndex(::CriWare::CriMonoBehaviour* a1)
		{
			return ((::System::Int32(*)(::CriWare::CriMonoBehaviour*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_GETINDEX_OFFSET))(a1);
		}

		::System::Boolean Register(::CriWare::CriMonoBehaviour* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriMonoBehaviour*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_REGISTER_OFFSET))(this, a1);
		}

		static ::System::Boolean UnRegister(::CriWare::CriMonoBehaviour* a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriMonoBehaviour*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_UNREGISTER_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_LATEUPDATE_OFFSET))(this);
		}

	};
}
