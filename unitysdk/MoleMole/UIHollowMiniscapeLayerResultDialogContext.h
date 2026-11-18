#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowHollowLayerResultDialogContext.h"

class EDLHMDBMNGM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MOLEMOLE_UIHOLLOWMINISCAPELAYERRESULTDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x187CC050)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMiniscapeLayerResultDialogContext_TypeDefinitionIndex = 90915;

	class UIHollowMiniscapeLayerResultDialogContext : public ::MoleMole::UIHollowHollowLayerResultDialogContext
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::EDLHMDBMNGM*>* TaskInfoList; // 0x40
		::System::Collections::Generic::IReadOnlyList_1<::EDLHMDBMNGM*>* QuestInfoList; // 0x48

		::System::Void _ctor(::System::Action* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINISCAPELAYERRESULTDIALOGCONTEXT__CTOR_OFFSET))(this, onClose);
		}
	};
}
