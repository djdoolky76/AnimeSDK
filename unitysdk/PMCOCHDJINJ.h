#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtLifeBindingType.h"
#include "unitysdk/System/Object.h"
class DJFOGDKHPKO;
namespace System { class Object; }

#define PMCOCHDJINJ_CLEAR_OFFSET UNITYSDK_OFFSET(0xC316CE0)
#define PMCOCHDJINJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC316D30)

	class PMCOCHDJINJ : public ::System::Object
	{
	public:
		::System::Object* NEEOLLJLEGA; // 0x10
		::DJFOGDKHPKO* CHOFPMKEKGG; // 0x18
		::RPG::GameCore::RtLifeBindingType PPPOGKPOPBA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCOCHDJINJ_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCOCHDJINJ_CLEAR_OFFSET))(this);
		}

	};
