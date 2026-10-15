#pragma once
#include "unitysdk/unitysdk.h"
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTTCPMESSAGEGETGAMEOBJECTS_READ_OFFSET UNITYSDK_OFFSET(0x10B0)
#define HDG_RDTTCPMESSAGEGETGAMEOBJECTS_WRITE_OFFSET UNITYSDK_OFFSET(0x10B0)

namespace Hdg
{
	struct alignas(4) rdtTcpMessageGetGameObjects
	{
		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEGETGAMEOBJECTS_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTTCPMESSAGEGETGAMEOBJECTS_READ_OFFSET))(this, a1);
		}

	};
}
