#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDPEJIGDNJB;
class NGMLJMLDCCG;
namespace RPG::Client { class BattleSilverWolf999CustomUIData; }

#define RPG_CLIENT_BATTLEAVATARCUSTOMDATA_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xC812F90)
#define RPG_CLIENT_BATTLEAVATARCUSTOMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC813130)
#define RPG_CLIENT_BATTLEAVATARCUSTOMDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC812EB0)
#define RPG_CLIENT_BATTLEAVATARCUSTOMDATA_LATETICK_OFFSET UNITYSDK_OFFSET(0xC813090)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAvatarCustomData_TypeDefinitionIndex = 71459;

	class BattleAvatarCustomData : public ::System::Object
	{
	public:
		::NGMLJMLDCCG* PearlCustomUIData; // 0x10
		::HDPEJIGDNJB* HimekoNovaCustomUIData; // 0x18
		::RPG::Client::BattleSilverWolf999CustomUIData* SilverWolf999CustomUIData; // 0x20
		::System::Boolean _AddedHandlers; // 0x28
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
