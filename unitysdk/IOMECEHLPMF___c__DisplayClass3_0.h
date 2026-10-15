#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RelicItemData; }

#define IOMECEHLPMF___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0x165122F0)
#define IOMECEHLPMF___C__DISPLAYCLASS3_0__GETRELICRESULTINFOS_B__0_OFFSET UNITYSDK_OFFSET(0x165129F0)

	class IOMECEHLPMF___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::RelicType relicType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOMECEHLPMF___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRelicResultInfos_b__0(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + IOMECEHLPMF___C__DISPLAYCLASS3_0__GETRELICRESULTINFOS_B__0_OFFSET))(this, a1);
		}

	};
