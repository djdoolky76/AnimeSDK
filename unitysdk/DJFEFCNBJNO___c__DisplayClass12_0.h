#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFMENAAGPDN;
namespace RPG::Client { class ExpeditionBattleRoute; }

#define DJFEFCNBJNO___C__DISPLAYCLASS12_0_CTOR_OFFSET UNITYSDK_OFFSET(0xF2328F0)
#define DJFEFCNBJNO___C__DISPLAYCLASS12_0__SYNCRECORDBYMAPINFO_B__0_OFFSET UNITYSDK_OFFSET(0xF2345F0)

inline static constexpr unsigned int DJFEFCNBJNO___c__DisplayClass12_0_TypeDefinitionIndex = 63935;

	class DJFEFCNBJNO___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::BFMENAAGPDN* routeInfo; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJFEFCNBJNO___C__DISPLAYCLASS12_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _SyncRecordByMapInfo_b__0(::RPG::Client::ExpeditionBattleRoute* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ExpeditionBattleRoute*))((::PBYTE)hIl2Cpp + DJFEFCNBJNO___C__DISPLAYCLASS12_0__SYNCRECORDBYMAPINFO_B__0_OFFSET))(this, a1);
		}

	};
