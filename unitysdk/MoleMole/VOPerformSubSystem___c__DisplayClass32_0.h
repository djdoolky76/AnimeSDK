#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KMMOLFIBFPK;
namespace MoleMole { class VOPerformSubSystem; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18F7D910)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS32_0___OPENBLACKCURTAIN_B__1_OFFSET UNITYSDK_OFFSET(0x18F7D920)

namespace MoleMole
{
	inline static constexpr unsigned int VOPerformSubSystem___c__DisplayClass32_0_TypeDefinitionIndex = 76198;

	class VOPerformSubSystem___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Object*>* callback; // 0x10
		::MoleMole::VOPerformSubSystem* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void __OpenBlackCurtain_b__1(::KMMOLFIBFPK* t)
		{
			return ((::System::Void(*)(::PVOID, ::KMMOLFIBFPK*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS32_0___OPENBLACKCURTAIN_B__1_OFFSET))(this, t);
		}
	};
}
