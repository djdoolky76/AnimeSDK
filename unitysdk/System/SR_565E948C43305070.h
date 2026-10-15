#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Resources { class ResourceManager; }

#define SYSTEM_SR_565E948C43305070_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE46C60)
#define SYSTEM_SR_565E948C43305070_FORMAT_OFFSET UNITYSDK_OFFSET(0x1EE46770)
#define SYSTEM_SR_565E948C43305070_GETRESOURCESTRING_OFFSET UNITYSDK_OFFSET(0x1EE46490)
#define SYSTEM_SR_565E948C43305070_GET_ARGUMENT_BADFORMATSPECIFIER_OFFSET UNITYSDK_OFFSET(0x1EE46B10)
#define SYSTEM_SR_565E948C43305070_GET_ARGUMENT_DESTINATIONTOOSHORT_OFFSET UNITYSDK_OFFSET(0x1EE46AA0)
#define SYSTEM_SR_565E948C43305070_GET_ARGUMENT_GWITHPRECISIONNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1EE418B0)
#define SYSTEM_SR_565E948C43305070_GET_ARGUMENT_INVALIDTYPEWITHPOINTERSNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1EE46A30)
#define SYSTEM_SR_565E948C43305070_GET_ARGUMENT_PRECISIONTOOLARGE_OFFSET UNITYSDK_OFFSET(0x1EE46B80)
#define SYSTEM_SR_565E948C43305070_GET_ENDPOSITIONNOTREACHED_OFFSET UNITYSDK_OFFSET(0x1EE46BF0)
#define SYSTEM_SR_565E948C43305070_GET_NOTSUPPORTED_CANNOTCALLEQUALSONSPAN_OFFSET UNITYSDK_OFFSET(0x1EE46950)
#define SYSTEM_SR_565E948C43305070_GET_NOTSUPPORTED_CANNOTCALLGETHASHCODEONSPAN_OFFSET UNITYSDK_OFFSET(0x1EE469C0)
#define SYSTEM_SR_565E948C43305070_GET_RESOURCEMANAGER_OFFSET UNITYSDK_OFFSET(0x1EE46680)
#define SYSTEM_SR_565E948C43305070_USINGRESOURCEKEYS_OFFSET UNITYSDK_OFFSET(0x1EE46430)

namespace System
{
	inline static constexpr unsigned int SR_565E948C43305070_TypeDefinitionIndex = 4987;

	class SR_565E948C43305070 : public ::System::Object
	{
	public:
		static ::System::Resources::ResourceManager** StaticGet_s_resourceManager()
		{
			return (::System::Resources::ResourceManager**)UnitySDK::FromName("System", "SR")->GetStaticField(0x1C0);
		}

		static ::System::Boolean* StaticGet_s_usingResourceKeys()
		{
			return (::System::Boolean*)UnitySDK::FromName("System", "SR")->GetStaticField(0x130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_565E948C43305070_CCTOR_OFFSET))();
		}

		static ::System::Boolean UsingResourceKeys()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_565E948C43305070_USINGRESOURCEKEYS_OFFSET))();
		}

		static ::System::String* GetResourceString(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SR_565E948C43305070_GETRESOURCESTRING_OFFSET))(a1);
		}

		static ::System::String* Format(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SR_565E948C43305070_FORMAT_OFFSET))(a1, a2);
		}

		static ::System::Resources::ResourceManager* get_ResourceManager()
		{
			return ((::System::Resources::ResourceManager*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_565E948C43305070_GET_RESOURCEMANAGER_OFFSET))();
		}

		static ::System::String* get_NotSupported_CannotCallEqualsOnSpan()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_565E948C43305070_GET_NOTSUPPORTED_CANNOTCALLEQUALSONSPAN_OFFSET))();
		}

		static ::System::String* get_NotSupported_CannotCallGetHashCodeOnSpan()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_565E948C43305070_GET_NOTSUPPORTED_CANNOTCALLGETHASHCODEONSPAN_OFFSET))();
		}

		static ::System::String* get_Argument_InvalidTypeWithPointersNotSupported()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_565E948C43305070_GET_ARGUMENT_INVALIDTYPEWITHPOINTERSNOTSUPPORTED_OFFSET))();
		}

		static ::System::String* get_Argument_DestinationTooShort()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_565E948C43305070_GET_ARGUMENT_DESTINATIONTOOSHORT_OFFSET))();
		}

		static ::System::String* get_Argument_BadFormatSpecifier()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_565E948C43305070_GET_ARGUMENT_BADFORMATSPECIFIER_OFFSET))();
		}

		static ::System::String* get_Argument_GWithPrecisionNotSupported()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_565E948C43305070_GET_ARGUMENT_GWITHPRECISIONNOTSUPPORTED_OFFSET))();
		}

		static ::System::String* get_Argument_PrecisionTooLarge()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_565E948C43305070_GET_ARGUMENT_PRECISIONTOOLARGE_OFFSET))();
		}

		static ::System::String* get_EndPositionNotReached()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_565E948C43305070_GET_ENDPOSITIONNOTREACHED_OFFSET))();
		}

	};
}
