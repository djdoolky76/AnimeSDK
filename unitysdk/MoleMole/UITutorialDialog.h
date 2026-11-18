#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAKODLEPJOA.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class KGMDCDKMBEJ_HKEFCDFAGCF;
namespace System { class Action; }

#define MOLEMOLE_UITUTORIALDIALOG_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x12BFF780)
#define MOLEMOLE_UITUTORIALDIALOG_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x12BFF860)
#define MOLEMOLE_UITUTORIALDIALOG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x12BFF7E0)
#define MOLEMOLE_UITUTORIALDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x12BFF790)

namespace MoleMole
{
	inline static constexpr unsigned int UITutorialDialog_TypeDefinitionIndex = 53539;

	class UITutorialDialog : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Action* callback; // 0x28
		::KGMDCDKMBEJ_HKEFCDFAGCF* popupGroupData; // 0x30
		::System::Boolean _isLoaded; // 0x38
		::System::Boolean CanCloseOnlyReachEnd; // 0x39
		::System::Boolean isPreload; // 0x3A

		::System::Void _ctor(::KGMDCDKMBEJ_HKEFCDFAGCF* popupGroupData, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::KGMDCDKMBEJ_HKEFCDFAGCF*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALDIALOG__CTOR_OFFSET))(this, popupGroupData, callback);
		}

		::System::Void _ctor_1(::System::Int32 id, ::System::Action* callback, ::FAKODLEPJOA page)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::FAKODLEPJOA))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALDIALOG__CTOR_1_OFFSET))(this, id, callback, page);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALDIALOG_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALDIALOG_ONPROCESS_OFFSET))(this);
		}
	};
}
