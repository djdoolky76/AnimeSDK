#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHCMIJEDENP;
namespace RPG::Client { template <typename T> class PrefHashSet_1; }

#define JOMAECLEPIB___C__DISPLAYCLASS17_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB2A95B0)
#define JOMAECLEPIB___C__DISPLAYCLASS17_0___DETERMINEAUTOUNLOCKEDPATHPOINT_B__0_OFFSET UNITYSDK_OFFSET(0xB2A9940)

	class JOMAECLEPIB___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::RPG::Client::PrefHashSet_1<::System::UInt32>* toSeePathIDSet; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMAECLEPIB___C__DISPLAYCLASS17_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __DetermineAutoUnlockedPathPoint_b__0(::PHCMIJEDENP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PHCMIJEDENP*))((::PBYTE)hIl2Cpp + JOMAECLEPIB___C__DISPLAYCLASS17_0___DETERMINEAUTOUNLOCKEDPATHPOINT_B__0_OFFSET))(this, a1);
		}

	};
