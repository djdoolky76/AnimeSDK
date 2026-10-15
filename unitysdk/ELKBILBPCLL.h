#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VoiceType.h"
#include "unitysdk/System/Object.h"

#define ELKBILBPCLL_CTOR_OFFSET UNITYSDK_OFFSET(0x15526510)

inline static constexpr unsigned int ELKBILBPCLL_TypeDefinitionIndex = 61374;

	class ELKBILBPCLL : public ::System::Object
	{
	public:
		::RPG::Client::VoiceType KJMPDIHMBGO; // 0x10
		::System::UInt32 CDAMNNDDJAN; // 0x14
		::System::UInt32 LJMHECKCBKH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKBILBPCLL_CTOR_OFFSET))(this);
		}

	};
