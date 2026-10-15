#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Patch/PatchType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define EFJCOMHLIDO_CTOR_OFFSET UNITYSDK_OFFSET(0x13A4EC60)
#define EFJCOMHLIDO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13A4EBF0)

	class EFJCOMHLIDO : public ::System::Object
	{
	public:
		::System::String* OPAEHKAIKFK; // 0x10
		::System::String* APPHMMKOOIJ; // 0x18
		::System::String* JMMHFKPJCLJ; // 0x20
		::System::String* CBLAEPMKJJO; // 0x28
		::System::String* IGPEOAOCBEN; // 0x30
		::System::UInt64 MLCDMOKHPFM; // 0x38
		::System::UInt64 ADGBDFABJNP; // 0x40
		::RPG::Client::Patch::PatchType DLIMODEMDOM; // 0x48
		::System::Byte _padding0[0x4];
		::System::UInt64 GOLOBIGLIJM; // 0x50
		::System::UInt64 NHEDLAEBMPM; // 0x58
		::System::UInt64 HBIGEMPHIFK; // 0x60
		::System::UInt64 LOBIDLPCIEO; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJCOMHLIDO_CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJCOMHLIDO_TOSTRING_OFFSET))(this);
		}

	};
