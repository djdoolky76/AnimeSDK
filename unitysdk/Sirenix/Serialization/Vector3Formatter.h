#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define SIRENIX_SERIALIZATION_VECTOR3FORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x1FE996A0)
#define SIRENIX_SERIALIZATION_VECTOR3FORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1FE997D0)
#define SIRENIX_SERIALIZATION_VECTOR3FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE99970)
#define SIRENIX_SERIALIZATION_VECTOR3FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE99910)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int Vector3Formatter_TypeDefinitionIndex = 7607;

	class Vector3Formatter
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_FloatSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Vector3Formatter_TypeDefinitionIndex)->GetStaticField(0x60D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR3FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR3FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Read(::UnityEngine::Vector3& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR3FORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Void Write(::UnityEngine::Vector3& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR3FORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
