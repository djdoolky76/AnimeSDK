#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TimelineBindingType.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define TIMELINEBINDINGMAPPER_GETBINDINGENUMTYPE_OFFSET UNITYSDK_OFFSET(0x1CB644D0)
#define TIMELINEBINDINGMAPPER_GETBINDINGTYPE_OFFSET UNITYSDK_OFFSET(0x1CB643A0)
#define TIMELINEBINDINGMAPPER_HASBINDINGTYPE_OFFSET UNITYSDK_OFFSET(0x1CB64610)
#define TIMELINEBINDINGMAPPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB64700)

inline static constexpr unsigned int TimelineBindingMapper_TypeDefinitionIndex = 45757;

class TimelineBindingMapper : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_reverseBindingMap()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TimelineBindingMapper_TypeDefinitionIndex)->GetStaticField(0x45B00);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Type*>** StaticGet_bindingMap()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(TimelineBindingMapper_TypeDefinitionIndex)->GetStaticField(0x45B08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TIMELINEBINDINGMAPPER__CCTOR_OFFSET))();
	}

	static ::System::Type* GetBindingType(::TimelineBindingType bindingType)
	{
		return ((::System::Type*(*)(::TimelineBindingType))((::PBYTE)hIl2Cpp + TIMELINEBINDINGMAPPER_GETBINDINGTYPE_OFFSET))(bindingType);
	}

	static ::TimelineBindingType GetBindingEnumType(::System::Type* refType)
	{
		return ((::TimelineBindingType(*)(::System::Type*))((::PBYTE)hIl2Cpp + TIMELINEBINDINGMAPPER_GETBINDINGENUMTYPE_OFFSET))(refType);
	}

	static ::System::Boolean HasBindingType(::System::Type* refType)
	{
		return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + TIMELINEBINDINGMAPPER_HASBINDINGTYPE_OFFSET))(refType);
	}
};
