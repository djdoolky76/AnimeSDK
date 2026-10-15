#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAJFABMOPAL;
namespace RPG::Client { class ConditionChecker; }
namespace RPG::GameCore { class MapEntranceUnlockRow; }

#define CAJFABMOPAL_BJGKHOJINFH_OFFSET UNITYSDK_OFFSET(0xC484A70)
#define CAJFABMOPAL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC4849D0)
#define CAJFABMOPAL_CTOR_OFFSET UNITYSDK_OFFSET(0xC484A40)
#define CAJFABMOPAL_MJDEIPBNMOB_OFFSET UNITYSDK_OFFSET(0xC484AC0)

	class CAJFABMOPAL : public ::System::Object
	{
	public:
		::RPG::Client::ConditionChecker* OLNFAODGPMD; // 0x10
		::System::Void _ctor(::RPG::GameCore::MapEntranceUnlockRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapEntranceUnlockRow*))((::PBYTE)hIl2Cpp + CAJFABMOPAL_CTOR_OFFSET))(this, a1);
		}

		static ::CAJFABMOPAL* BPLPBPMEODA(::RPG::GameCore::MapEntranceUnlockRow* a1)
		{
			return ((::CAJFABMOPAL*(*)(::RPG::GameCore::MapEntranceUnlockRow*))((::PBYTE)hIl2Cpp + CAJFABMOPAL_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void BJGKHOJINFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJFABMOPAL_BJGKHOJINFH_OFFSET))(this);
		}

		::System::Boolean MJDEIPBNMOB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJFABMOPAL_MJDEIPBNMOB_OFFSET))(this);
		}

	};
