#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTTCPMESSAGEGAMEOBJECTS_GOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x31C0)
#define HDG_RDTTCPMESSAGEGAMEOBJECTS_GOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3260)
#define HDG_RDTTCPMESSAGEGAMEOBJECTS_GOB_READ_OFFSET UNITYSDK_OFFSET(0x3280)
#define HDG_RDTTCPMESSAGEGAMEOBJECTS_GOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3150)
#define HDG_RDTTCPMESSAGEGAMEOBJECTS_GOB_WRITE_OFFSET UNITYSDK_OFFSET(0x3270)

namespace Hdg
{
	struct alignas(8) rdtTcpMessageGameObjects_Gob
	{
		::System::Boolean m_enabled; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* m_name; // 0x18
		::System::Int32 m_instanceId; // 0x20
		::System::Boolean m_hasParent; // 0x24
		::System::Byte _padding1[0x3];
		::System::Int32 m_parentInstanceId; // 0x28
		::System::Byte _padding2[0x4];
		::System::String* m_scene; // 0x30
		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEGAMEOBJECTS_GOB_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEGAMEOBJECTS_GOB_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEGAMEOBJECTS_GOB_GETHASHCODE_OFFSET))(this);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEGAMEOBJECTS_GOB_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEGAMEOBJECTS_GOB_READ_OFFSET))(this, a1);
		}

	};
}
