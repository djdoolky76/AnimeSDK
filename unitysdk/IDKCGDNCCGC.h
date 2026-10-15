#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeLineupAvatarSaveType.h"
#include "unitysdk/System/Object.h"

#define IDKCGDNCCGC_CTOR_OFFSET UNITYSDK_OFFSET(0x15ECB2D0)

inline static constexpr unsigned int IDKCGDNCCGC_TypeDefinitionIndex = 63095;

	class IDKCGDNCCGC : public ::System::Object
	{
	public:
		::RPG::Client::ChallengeLineupAvatarSaveType HOPKBCJIOCD; // 0x10
		::System::UInt32 ACCJKGEKHKP; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDKCGDNCCGC_CTOR_OFFSET))(this);
		}

	};
