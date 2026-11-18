#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SIRENIX_SERIALIZATION_TWOWAYSERIALIZATIONBINDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF9C880)
#define SIRENIX_SERIALIZATION_TWOWAYSERIALIZATIONBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF9C870)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int TwoWaySerializationBinder_TypeDefinitionIndex = 7548;

	class TwoWaySerializationBinder : public ::System::Object
	{
	public:
		static ::Sirenix::Serialization::TwoWaySerializationBinder** StaticGet_Default()
		{
			return (::Sirenix::Serialization::TwoWaySerializationBinder**)Il2CppClass::FromTypeDefinitionIndex(TwoWaySerializationBinder_TypeDefinitionIndex)->GetStaticField(0x6250);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_TWOWAYSERIALIZATIONBINDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_TWOWAYSERIALIZATIONBINDER__CCTOR_OFFSET))();
		}
	};
}
