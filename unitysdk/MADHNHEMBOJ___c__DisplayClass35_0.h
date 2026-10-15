#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ShowAttackTimeParam; }

#define MADHNHEMBOJ___C__DISPLAYCLASS35_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB847740)
#define MADHNHEMBOJ___C__DISPLAYCLASS35_0___ONUPDATEATTACKTIME_B__0_OFFSET UNITYSDK_OFFSET(0xB84B4A0)

	class MADHNHEMBOJ___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::RPG::Client::ShowAttackTimeParam* param; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ___C__DISPLAYCLASS35_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnUpdateAttackTime_b__0(::RPG::Client::ShowAttackTimeParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ShowAttackTimeParam*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ___C__DISPLAYCLASS35_0___ONUPDATEATTACKTIME_B__0_OFFSET))(this, a1);
		}

	};
