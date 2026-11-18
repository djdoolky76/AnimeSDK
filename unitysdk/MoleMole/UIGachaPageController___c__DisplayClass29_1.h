#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PGPEKBONDHI;
namespace MoleMole { class UIGachaBtnWidgetController; }

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS29_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1809AD00)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS29_1__REFRESHGACHATABS_B__4_OFFSET UNITYSDK_OFFSET(0x1809AD10)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS29_1__REFRESHGACHATABS_B__5_OFFSET UNITYSDK_OFFSET(0x1809B1A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass29_1_TypeDefinitionIndex = 58562;

	template <typename T>
	class UIGachaPageController___c__DisplayClass29_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::MoleMole::UIGachaBtnWidgetController* btnWidget; // 0x18
		::PGPEKBONDHI* gacha; // 0x20
		::System::Int32 tabIdx; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS29_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshGachaTabs_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS29_1__REFRESHGACHATABS_B__4_OFFSET))(this);
		}

		::System::Void _RefreshGachaTabs_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS29_1__REFRESHGACHATABS_B__5_OFFSET))(this);
		}
	};
}
