#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BANDDFEHONE;

#define KLLJEFNNCBM___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x17B855B0)
#define KLLJEFNNCBM___C__DISPLAYCLASS5_0__GETICONDATALIST_B__0_OFFSET UNITYSDK_OFFSET(0x17B85660)

inline static constexpr unsigned int KLLJEFNNCBM___c__DisplayClass5_0_TypeDefinitionIndex = 74235;

	class KLLJEFNNCBM___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::BANDDFEHONE* iconData; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLJEFNNCBM___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetIconDataList_b__0(::BANDDFEHONE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BANDDFEHONE*))((::PBYTE)hIl2Cpp + KLLJEFNNCBM___C__DISPLAYCLASS5_0__GETICONDATALIST_B__0_OFFSET))(this, a1);
		}

	};
