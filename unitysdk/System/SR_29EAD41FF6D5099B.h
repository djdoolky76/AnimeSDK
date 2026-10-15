#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Resources { class ResourceManager; }

#define SYSTEM_SR_29EAD41FF6D5099B_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE69530)
#define SYSTEM_SR_29EAD41FF6D5099B_FORMAT_OFFSET UNITYSDK_OFFSET(0x1EE69270)
#define SYSTEM_SR_29EAD41FF6D5099B_GETRESOURCESTRING_OFFSET UNITYSDK_OFFSET(0x1EE68F90)
#define SYSTEM_SR_29EAD41FF6D5099B_GET_ARG_ARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1EE69450)
#define SYSTEM_SR_29EAD41FF6D5099B_GET_ARG_TYPENOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1EE694C0)
#define SYSTEM_SR_29EAD41FF6D5099B_GET_RESOURCEMANAGER_OFFSET UNITYSDK_OFFSET(0x1EE69180)
#define SYSTEM_SR_29EAD41FF6D5099B_USINGRESOURCEKEYS_OFFSET UNITYSDK_OFFSET(0x1EE68F30)

namespace System
{
	inline static constexpr unsigned int SR_29EAD41FF6D5099B_TypeDefinitionIndex = 3854;

	class SR_29EAD41FF6D5099B : public ::System::Object
	{
	public:
		static ::System::Resources::ResourceManager** StaticGet_s_resourceManager()
		{
			return (::System::Resources::ResourceManager**)UnitySDK::FromName("System", "SR")->GetStaticField(0x100);
		}

		static ::System::Boolean* StaticGet_s_usingResourceKeys()
		{
			return (::System::Boolean*)UnitySDK::FromName("System", "SR")->GetStaticField(0xF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_29EAD41FF6D5099B_CCTOR_OFFSET))();
		}

		static ::System::Boolean UsingResourceKeys()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_29EAD41FF6D5099B_USINGRESOURCEKEYS_OFFSET))();
		}

		static ::System::String* GetResourceString(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SR_29EAD41FF6D5099B_GETRESOURCESTRING_OFFSET))(a1);
		}

		static ::System::String* Format(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SR_29EAD41FF6D5099B_FORMAT_OFFSET))(a1, a2);
		}

		static ::System::Resources::ResourceManager* get_ResourceManager()
		{
			return ((::System::Resources::ResourceManager*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_29EAD41FF6D5099B_GET_RESOURCEMANAGER_OFFSET))();
		}

		static ::System::String* get_Arg_ArgumentOutOfRangeException()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_29EAD41FF6D5099B_GET_ARG_ARGUMENTOUTOFRANGEEXCEPTION_OFFSET))();
		}

		static ::System::String* get_Arg_TypeNotSupported()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_29EAD41FF6D5099B_GET_ARG_TYPENOTSUPPORTED_OFFSET))();
		}

	};
}
