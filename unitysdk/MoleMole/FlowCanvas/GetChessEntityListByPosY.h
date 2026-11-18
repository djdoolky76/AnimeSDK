#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class ChessEntity; }
namespace MoleMole { class ChessEntityCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_GETCHESSENTITYLISTBYPOSY_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B30A10)
#define MOLEMOLE_FLOWCANVAS_GETCHESSENTITYLISTBYPOSY__CTOR_OFFSET UNITYSDK_OFFSET(0x12B30D50)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int GetChessEntityListByPosY_TypeDefinitionIndex = 89560;

	class GetChessEntityListByPosY
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_GETCHESSENTITYLISTBYPOSY__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::ChessEntity*>* Invoke(::MoleMole::ChessEntityCollection* a, ::System::Int32 b)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::ChessEntity*>*(*)(::PVOID, ::MoleMole::ChessEntityCollection*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_GETCHESSENTITYLISTBYPOSY_INVOKE_OFFSET))(this, a, b);
		}
	};
}
