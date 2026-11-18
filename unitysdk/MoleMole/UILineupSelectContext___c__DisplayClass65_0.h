#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALDOKCCIFNB;
class MEKACGJBPGE;
namespace MoleMole { class UIActivePropsWindowContext; }
namespace MoleMole { class UILineupSelectContext; }

#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS65_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18D00670)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS65_0__SETHOLLOWQUESTCONTEXT_B__0_OFFSET UNITYSDK_OFFSET(0x18D00680)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS65_0__SETHOLLOWQUESTCONTEXT_G__ONPOSTGETBUDDYSELECTCONTEXT_1_OFFSET UNITYSDK_OFFSET(0x18D009E0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext___c__DisplayClass65_0_TypeDefinitionIndex = 81298;

	class UILineupSelectContext___c__DisplayClass65_0 : public ::System::Object
	{
	public:
		::MoleMole::UILineupSelectContext* __4__this; // 0x10
		::MEKACGJBPGE* questTemp; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS65_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetHollowQuestContext_b__0(::ALDOKCCIFNB* data)
		{
			return ((::System::Void(*)(::PVOID, ::ALDOKCCIFNB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS65_0__SETHOLLOWQUESTCONTEXT_B__0_OFFSET))(this, data);
		}

		::MoleMole::UIActivePropsWindowContext* _SetHollowQuestContext_g__OnPostGetBuddySelectContext_1(::MoleMole::UIActivePropsWindowContext* _context)
		{
			return ((::MoleMole::UIActivePropsWindowContext*(*)(::PVOID, ::MoleMole::UIActivePropsWindowContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS65_0__SETHOLLOWQUESTCONTEXT_G__ONPOSTGETBUDDYSELECTCONTEXT_1_OFFSET))(this, _context);
		}
	};
}
