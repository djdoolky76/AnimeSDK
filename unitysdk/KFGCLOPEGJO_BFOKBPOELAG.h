#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace MoleMole { class UIGeneralToggleWidgetController_OnClickCallback; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define KFGCLOPEGJO_BFOKBPOELAG_KNBCKABFGBJ_OFFSET UNITYSDK_OFFSET(0xD3F2FF0)
#define KFGCLOPEGJO_BFOKBPOELAG_NFDDMPNMBLB_OFFSET UNITYSDK_OFFSET(0xD3F2DF0)
#define KFGCLOPEGJO_BFOKBPOELAG__CTOR_OFFSET UNITYSDK_OFFSET(0xD3F2DE0)

inline static constexpr unsigned int KFGCLOPEGJO_BFOKBPOELAG_TypeDefinitionIndex = 78933;

class KFGCLOPEGJO_BFOKBPOELAG : public ::System::Object
{
public:
	::MoleMole::UIGeneralToggleWidgetController_OnClickCallback* EJGDHCIBCJH; // 0x10
	::System::Action_1<::System::Action*>* DCCFGEOAJKN; // 0x18
	::System::Func_1<::System::Boolean>* HOGEEKJKFJG; // 0x20
	::MoleMole::UIGeneralToggleWidgetController* KEHCNDLFKGA; // 0x28
	::System::Func_1<::System::Boolean>* OFJOIMFKEKA; // 0x30
	::System::Boolean LCDLAKOLLJJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_BFOKBPOELAG__CTOR_OFFSET))(this);
	}

	::System::Void NFDDMPNMBLB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_BFOKBPOELAG_NFDDMPNMBLB_OFFSET))(this);
	}

	::System::Void KNBCKABFGBJ(::MoleMole::UIGeneralToggleWidgetController* MNOMCCLBJAO, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralToggleWidgetController*, ::System::Boolean))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_BFOKBPOELAG_KNBCKABFGBJ_OFFSET))(this, MNOMCCLBJAO, EGEGIMGMJHN);
	}
};
