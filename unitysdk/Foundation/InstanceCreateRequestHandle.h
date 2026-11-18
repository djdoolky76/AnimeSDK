#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { class InstanceCreateRequest; }
namespace Foundation { class InstancePoolRequest; }
namespace UnityEngine { class Object; }

#define FOUNDATION_INSTANCECREATEREQUESTHANDLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9704C0)
#define FOUNDATION_INSTANCECREATEREQUESTHANDLE_TRYGETREQUEST_OFFSET UNITYSDK_OFFSET(0x9705B0)
#define FOUNDATION_INSTANCECREATEREQUESTHANDLE_WAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x9705A0)
#define FOUNDATION_INSTANCECREATEREQUESTHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3A5EB0)
#define FOUNDATION_INSTANCECREATEREQUESTHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x970490)

namespace Foundation
{
	inline static constexpr unsigned int InstanceCreateRequestHandle_TypeDefinitionIndex = 8062;

	struct alignas(8) InstanceCreateRequestHandle
	{
		static ::Foundation::InstanceCreateRequestHandle* StaticGet_None()
		{
			return (::Foundation::InstanceCreateRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(InstanceCreateRequestHandle_TypeDefinitionIndex)->GetStaticField(0x6810);
		}
		::Foundation::InstancePoolRequest* owner; // 0x10
		::System::Int32 ownerVersion; // 0x18
		::System::Byte _padding0[0x4];
		::Foundation::InstanceCreateRequest* request; // 0x20
		::System::Int32 requestVersion; // 0x28

		::System::Void _ctor(::Foundation::InstancePoolRequest* owner, ::Foundation::InstanceCreateRequest* request)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::InstancePoolRequest*, ::Foundation::InstanceCreateRequest*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCECREATEREQUESTHANDLE__CTOR_OFFSET))(this, owner, request);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCECREATEREQUESTHANDLE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCECREATEREQUESTHANDLE_GET_ISVALID_OFFSET))(this);
		}

		::UnityEngine::Object* WaitForCompletion()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCECREATEREQUESTHANDLE_WAITFORCOMPLETION_OFFSET))(this);
		}

		::System::Boolean TryGetRequest(::Foundation::InstancePoolRequest* expectedOwner, ::Foundation::InstanceCreateRequest*& createRequest)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::InstancePoolRequest*, ::Foundation::InstanceCreateRequest*&))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCECREATEREQUESTHANDLE_TRYGETREQUEST_OFFSET))(this, expectedOwner, createRequest);
		}
	};
}
