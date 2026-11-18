#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS22_2__CTOR_OFFSET UNITYSDK_OFFSET(0x193A6C00)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS22_2__INITLEVEL_B__3_OFFSET UNITYSDK_OFFSET(0x193A6C10)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS22_2__INITLEVEL_B__4_OFFSET UNITYSDK_OFFSET(0x193A6C70)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c__DisplayClass22_2_TypeDefinitionIndex = 60173;

	template <typename T1, typename T2>
	class UIMainStoryPageController___c__DisplayClass22_2 : public ::System::Object
	{
	public:
		::UnityEngine::Animation* anim; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS22_2__CTOR_OFFSET))(this);
		}

		::System::Void _InitLevel_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS22_2__INITLEVEL_B__3_OFFSET))(this);
		}

		::System::Void _InitLevel_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS22_2__INITLEVEL_B__4_OFFSET))(this);
		}
	};
}
