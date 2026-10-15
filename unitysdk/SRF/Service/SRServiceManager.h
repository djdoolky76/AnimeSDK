#pragma once
#include "unitysdk/unitysdk.h"
namespace SRF { template <typename T> class SRList_1; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class MethodInfo; }

#define SRF_SERVICE_SRSERVICEMANAGER_AUTOCREATESERVICE_OFFSET UNITYSDK_OFFSET(0x1ED77740)
#define SRF_SERVICE_SRSERVICEMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1ED77DC0)
#define SRF_SERVICE_SRSERVICEMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED79AC0)
#define SRF_SERVICE_SRSERVICEMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED79A90)
#define SRF_SERVICE_SRSERVICEMANAGER_DEFAULTSERVICECONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1ED783A0)
#define SRF_SERVICE_SRSERVICEMANAGER_GETSERVICEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1ED77320)
#define SRF_SERVICE_SRSERVICEMANAGER_GETSERVICE_1_OFFSET UNITYSDK_OFFSET(0x1ED76F70)
#define SRF_SERVICE_SRSERVICEMANAGER_GETSTATICMETHODS_OFFSET UNITYSDK_OFFSET(0x1ED799E0)
#define SRF_SERVICE_SRSERVICEMANAGER_GET_ISLOADING_OFFSET UNITYSDK_OFFSET(0x1ED772F0)
#define SRF_SERVICE_SRSERVICEMANAGER_HASSERVICE_1_OFFSET UNITYSDK_OFFSET(0x1ED778D0)
#define SRF_SERVICE_SRSERVICEMANAGER_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1ED78610)
#define SRF_SERVICE_SRSERVICEMANAGER_REGISTERSERVICE_1_OFFSET UNITYSDK_OFFSET(0x1ED77A80)
#define SRF_SERVICE_SRSERVICEMANAGER_SCANTYPEFORCONSTRUCTORS_OFFSET UNITYSDK_OFFSET(0x1ED786B0)
#define SRF_SERVICE_SRSERVICEMANAGER_SCANTYPEFORSELECTORS_OFFSET UNITYSDK_OFFSET(0x1ED79060)
#define SRF_SERVICE_SRSERVICEMANAGER_SCANTYPE_OFFSET UNITYSDK_OFFSET(0x1ED782A0)
#define SRF_SERVICE_SRSERVICEMANAGER_UNREGISTERSERVICE_1_OFFSET UNITYSDK_OFFSET(0x1ED77520)
#define SRF_SERVICE_SRSERVICEMANAGER_UPDATESTUBS_OFFSET UNITYSDK_OFFSET(0x1ED77E80)

namespace SRF::Service
{
	inline static constexpr unsigned int SRServiceManager_TypeDefinitionIndex = 35416;

	class SRServiceManager
	{
	public:
		::SRF::SRList_1<::System::Object*>* _services; // 0x48
		::System::Collections::Generic::List_1<::System::Object*>* _serviceStubs; // 0x50
		static ::System::Collections::Generic::List_1<::System::Reflection::Assembly*>** StaticGet__assemblies()
		{
			return (::System::Collections::Generic::List_1<::System::Reflection::Assembly*>**)UnitySDK::FromName("SRF.Service", "SRServiceManager")->GetStaticField(0x484E0);
		}

		static ::System::Int32* StaticGet_LoadingCount()
		{
			return (::System::Int32*)UnitySDK::FromName("SRF.Service", "SRServiceManager")->GetStaticField(0x11180);
		}

		static ::System::Boolean* StaticGet__hasQuit()
		{
			return (::System::Boolean*)UnitySDK::FromName("SRF.Service", "SRServiceManager")->GetStaticField(0x11184);
		}

		// static const ::System::Object EnableLogging; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_CCTOR_OFFSET))();
		}

		static ::System::Boolean get_IsLoading()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_GET_ISLOADING_OFFSET))();
		}

		static ::System::Object* GetService_1(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_GETSERVICE_1_OFFSET))(a1);
		}

		static ::System::Object* GetServiceInternal(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_GETSERVICEINTERNAL_OFFSET))(a1);
		}

		static ::System::Boolean HasService_1(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_HASSERVICE_1_OFFSET))(a1);
		}

		static ::System::Void RegisterService_1(::System::Type* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_REGISTERSERVICE_1_OFFSET))(a1, a2);
		}

		static ::System::Void UnRegisterService_1(::System::Type* a1)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_UNREGISTERSERVICE_1_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateStubs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_UPDATESTUBS_OFFSET))(this);
		}

		::System::Object* AutoCreateService(::System::Type* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_AUTOCREATESERVICE_OFFSET))(this, a1);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		static ::System::Object* DefaultServiceConstructor(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_DEFAULTSERVICECONSTRUCTOR_OFFSET))(a1, a2);
		}

		::System::Void ScanType(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_SCANTYPE_OFFSET))(this, a1);
		}

		static ::System::Void ScanTypeForSelectors(::System::Type* a1, ::System::Collections::Generic::List_1<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_SCANTYPEFORSELECTORS_OFFSET))(a1, a2);
		}

		static ::System::Void ScanTypeForConstructors(::System::Type* a1, ::System::Collections::Generic::List_1<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_SCANTYPEFORCONSTRUCTORS_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Reflection::MethodInfo*>* GetStaticMethods(::System::Type* a1)
		{
			return ((::Il2CppArray<::System::Reflection::MethodInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_GETSTATICMETHODS_OFFSET))(a1);
		}

	};
}
