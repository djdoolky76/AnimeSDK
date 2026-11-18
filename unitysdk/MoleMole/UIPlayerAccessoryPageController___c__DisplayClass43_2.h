#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNIHGNDLMIN;

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS43_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18236490)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS43_2__SENDCHANGESKIN_B__3_OFFSET UNITYSDK_OFFSET(0x182364A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController___c__DisplayClass43_2_TypeDefinitionIndex = 43420;

	template <typename T1, typename T2>
	class UIPlayerAccessoryPageController___c__DisplayClass43_2 : public ::System::Object
	{
	public:
		::System::Int32 mainSkinID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS43_2__CTOR_OFFSET))(this);
		}

		::System::Boolean _SendChangeSkin_b__3(::PNIHGNDLMIN* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNIHGNDLMIN*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS43_2__SENDCHANGESKIN_B__3_OFFSET))(this, x);
		}
	};
}
