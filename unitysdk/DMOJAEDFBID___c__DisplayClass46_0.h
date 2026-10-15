#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAHMMEEMJOB.h"
#include "unitysdk/System/Object.h"
class DMOJAEDFBID;

#define DMOJAEDFBID___C__DISPLAYCLASS46_0_CTOR_OFFSET UNITYSDK_OFFSET(0xFEC9450)
#define DMOJAEDFBID___C__DISPLAYCLASS46_0___TRYHIGHTLIGHTBUFFPANEL_B__0_OFFSET UNITYSDK_OFFSET(0xFECD7F0)

inline static constexpr unsigned int DMOJAEDFBID___c__DisplayClass46_0_TypeDefinitionIndex = 71318;

	class DMOJAEDFBID___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::BAHMMEEMJOB data; // 0x10
		::DMOJAEDFBID* __4__this; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOJAEDFBID___C__DISPLAYCLASS46_0_CTOR_OFFSET))(this);
		}

		::System::Void __TryHightLightBuffPanel_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOJAEDFBID___C__DISPLAYCLASS46_0___TRYHIGHTLIGHTBUFFPANEL_B__0_OFFSET))(this);
		}

	};
