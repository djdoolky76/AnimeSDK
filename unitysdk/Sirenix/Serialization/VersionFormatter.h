#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class Version; }

#define SIRENIX_SERIALIZATION_VERSIONFORMATTER_GETUNINITIALIZEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1F84DD60)
#define SIRENIX_SERIALIZATION_VERSIONFORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x1F84DD70)
#define SIRENIX_SERIALIZATION_VERSIONFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1F84E0C0)
#define SIRENIX_SERIALIZATION_VERSIONFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F84E3B0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int VersionFormatter_TypeDefinitionIndex = 7502;

	class VersionFormatter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VERSIONFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Version* GetUninitializedObject()
		{
			return ((::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VERSIONFORMATTER_GETUNINITIALIZEDOBJECT_OFFSET))(this);
		}

		::System::Void Read(::System::Version*& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Version*&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VERSIONFORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Void Write(::System::Version*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Version*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VERSIONFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
