#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/System/Object.h"

#define ALKGFCBJODP_CTOR_OFFSET UNITYSDK_OFFSET(0x155640F0)

inline static constexpr unsigned int ALKGFCBJODP_TypeDefinitionIndex = 57015;

	class ALKGFCBJODP : public ::System::Object
	{
	public:
		::System::Single HEBPKJLCBEK; // 0x10
		::RPG::GameCore::CharacterMotionFlag KOALINMHFGO; // 0x14
		::System::Boolean DCDODAAKCHG; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single BAMCJPHKNHF; // 0x1C
		::System::Int32 MIODIFCBELJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKGFCBJODP_CTOR_OFFSET))(this);
		}

	};
