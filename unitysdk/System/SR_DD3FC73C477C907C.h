#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Resources { class ResourceManager; }

#define SYSTEM_SR_DD3FC73C477C907C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20973B30)
#define SYSTEM_SR_DD3FC73C477C907C_FORMAT_OFFSET UNITYSDK_OFFSET(0x209736C0)
#define SYSTEM_SR_DD3FC73C477C907C_GETRESOURCESTRING_OFFSET UNITYSDK_OFFSET(0x20973420)
#define SYSTEM_SR_DD3FC73C477C907C_GET_ARG_KEYNOTFOUNDWITHKEY_OFFSET UNITYSDK_OFFSET(0x20973820)
#define SYSTEM_SR_DD3FC73C477C907C_GET_ARRAYINITIALIZEDSTATENOTEQUAL_OFFSET UNITYSDK_OFFSET(0x20973890)
#define SYSTEM_SR_DD3FC73C477C907C_GET_ARRAYLENGTHSNOTEQUAL_OFFSET UNITYSDK_OFFSET(0x20973900)
#define SYSTEM_SR_DD3FC73C477C907C_GET_COLLECTIONMODIFIEDDURINGENUMERATION_OFFSET UNITYSDK_OFFSET(0x20973970)
#define SYSTEM_SR_DD3FC73C477C907C_GET_DUPLICATEKEY_OFFSET UNITYSDK_OFFSET(0x209739E0)
#define SYSTEM_SR_DD3FC73C477C907C_GET_INVALIDEMPTYOPERATION_OFFSET UNITYSDK_OFFSET(0x20973A50)
#define SYSTEM_SR_DD3FC73C477C907C_GET_INVALIDOPERATIONONDEFAULTARRAY_OFFSET UNITYSDK_OFFSET(0x20973AC0)
#define SYSTEM_SR_DD3FC73C477C907C_GET_RESOURCEMANAGER_OFFSET UNITYSDK_OFFSET(0x209735D0)
#define SYSTEM_SR_DD3FC73C477C907C_USINGRESOURCEKEYS_OFFSET UNITYSDK_OFFSET(0x209733E0)

namespace System
{
	inline static constexpr unsigned int SR_DD3FC73C477C907C_TypeDefinitionIndex = 6589;

	class SR_DD3FC73C477C907C : public ::System::Object
	{
	public:
		static ::System::Resources::ResourceManager** StaticGet_s_resourceManager()
		{
			return (::System::Resources::ResourceManager**)UnitySDK::FromName("System", "SR")->GetStaticField(0x4B0);
		}

		static ::System::Boolean* StaticGet_s_usingResourceKeys()
		{
			return (::System::Boolean*)UnitySDK::FromName("System", "SR")->GetStaticField(0x3E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_DD3FC73C477C907C_CCTOR_OFFSET))();
		}

		static ::System::Boolean UsingResourceKeys()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_DD3FC73C477C907C_USINGRESOURCEKEYS_OFFSET))();
		}

		static ::System::String* GetResourceString(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SR_DD3FC73C477C907C_GETRESOURCESTRING_OFFSET))(a1);
		}

		static ::System::String* Format(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SR_DD3FC73C477C907C_FORMAT_OFFSET))(a1, a2);
		}

		static ::System::Resources::ResourceManager* get_ResourceManager()
		{
			return ((::System::Resources::ResourceManager*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_DD3FC73C477C907C_GET_RESOURCEMANAGER_OFFSET))();
		}

		static ::System::String* get_Arg_KeyNotFoundWithKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_DD3FC73C477C907C_GET_ARG_KEYNOTFOUNDWITHKEY_OFFSET))();
		}

		static ::System::String* get_ArrayInitializedStateNotEqual()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_DD3FC73C477C907C_GET_ARRAYINITIALIZEDSTATENOTEQUAL_OFFSET))();
		}

		static ::System::String* get_ArrayLengthsNotEqual()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_DD3FC73C477C907C_GET_ARRAYLENGTHSNOTEQUAL_OFFSET))();
		}

		static ::System::String* get_CollectionModifiedDuringEnumeration()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_DD3FC73C477C907C_GET_COLLECTIONMODIFIEDDURINGENUMERATION_OFFSET))();
		}

		static ::System::String* get_DuplicateKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_DD3FC73C477C907C_GET_DUPLICATEKEY_OFFSET))();
		}

		static ::System::String* get_InvalidEmptyOperation()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_DD3FC73C477C907C_GET_INVALIDEMPTYOPERATION_OFFSET))();
		}

		static ::System::String* get_InvalidOperationOnDefaultArray()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_DD3FC73C477C907C_GET_INVALIDOPERATIONONDEFAULTARRAY_OFFSET))();
		}

	};
}
