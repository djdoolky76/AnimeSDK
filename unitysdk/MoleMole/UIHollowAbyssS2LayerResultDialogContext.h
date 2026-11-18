#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowHollowLayerResultDialogContext.h"

class IEHMCPFFJLG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MOLEMOLE_UIHOLLOWABYSSS2LAYERRESULTDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1785D470)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowAbyssS2LayerResultDialogContext_TypeDefinitionIndex = 51484;

	class UIHollowAbyssS2LayerResultDialogContext : public ::MoleMole::UIHollowHollowLayerResultDialogContext
	{
	public:
		::System::Collections::Generic::IList_1<::IEHMCPFFJLG*>* RankingTasks; // 0x40
		::System::Int32 Ranking; // 0x48

		::System::Void _ctor(::System::Action* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWABYSSS2LAYERRESULTDIALOGCONTEXT__CTOR_OFFSET))(this, onClose);
		}
	};
}
