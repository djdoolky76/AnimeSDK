#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS148_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17B84160)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS148_2__PLAYZENKOVTIP_B__4_OFFSET UNITYSDK_OFFSET(0x17B84170)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass148_2_TypeDefinitionIndex = 77630;

	template <typename T1, typename T2>
	class UIMissionTipsContainerWidgetController___c__DisplayClass148_2 : public ::System::Object
	{
	public:
		::System::Int32 capturedQuestId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS148_2__CTOR_OFFSET))(this);
		}

		::System::String* _PlayZenkovTip_b__4()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS148_2__PLAYZENKOVTIP_B__4_OFFSET))(this);
		}
	};
}
