#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHECNKEHDFK;
class PCBNKBFHCMO;
namespace RPG::Client { class IActivityQuestRewardData; }

#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATAFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xCBA5040)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATAFACTORY_CTOR_1_OFFSET UNITYSDK_OFFSET(0xCBA4F90)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATAFACTORY_CTOR_OFFSET UNITYSDK_OFFSET(0xCBA4F10)

namespace RPG::Client
{
	class CommonActivityQuestRewardDataFactory : public ::System::Object
	{
	public:
		::GHECNKEHDFK* _TabGroupInfoFactory; // 0x10
		::System::Void _ctor(::GHECNKEHDFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHECNKEHDFK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATAFACTORY_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::PCBNKBFHCMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCBNKBFHCMO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATAFACTORY_CTOR_1_OFFSET))(this, a1);
		}

		::RPG::Client::IActivityQuestRewardData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::IActivityQuestRewardData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATAFACTORY_CREATE_OFFSET))(this, a1);
		}

	};
}
