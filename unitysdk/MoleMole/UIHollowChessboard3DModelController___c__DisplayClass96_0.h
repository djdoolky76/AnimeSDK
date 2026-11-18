#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBAMLABJMKF;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS96_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19781A00)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS96_0__TRYGENTEMPCHESSBOARD_B__0_OFFSET UNITYSDK_OFFSET(0x19781A10)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboard3DModelController___c__DisplayClass96_0_TypeDefinitionIndex = 43489;

	class UIHollowChessboard3DModelController___c__DisplayClass96_0 : public ::System::Object
	{
	public:
		::System::Action* buildCallBack; // 0x10
		::MoleMole::UIHollowChessboard3DModelController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS96_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryGenTempChessboard_b__0(::FBAMLABJMKF* c)
		{
			return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS96_0__TRYGENTEMPCHESSBOARD_B__0_OFFSET))(this, c);
		}
	};
}
