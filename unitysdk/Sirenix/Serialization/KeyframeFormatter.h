#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Keyframe.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x1FE96240)
#define SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1FE96F90)
#define SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE95E80)
#define SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE974B0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int KeyframeFormatter_TypeDefinitionIndex = 7598;

	class KeyframeFormatter
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_IntSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KeyframeFormatter_TypeDefinitionIndex)->GetStaticField(0x6060);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_FloatSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(KeyframeFormatter_TypeDefinitionIndex)->GetStaticField(0x6068);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_FieldReaders()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(KeyframeFormatter_TypeDefinitionIndex)->GetStaticField(0x6070);
		}
		static ::System::Boolean* StaticGet_Is_In_2018_1_Or_Above()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(KeyframeFormatter_TypeDefinitionIndex)->GetStaticField(0x3260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Read(::UnityEngine::Keyframe& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Void Write(::UnityEngine::Keyframe& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
