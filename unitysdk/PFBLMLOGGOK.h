#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define PFBLMLOGGOK_CTOR_OFFSET UNITYSDK_OFFSET(0xC2075F0)

	class PFBLMLOGGOK : public ::System::Object
	{
	public:
		::RPG::Client::TextID KBEPAIAFLHL; // 0x10
		::System::Int32 IGOIDKOLPMO; // 0x20
		::System::Single EDKJKBENBBL; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBLMLOGGOK_CTOR_OFFSET))(this);
		}

	};
