#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALKHJPGPOMI;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CHESSBOARDBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18F25470)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboard3DModelController_ChessboardBehavior_TypeDefinitionIndex = 43494;

	class UIHollowChessboard3DModelController_ChessboardBehavior : public ::System::Object
	{
	public:
		::ALKHJPGPOMI* args; // 0x10
		::System::Action_1<::ALKHJPGPOMI*>* handler; // 0x18

		::System::Void _ctor(::ALKHJPGPOMI* args, ::System::Action_1<::ALKHJPGPOMI*>* handler)
		{
			return ((::System::Void(*)(::PVOID, ::ALKHJPGPOMI*, ::System::Action_1<::ALKHJPGPOMI*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CHESSBOARDBEHAVIOR__CTOR_OFFSET))(this, args, handler);
		}
	};
}
