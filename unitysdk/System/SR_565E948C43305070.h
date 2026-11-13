#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Resources { class ResourceManager; }

#define SYSTEM_SR_565E948C43305070_CCTOR_OFFSET UNITYSDK_OFFSET(0x20786910)
#define SYSTEM_SR_565E948C43305070_FORMAT_OFFSET UNITYSDK_OFFSET(0x20786420)
#define SYSTEM_SR_565E948C43305070_GETRESOURCESTRING_OFFSET UNITYSDK_OFFSET(0x20786140)
#define SYSTEM_SR_565E948C43305070_GET_ARGUMENT_BADFORMATSPECIFIER_OFFSET UNITYSDK_OFFSET(0x207867C0)
#define SYSTEM_SR_565E948C43305070_GET_ARGUMENT_DESTINATIONTOOSHORT_OFFSET UNITYSDK_OFFSET(0x20786750)
#define SYSTEM_SR_565E948C43305070_GET_ARGUMENT_GWITHPRECISIONNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x20781560)
#define SYSTEM_SR_565E948C43305070_GET_ARGUMENT_INVALIDTYPEWITHPOINTERSNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x207866E0)
#define SYSTEM_SR_565E948C43305070_GET_ARGUMENT_PRECISIONTOOLARGE_OFFSET UNITYSDK_OFFSET(0x20786830)
#define SYSTEM_SR_565E948C43305070_GET_ENDPOSITIONNOTREACHED_OFFSET UNITYSDK_OFFSET(0x207868A0)
#define SYSTEM_SR_565E948C43305070_GET_NOTSUPPORTED_CANNOTCALLEQUALSONSPAN_OFFSET UNITYSDK_OFFSET(0x20786600)
#define SYSTEM_SR_565E948C43305070_GET_NOTSUPPORTED_CANNOTCALLGETHASHCODEONSPAN_OFFSET UNITYSDK_OFFSET(0x20786670)
#define SYSTEM_SR_565E948C43305070_GET_RESOURCEMANAGER_OFFSET UNITYSDK_OFFSET(0x20786330)
#define SYSTEM_SR_565E948C43305070_USINGRESOURCEKEYS_OFFSET UNITYSDK_OFFSET(0x207860E0)

namespace System
{
	inline static constexpr unsigned int SR_565E948C43305070_TypeDefinitionIndex = 4992;

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
