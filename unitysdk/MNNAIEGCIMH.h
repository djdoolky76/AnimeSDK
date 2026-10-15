#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCBNKBFHCMO;
namespace RPG::Client { class IActivityQuestRewardTabGroupInfo; }

#define MNNAIEGCIMH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBA17BB0)
#define MNNAIEGCIMH_CTOR_OFFSET UNITYSDK_OFFSET(0xBA17B60)

	class MNNAIEGCIMH : public ::System::Object
	{
	public:
		::PCBNKBFHCMO* NCANCCINJDP; // 0x10
		::System::Void _ctor(::PCBNKBFHCMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCBNKBFHCMO*))((::PBYTE)hIl2Cpp + MNNAIEGCIMH_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::IActivityQuestRewardTabGroupInfo* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::RPG::Client::IActivityQuestRewardTabGroupInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MNNAIEGCIMH_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
