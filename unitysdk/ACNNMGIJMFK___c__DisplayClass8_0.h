#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }

#define ACNNMGIJMFK___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB128C80)
#define ACNNMGIJMFK___C__DISPLAYCLASS8_0___CONFIRMEQUIPMENTCONFLICTCLEAR_B__1_OFFSET UNITYSDK_OFFSET(0xB12A210)

	class ACNNMGIJMFK___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* result; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNNMGIJMFK___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Void __ConfirmEquipmentConflictClear_b__1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ACNNMGIJMFK___C__DISPLAYCLASS8_0___CONFIRMEQUIPMENTCONFLICTCLEAR_B__1_OFFSET))(this, a1);
		}

	};
