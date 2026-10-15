#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanCoord.h"
#include "unitysdk/System/Object.h"

#define EKOJBGEHGDL_CTOR_OFFSET UNITYSDK_OFFSET(0x155181E0)

	class EKOJBGEHGDL : public ::System::Object
	{
	public:
		::System::Boolean CBFJNLKKMDC; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::Client::Prop::BoxmanCoord FOCNBOANONM; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOJBGEHGDL_CTOR_OFFSET))(this);
		}

	};
