#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class JBLHHMEFCJD;
namespace MoleMole { class SummerEventResultRowContext; }
namespace MoleMole { class UISuumerEventResultPopWindowController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SUMMEREVENTRESULTCONTEXT_ADD_OFFSET UNITYSDK_OFFSET(0x162F52C0)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXT_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x162F5350)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x162F5210)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventResultContext_TypeDefinitionIndex = 92910;

	class SummerEventResultContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* _exit; // 0x28
		::JBLHHMEFCJD* _title; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::SummerEventResultRowContext*>* _rowContexts; // 0x38

		::System::Void _ctor(::JBLHHMEFCJD* title, ::System::Action* exit)
		{
			return ((::System::Void(*)(::PVOID, ::JBLHHMEFCJD*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXT__CTOR_OFFSET))(this, title, exit);
		}

		::System::Void Add(::MoleMole::SummerEventResultRowContext* rowContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SummerEventResultRowContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXT_ADD_OFFSET))(this, rowContext);
		}

		::System::Void OnUIOpen(::MoleMole::UISuumerEventResultPopWindowController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISuumerEventResultPopWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXT_ONUIOPEN_OFFSET))(this, controller);
		}
	};
}
