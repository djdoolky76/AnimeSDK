#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADILGMDJEJF.h"
#include "unitysdk/RPG/GameCore/AvatarCreateType.h"
namespace RPG::GameCore { class AvatarDataComponent; }

#define JAJBDGJMAGK_CTOR_OFFSET UNITYSDK_OFFSET(0x16553780)
#define JAJBDGJMAGK_KFHCMJCFINH_OFFSET UNITYSDK_OFFSET(0x16553790)

	class JAJBDGJMAGK : public ::ADILGMDJEJF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::AvatarDataComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarDataComponent*))((::PBYTE)hIl2Cpp + JAJBDGJMAGK_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarCreateType KFHCMJCFINH()
		{
			return ((::RPG::GameCore::AvatarCreateType(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJBDGJMAGK_KFHCMJCFINH_OFFSET))(this);
		}

	};
