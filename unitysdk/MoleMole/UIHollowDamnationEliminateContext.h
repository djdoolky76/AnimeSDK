#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/OEDEMKMJHHK.h"

class AFMMAIKKACF;
class FIMPOIBELAG;
class OJNKOIALCAO;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWDAMNATIONELIMINATECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C66390)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowDamnationEliminateContext_TypeDefinitionIndex = 53029;

	class UIHollowDamnationEliminateContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::OEDEMKMJHHK>* curseState; // 0x28
		::AFMMAIKKACF* context; // 0x30
		::System::Func_1<::System::String*>* titleFunc; // 0x38
		::System::Action* callback; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* AdditiveCurseIDs; // 0x48
		::System::Collections::Generic::List_1<::FIMPOIBELAG*>* curseIDs; // 0x50
		::OJNKOIALCAO* curseInfo; // 0x58
		::System::Boolean forbidSpecial; // 0x60
		::System::Boolean isbless; // 0x61
		::System::Boolean PlaySpecialFade; // 0x62
		::System::Boolean ShowBg; // 0x63
		::System::Boolean showRemove; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDAMNATIONELIMINATECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
