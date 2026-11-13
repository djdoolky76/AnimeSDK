#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBCJHEDMHOK;
class PHCMIJEDENP;

#define AMAPKJDDKCO___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7743A0)
#define AMAPKJDDKCO___C__DISPLAYCLASS1_0__GETUNLOCKEDTALENTPATH_B__0_OFFSET UNITYSDK_OFFSET(0x1E7743B0)

inline static constexpr unsigned int AMAPKJDDKCO___c__DisplayClass1_0_TypeDefinitionIndex = 42881;

	class AMAPKJDDKCO___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::CBCJHEDMHOK* queryMissionService; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMAPKJDDKCO___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetUnlockedTalentPath_b__0(::PHCMIJEDENP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PHCMIJEDENP*))((::PBYTE)hIl2Cpp + AMAPKJDDKCO___C__DISPLAYCLASS1_0__GETUNLOCKEDTALENTPATH_B__0_OFFSET))(this, a1);
		}

	};
