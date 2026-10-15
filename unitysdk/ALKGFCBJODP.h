#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/System/Object.h"

#define ALKGFCBJODP_CTOR_OFFSET UNITYSDK_OFFSET(0x1556F820)

	class ALKGFCBJODP : public ::System::Object
	{
	public:
		::System::Boolean DCDODAAKCHG; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single HEBPKJLCBEK; // 0x14
		::System::Single BAMCJPHKNHF; // 0x18
		::System::Int32 MIODIFCBELJ; // 0x1C
		::RPG::GameCore::CharacterMotionFlag KOALINMHFGO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKGFCBJODP_CTOR_OFFSET))(this);
		}

	};
