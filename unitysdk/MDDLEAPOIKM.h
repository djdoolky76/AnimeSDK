#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFPAFGCOKHK.h"

#define MDDLEAPOIKM_CTOR_OFFSET UNITYSDK_OFFSET(0xB89FF30)
#define MDDLEAPOIKM_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xB89FD80)
#define MDDLEAPOIKM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB89FE10)

	class MDDLEAPOIKM : public ::FFPAFGCOKHK
	{
	public:
		::System::Single DKOFFPPGEFI; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDLEAPOIKM_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDLEAPOIKM_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MDDLEAPOIKM_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
