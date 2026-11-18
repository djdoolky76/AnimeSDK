#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EQuestType.h"
#include "unitysdk/System/Object.h"

class BABMKAFEADA;
class MEKACGJBPGE;

#define MOLEMOLE_UIRECEIVEQUESTDIALOGPOPWINDOWCONTROLLER_PICITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x168EC4F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIReceiveQuestDialogPopWindowController_PicItemData_TypeDefinitionIndex = 70297;

	class UIReceiveQuestDialogPopWindowController_PicItemData : public ::System::Object
	{
	public:
		::BABMKAFEADA* m_specialQuestConfig; // 0x10
		::MEKACGJBPGE* m_hollowQuestTemplateExt; // 0x18
		::System::Int32 m_index; // 0x20
		::Share::EQuestType m_questType; // 0x24

		::System::Void _ctor(::Share::EQuestType questType, ::MEKACGJBPGE* hollowQuestTemplateExt, ::BABMKAFEADA* specialQuestConfig, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Share::EQuestType, ::MEKACGJBPGE*, ::BABMKAFEADA*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECEIVEQUESTDIALOGPOPWINDOWCONTROLLER_PICITEMDATA__CTOR_OFFSET))(this, questType, hollowQuestTemplateExt, specialQuestConfig, index);
		}
	};
}
