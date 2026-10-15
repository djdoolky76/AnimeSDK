#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCGKBOPGJL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KFBOFAILIBG.h"
class HPJEECIEDAB;

#define RPG_CLIENT_AVATAREXTENSIONS___C__DISPLAYCLASS185_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC6E9B50)
#define RPG_CLIENT_AVATAREXTENSIONS___C__DISPLAYCLASS185_0__GETTRACETREELEVELS_B__0_OFFSET UNITYSDK_OFFSET(0xC6EE260)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarExtensions___c__DisplayClass185_0_TypeDefinitionIndex = 62573;

	class AvatarExtensions___c__DisplayClass185_0 : public ::System::Object
	{
	public:
		::HPJEECIEDAB* traceNodeConverter; // 0x10
		::APCGKBOPGJL prototypeIdentifier; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS___C__DISPLAYCLASS185_0_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetTraceTreeLevels_b__0(::KFBOFAILIBG a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::KFBOFAILIBG))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS___C__DISPLAYCLASS185_0__GETTRACETREELEVELS_B__0_OFFSET))(this, a1);
		}

	};
}
