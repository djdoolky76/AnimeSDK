#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/GradientAlphaKey.h"
#include "unitysdk/UnityEngine/GradientColorKey.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System::Reflection { class PropertyInfo; }
namespace UnityEngine { class Gradient; }

#define SIRENIX_SERIALIZATION_GRADIENTFORMATTER_GETUNINITIALIZEDOBJECT_OFFSET UNITYSDK_OFFSET(0x200210F0)
#define SIRENIX_SERIALIZATION_GRADIENTFORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x20021140)
#define SIRENIX_SERIALIZATION_GRADIENTFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x20021480)
#define SIRENIX_SERIALIZATION_GRADIENTFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x20021750)
#define SIRENIX_SERIALIZATION_GRADIENTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x200216F0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int GradientFormatter_TypeDefinitionIndex = 7597;

	class GradientFormatter
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::UnityEngine::GradientAlphaKey>*>** StaticGet_AlphaKeysSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::UnityEngine::GradientAlphaKey>*>**)Il2CppClass::FromTypeDefinitionIndex(GradientFormatter_TypeDefinitionIndex)->GetStaticField(0x63D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_EnumSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(GradientFormatter_TypeDefinitionIndex)->GetStaticField(0x63D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::UnityEngine::GradientColorKey>*>** StaticGet_ColorKeysSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::UnityEngine::GradientColorKey>*>**)Il2CppClass::FromTypeDefinitionIndex(GradientFormatter_TypeDefinitionIndex)->GetStaticField(0x63E0);
		}
		static ::System::Reflection::PropertyInfo** StaticGet_ModeProperty()
		{
			return (::System::Reflection::PropertyInfo**)Il2CppClass::FromTypeDefinitionIndex(GradientFormatter_TypeDefinitionIndex)->GetStaticField(0x63E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GRADIENTFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GRADIENTFORMATTER__CCTOR_OFFSET))();
		}

		::UnityEngine::Gradient* GetUninitializedObject()
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GRADIENTFORMATTER_GETUNINITIALIZEDOBJECT_OFFSET))(this);
		}

		::System::Void Read(::UnityEngine::Gradient*& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GRADIENTFORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Void Write(::UnityEngine::Gradient*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GRADIENTFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
