#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LOKPDNOHGJH_BJHFJALHFDH_GNGMAHALLHM.h"
#include "unitysdk/LOKPDNOHGJH_BJHFJALHFDH_LHAPNHBHGPM.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

class FBAMLABJMKF;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS91_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19781480)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS91_0__TRYGENCHESSBOARD_B__0_OFFSET UNITYSDK_OFFSET(0x19781490)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboard3DModelController___c__DisplayClass91_0_TypeDefinitionIndex = 43495;

	class UIHollowChessboard3DModelController___c__DisplayClass91_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowChessboard3DModelController* __4__this; // 0x10
		::System::Action_1<::FBAMLABJMKF*>* buildCallBack; // 0x18
		::LOKPDNOHGJH_BJHFJALHFDH_LHAPNHBHGPM directType; // 0x20
		::MoleMole::HollowChessboard::HollowChessboardUID chessboardUid; // 0x24
		::LOKPDNOHGJH_BJHFJALHFDH_GNGMAHALLHM boardType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS91_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryGenChessboard_b__0(::FBAMLABJMKF* c)
		{
			return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS91_0__TRYGENCHESSBOARD_B__0_OFFSET))(this, c);
		}
	};
}
