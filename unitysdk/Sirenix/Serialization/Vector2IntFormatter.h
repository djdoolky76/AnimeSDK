#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define SIRENIX_SERIALIZATION_VECTOR2INTFORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x200702C0)
#define SIRENIX_SERIALIZATION_VECTOR2INTFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x200703B0)
#define SIRENIX_SERIALIZATION_VECTOR2INTFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x20070510)
#define SIRENIX_SERIALIZATION_VECTOR2INTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x200704B0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int Vector2IntFormatter_TypeDefinitionIndex = 95400;

	class Vector2IntFormatter
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Serializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Vector2IntFormatter_TypeDefinitionIndex)->GetStaticField(0x52BA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR2INTFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR2INTFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Read(::UnityEngine::Vector2Int& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR2INTFORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Void Write(::UnityEngine::Vector2Int& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR2INTFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
