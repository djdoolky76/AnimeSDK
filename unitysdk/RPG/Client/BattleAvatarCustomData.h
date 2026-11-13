#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDPEJIGDNJB;
class NGMLJMLDCCG;
namespace RPG::Client { class BattleAvatarNihiluxCustomUIData; }
namespace RPG::Client { class BattleSilverWolf999CustomUIData; }

#define RPG_CLIENT_BATTLEAVATARCUSTOMDATA_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B020800)
#define RPG_CLIENT_BATTLEAVATARCUSTOMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B020B90)
#define RPG_CLIENT_BATTLEAVATARCUSTOMDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B0205F0)
#define RPG_CLIENT_BATTLEAVATARCUSTOMDATA_LATETICK_OFFSET UNITYSDK_OFFSET(0x1B020AF0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAvatarCustomData_TypeDefinitionIndex = 73440;

	class BattleAvatarCustomData : public ::System::Object
	{
	public:
		::RPG::Client::BattleAvatarNihiluxCustomUIData* NihiluxCustomUIData; // 0x10
		::RPG::Client::BattleSilverWolf999CustomUIData* SilverWolf999CustomUIData; // 0x18
		::HDPEJIGDNJB* HimekoNovaCustomUIData; // 0x20
		::NGMLJMLDCCG* PearlCustomUIData; // 0x28
		::System::Boolean _AddedHandlers; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARCUSTOMDATA_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARCUSTOMDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARCUSTOMDATA_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARCUSTOMDATA_LATETICK_OFFSET))(this, a1);
		}

	};
}
