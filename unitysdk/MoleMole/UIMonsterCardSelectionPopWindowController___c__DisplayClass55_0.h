#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HHLMDHFGAJJ;
class MGCPJNAGCHA;

#define MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1796D180)
#define MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS55_0__SORTMONSTERCARD_G__SORTEDFUNC_0_OFFSET UNITYSDK_OFFSET(0x1796D190)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterCardSelectionPopWindowController___c__DisplayClass55_0_TypeDefinitionIndex = 86926;

	class UIMonsterCardSelectionPopWindowController___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::MGCPJNAGCHA* build; // 0x10
		::HHLMDHFGAJJ* cardModel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortMonsterCard_g__sortedFunc_0(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS55_0__SORTMONSTERCARD_G__SORTEDFUNC_0_OFFSET))(this, a, b);
		}
	};
}
