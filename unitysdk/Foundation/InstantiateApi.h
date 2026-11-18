#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/InstantiationParameters.h"

namespace Foundation { class InstanceCreateRequest; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define FOUNDATION_INSTANTIATEAPI_APPLYPOSTINSTANTIATE_OFFSET UNITYSDK_OFFSET(0x1EA29270)
#define FOUNDATION_INSTANTIATEAPI_CANCEL_OFFSET UNITYSDK_OFFSET(0x1EA28810)
#define FOUNDATION_INSTANTIATEAPI_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EA28230)
#define FOUNDATION_INSTANTIATEAPI_CREATEASYNC_OFFSET UNITYSDK_OFFSET(0x1EA28090)
#define FOUNDATION_INSTANTIATEAPI_CREATESYNC_OFFSET UNITYSDK_OFFSET(0x1EA28140)
#define FOUNDATION_INSTANTIATEAPI_CREATE_OFFSET UNITYSDK_OFFSET(0x1EA28000)
#define FOUNDATION_INSTANTIATEAPI_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1EA29630)
#define FOUNDATION_INSTANTIATEAPI_GET_CANUSEASYNCINSTANTIATE_OFFSET UNITYSDK_OFFSET(0x1EA28DB0)
#define FOUNDATION_INSTANTIATEAPI_INSTANTIATESYNC_OFFSET UNITYSDK_OFFSET(0x1EA28290)
#define FOUNDATION_INSTANTIATEAPI_ISDONE_OFFSET UNITYSDK_OFFSET(0x1EA27F50)
#define FOUNDATION_INSTANTIATEAPI_SHOULDSETPARENTAFTERINSTANTIATE_OFFSET UNITYSDK_OFFSET(0x1EA294A0)
#define FOUNDATION_INSTANTIATEAPI_STARTASYNC_OFFSET UNITYSDK_OFFSET(0x1EA28DC0)
#define FOUNDATION_INSTANTIATEAPI_TAKEASYNCRESULT_OFFSET UNITYSDK_OFFSET(0x1EA28C00)
#define FOUNDATION_INSTANTIATEAPI_TAKERESULT_OFFSET UNITYSDK_OFFSET(0x1EA28A60)
#define FOUNDATION_INSTANTIATEAPI_WAITFORASYNCCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1EA28970)
#define FOUNDATION_INSTANTIATEAPI_WAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1EA28910)
#define FOUNDATION_INSTANTIATEAPI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA298F0)

namespace Foundation
{
	inline static constexpr unsigned int InstantiateApi_TypeDefinitionIndex = 8232;

	class InstantiateApi : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_SupportAsyncInstantiate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InstantiateApi_TypeDefinitionIndex)->GetStaticField(0x3980);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_INSTANTIATEAPI__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDone(::Foundation::InstanceCreateRequest* request)
		{
			return ((::System::Boolean(*)(::Foundation::InstanceCreateRequest*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANTIATEAPI_ISDONE_OFFSET))(request);
		}

		static ::System::Boolean Create(::Foundation::InstanceCreateRequest* request, ::UnityEngine::Object* source, ::Foundation::AssetPath url)
		{
			return ((::System::Boolean(*)(::Foundation::InstanceCreateRequest*, ::UnityEngine::Object*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANTIATEAPI_CREATE_OFFSET))(request, source, url);
		}

		static ::System::Boolean CreateSync(::Foundation::InstanceCreateRequest* request, ::UnityEngine::Object* source, ::Foundation::AssetPath url)
		{
			return ((::System::Boolean(*)(::Foundation::InstanceCreateRequest*, ::UnityEngine::Object*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANTIATEAPI_CREATESYNC_OFFSET))(request, source, url);
		}

		static ::UnityEngine::Object* InstantiateSync(::UnityEngine::Object* source, ::Foundation::InstantiationParameters parameters, ::Foundation::AssetPath url)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::Foundation::InstantiationParameters, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANTIATEAPI_INSTANTIATESYNC_OFFSET))(source, parameters, url);
		}

		static ::System::Void Cancel(::Foundation::InstanceCreateRequest* request)
		{
			return ((::System::Void(*)(::Foundation::InstanceCreateRequest*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANTIATEAPI_CANCEL_OFFSET))(request);
		}

		static ::System::Void WaitForCompletion(::Foundation::InstanceCreateRequest* request)
		{
			return ((::System::Void(*)(::Foundation::InstanceCreateRequest*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANTIATEAPI_WAITFORCOMPLETION_OFFSET))(request);
		}

		static ::UnityEngine::Object* TakeResult(::Foundation::InstanceCreateRequest* request)
		{
			return ((::UnityEngine::Object*(*)(::Foundation::InstanceCreateRequest*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANTIATEAPI_TAKERESULT_OFFSET))(request);
		}

		static ::System::Void Clear(::Foundation::InstanceCreateRequest* request)
		{
			return ((::System::Void(*)(::Foundation::InstanceCreateRequest*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANTIATEAPI_CLEAR_OFFSET))(request);
		}

		static ::System::Boolean get_CanUseAsyncInstantiate()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_INSTANTIATEAPI_GET_CANUSEASYNCINSTANTIATE_OFFSET))();
		}

		static ::System::Boolean CreateAsync(::Foundation::InstanceCreateRequest* request, ::UnityEngine::Object* source)
		{
			return ((::System::Boolean(*)(::Foundation::InstanceCreateRequest*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANTIATEAPI_CREATEASYNC_OFFSET))(request, source);
		}

		static ::System::Boolean StartAsync(::Foundation::InstanceCreateRequest* request, ::UnityEngine::Object* source)
		{
			return ((::System::Boolean(*)(::Foundation::InstanceCreateRequest*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANTIATEAPI_STARTASYNC_OFFSET))(request, source);
		}

		static ::System::Void WaitForAsyncCompletion(::Foundation::InstanceCreateRequest* request)
		{
			return ((::System::Void(*)(::Foundation::InstanceCreateRequest*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANTIATEAPI_WAITFORASYNCCOMPLETION_OFFSET))(request);
		}

		static ::UnityEngine::Object* TakeAsyncResult(::Foundation::InstanceCreateRequest* request, ::Foundation::AssetPath url)
		{
			return ((::UnityEngine::Object*(*)(::Foundation::InstanceCreateRequest*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANTIATEAPI_TAKEASYNCRESULT_OFFSET))(request, url);
		}

		static ::System::Void ApplyPostInstantiate(::Foundation::InstanceCreateRequest* request, ::UnityEngine::Object* result, ::Foundation::AssetPath url)
		{
			return ((::System::Void(*)(::Foundation::InstanceCreateRequest*, ::UnityEngine::Object*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANTIATEAPI_APPLYPOSTINSTANTIATE_OFFSET))(request, result, url);
		}

		static ::System::Boolean ShouldSetParentAfterInstantiate(::Foundation::InstantiationParameters parameters)
		{
			return ((::System::Boolean(*)(::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANTIATEAPI_SHOULDSETPARENTAFTERINSTANTIATE_OFFSET))(parameters);
		}

		static ::UnityEngine::Transform* GetTransform(::UnityEngine::Object* instance)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANTIATEAPI_GETTRANSFORM_OFFSET))(instance);
		}
	};
}
