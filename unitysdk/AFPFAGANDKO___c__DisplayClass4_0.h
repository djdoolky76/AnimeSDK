#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define AFPFAGANDKO___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCF20FA0)
#define AFPFAGANDKO___C__DISPLAYCLASS4_0__ADDPRISMTRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0xCF22F30)

	class AFPFAGANDKO___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Action* onEnter; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPFAGANDKO___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _AddPrismTrigger_b__0(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AFPFAGANDKO___C__DISPLAYCLASS4_0__ADDPRISMTRIGGER_B__0_OFFSET))(this, a1);
		}

	};
