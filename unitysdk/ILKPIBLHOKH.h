#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFPAFGCOKHK.h"

#define ILKPIBLHOKH_CTOR_OFFSET UNITYSDK_OFFSET(0x164B6640)
#define ILKPIBLHOKH_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x164B6470)
#define ILKPIBLHOKH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x164B6500)

inline static constexpr unsigned int ILKPIBLHOKH_TypeDefinitionIndex = 74203;

	class ILKPIBLHOKH : public ::FFPAFGCOKHK
	{
	public:
		::System::Single GGNIPKCGLGA; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKPIBLHOKH_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKPIBLHOKH_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ILKPIBLHOKH_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
