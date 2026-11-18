#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

class MPKBDIJDMAP;
namespace MoleMole::ChessStateMachine { class TextureSheetConfigAction; }

#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xFFC38D0)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___C__DISPLAYCLASS7_0__RUN_B__1_OFFSET UNITYSDK_OFFSET(0xFFC38E0)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___C__DISPLAYCLASS7_0__RUN_B__2_OFFSET UNITYSDK_OFFSET(0xFFC3C80)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___C__DISPLAYCLASS7_0__RUN_B__3_OFFSET UNITYSDK_OFFSET(0xFFC3D00)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___C__DISPLAYCLASS7_0__RUN_B__4_OFFSET UNITYSDK_OFFSET(0xFFC3D80)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int TextureSheetConfigAction___c__DisplayClass7_0_TypeDefinitionIndex = 63241;

	class TextureSheetConfigAction___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MoleMole::ChessStateMachine::TextureSheetConfigAction* __4__this; // 0x10
		::System::Int32 screenIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__1(::MPKBDIJDMAP* p, ::MoleMole::HollowPieceBlendMode m)
		{
			return ((::System::Void(*)(::PVOID, ::MPKBDIJDMAP*, ::MoleMole::HollowPieceBlendMode))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___C__DISPLAYCLASS7_0__RUN_B__1_OFFSET))(this, p, m);
		}

		::System::Void _Run_b__2(::MPKBDIJDMAP* p, ::UnityEngine::Vector4 scc, ::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::MPKBDIJDMAP*, ::UnityEngine::Vector4, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___C__DISPLAYCLASS7_0__RUN_B__2_OFFSET))(this, p, scc, i);
		}

		::System::Void _Run_b__3(::MPKBDIJDMAP* p, ::UnityEngine::Color c, ::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::MPKBDIJDMAP*, ::UnityEngine::Color, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___C__DISPLAYCLASS7_0__RUN_B__3_OFFSET))(this, p, c, i);
		}

		::System::Void _Run_b__4(::MPKBDIJDMAP* player)
		{
			return ((::System::Void(*)(::PVOID, ::MPKBDIJDMAP*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___C__DISPLAYCLASS7_0__RUN_B__4_OFFSET))(this, player);
		}
	};
}
