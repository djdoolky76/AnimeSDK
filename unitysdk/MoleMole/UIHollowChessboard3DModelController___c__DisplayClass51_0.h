#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBAMLABJMKF;

#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182A2730)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS51_0__SHOW3DCHESSBOARDENTITIES_B__0_OFFSET UNITYSDK_OFFSET(0x182A2740)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboard3DModelController___c__DisplayClass51_0_TypeDefinitionIndex = 43488;

	class UIHollowChessboard3DModelController___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::System::Boolean pause; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show3DChessboardEntities_b__0(::FBAMLABJMKF* chessboard)
		{
			return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS51_0__SHOW3DCHESSBOARDENTITIES_B__0_OFFSET))(this, chessboard);
		}
	};
}
