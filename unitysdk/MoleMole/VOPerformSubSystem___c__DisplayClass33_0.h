#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJDDGKFCNAJ_IGOPHLMOGAO.h"
#include "unitysdk/System/Object.h"

class KMMOLFIBFPK;
namespace MoleMole { class VOPerformSubSystem; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18C3DF70)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS33_0___CLOSEBLACKCURTAIN_B__0_OFFSET UNITYSDK_OFFSET(0x18C3DF80)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS33_0___CLOSEBLACKCURTAIN_B__1_OFFSET UNITYSDK_OFFSET(0x18C3E0B0)

namespace MoleMole
{
	inline static constexpr unsigned int VOPerformSubSystem___c__DisplayClass33_0_TypeDefinitionIndex = 76193;

	class VOPerformSubSystem___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::MoleMole::VOPerformSubSystem* __4__this; // 0x10
		::System::Action_1<::System::Object*>* callback; // 0x18
		::System::String* pendingCurtainName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Void __CloseBlackCurtain_b__0(::DJDDGKFCNAJ_IGOPHLMOGAO reason)
		{
			return ((::System::Void(*)(::PVOID, ::DJDDGKFCNAJ_IGOPHLMOGAO))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS33_0___CLOSEBLACKCURTAIN_B__0_OFFSET))(this, reason);
		}

		::System::Void __CloseBlackCurtain_b__1(::KMMOLFIBFPK* t)
		{
			return ((::System::Void(*)(::PVOID, ::KMMOLFIBFPK*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS33_0___CLOSEBLACKCURTAIN_B__1_OFFSET))(this, t);
		}
	};
}
