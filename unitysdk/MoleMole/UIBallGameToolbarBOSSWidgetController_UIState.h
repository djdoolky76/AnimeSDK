#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class NBDEOHKBODI;
template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_UIBALLGAMETOOLBARBOSSWIDGETCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1F5BABF0)
#define MOLEMOLE_UIBALLGAMETOOLBARBOSSWIDGETCONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5BACD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameToolbarBOSSWidgetController_UIState_TypeDefinitionIndex = 95107;

	class UIBallGameToolbarBOSSWidgetController_UIState : public ::JJEJBPGJPJN
	{
	public:
		::LJHFMILANJA_1<::NBDEOHKBODI*>* Monster; // 0x88
		::LJHFMILANJA_1<::System::Single>* CurHp; // 0x90
		::LJHFMILANJA_1<::System::Single>* MaxHp; // 0x98
		::LJHFMILANJA_1<::System::UInt32>* EntityID; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMETOOLBARBOSSWIDGETCONTROLLER_UISTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMETOOLBARBOSSWIDGETCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
