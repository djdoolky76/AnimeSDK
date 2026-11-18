#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class ChatPlusDialogBehaviour; }

#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_GKGMDMNMFGN_KHLILEMMJIE_OFFSET UNITYSDK_OFFSET(0x10D62650)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_GKGMDMNMFGN_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x10D62860)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_GKGMDMNMFGN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x10D62C20)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ChatPlusDialogBehaviour_GKGMDMNMFGN_TypeDefinitionIndex = 56222;

	class ChatPlusDialogBehaviour_GKGMDMNMFGN : public ::System::Object
	{
	public:
		static ::MoleMole::Timeline::ChatPlusDialogBehaviour** StaticGet_KECDLLJGHIK()
		{
			return (::MoleMole::Timeline::ChatPlusDialogBehaviour**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusDialogBehaviour_GKGMDMNMFGN_TypeDefinitionIndex)->GetStaticField(0x389D0);
		}
		static ::System::UInt32* StaticGet_ABBPHLCMBII()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ChatPlusDialogBehaviour_GKGMDMNMFGN_TypeDefinitionIndex)->GetStaticField(0xCE70);
		}

		static ::System::Void KKFNPONHGEM(::MoleMole::Timeline::ChatPlusDialogBehaviour* AMNIHACKELI, ::System::UInt32 FGBOJPCADCH)
		{
			return ((::System::Void(*)(::MoleMole::Timeline::ChatPlusDialogBehaviour*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_GKGMDMNMFGN_KKFNPONHGEM_OFFSET))(AMNIHACKELI, FGBOJPCADCH);
		}

		static ::System::Void KHLILEMMJIE(::MoleMole::Timeline::ChatPlusDialogBehaviour* AMNIHACKELI)
		{
			return ((::System::Void(*)(::MoleMole::Timeline::ChatPlusDialogBehaviour*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_GKGMDMNMFGN_KHLILEMMJIE_OFFSET))(AMNIHACKELI);
		}

		static ::System::Void PHOADBJGFBE(::MoleMole::Timeline::ChatPlusDialogBehaviour* AMNIHACKELI, ::System::UInt32 FGBOJPCADCH)
		{
			return ((::System::Void(*)(::MoleMole::Timeline::ChatPlusDialogBehaviour*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_GKGMDMNMFGN_PHOADBJGFBE_OFFSET))(AMNIHACKELI, FGBOJPCADCH);
		}
	};
}
