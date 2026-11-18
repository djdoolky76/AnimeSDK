#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EDMAJMJNEEA;

#define MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17C52C00)
#define MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C__DISPLAYCLASS38_0__EXTRACTPLAYERINFO_B__0_OFFSET UNITYSDK_OFFSET(0x17C52C10)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_MP_PageController___c__DisplayClass38_0_TypeDefinitionIndex = 67988;

	class UILevelResultV2_MP_PageController___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::System::UInt64 mainUid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _ExtractPlayerInfo_b__0(::EDMAJMJNEEA* p)
		{
			return ((::System::Int32(*)(::PVOID, ::EDMAJMJNEEA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C__DISPLAYCLASS38_0__EXTRACTPLAYERINFO_B__0_OFFSET))(this, p);
		}
	};
}
