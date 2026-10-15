#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AENGOKAEEOA;
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarData; }

#define IIMCAOLPLDG___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1643E9F0)
#define IIMCAOLPLDG___C__DISPLAYCLASS6_0__GETBACKUPCHARACTERDATALIST_B__0_OFFSET UNITYSDK_OFFSET(0x16440840)

inline static constexpr unsigned int IIMCAOLPLDG___c__DisplayClass6_0_TypeDefinitionIndex = 73269;

	class IIMCAOLPLDG___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveAvatarData* avatarInfo; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMCAOLPLDG___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBackupCharacterDataList_b__0(::AENGOKAEEOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AENGOKAEEOA*))((::PBYTE)hIl2Cpp + IIMCAOLPLDG___C__DISPLAYCLASS6_0__GETBACKUPCHARACTERDATALIST_B__0_OFFSET))(this, a1);
		}

	};
