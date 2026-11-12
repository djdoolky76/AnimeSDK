#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define RPG_CUSTOMRP_RPDISCONNECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE38C0)
#define RPG_CUSTOMRP_RPDISCONNECT_GETMESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x1DDE3880)
#define RPG_CUSTOMRP_RPDISCONNECT_READ_OFFSET UNITYSDK_OFFSET(0x1DDE3870)
#define RPG_CUSTOMRP_RPDISCONNECT_WRITE_OFFSET UNITYSDK_OFFSET(0x1DDE3860)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPDisconnect_TypeDefinitionIndex = 38847;

	class RPDisconnect : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPDISCONNECT_CTOR_OFFSET))(this);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPDISCONNECT_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPDISCONNECT_READ_OFFSET))(this, a1);
		}

		::System::String* GetMessageType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPDISCONNECT_GETMESSAGETYPE_OFFSET))(this);
		}

	};
}
