#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Resources { class ResourceManager; }

#define SYSTEM_SR_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED87080)
#define SYSTEM_SR_GETRESOURCESTRING_OFFSET UNITYSDK_OFFSET(0x1ED86D70)
#define SYSTEM_SR_GET_ARGUMENTEXCEPTION_BUFFERNOTFROMPOOL_OFFSET UNITYSDK_OFFSET(0x1ED87010)
#define SYSTEM_SR_GET_RESOURCEMANAGER_OFFSET UNITYSDK_OFFSET(0x1ED86F20)
#define SYSTEM_SR_USINGRESOURCEKEYS_OFFSET UNITYSDK_OFFSET(0x1ED86D30)

namespace System
{
	inline static constexpr unsigned int SR_TypeDefinitionIndex = 3747;

	class SR : public ::System::Object
	{
	public:
		static ::System::Resources::ResourceManager** StaticGet_s_resourceManager()
		{
			return (::System::Resources::ResourceManager**)UnitySDK::FromName("System", "SR")->GetStaticField(0x70);
		}

		static ::System::Boolean* StaticGet_s_usingResourceKeys()
		{
			return (::System::Boolean*)UnitySDK::FromName("System", "SR")->GetStaticField(0x10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_CCTOR_OFFSET))();
		}

		static ::System::Boolean UsingResourceKeys()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_USINGRESOURCEKEYS_OFFSET))();
		}

		static ::System::String* GetResourceString(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SR_GETRESOURCESTRING_OFFSET))(a1);
		}

		static ::System::Resources::ResourceManager* get_ResourceManager()
		{
			return ((::System::Resources::ResourceManager*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_RESOURCEMANAGER_OFFSET))();
		}

		static ::System::String* get_ArgumentException_BufferNotFromPool()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_ARGUMENTEXCEPTION_BUFFERNOTFROMPOOL_OFFSET))();
		}

	};
}
