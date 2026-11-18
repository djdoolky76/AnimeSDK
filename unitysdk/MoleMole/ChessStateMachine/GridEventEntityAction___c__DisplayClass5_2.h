#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

class AEONPIHMGJK;
class MPKBDIJDMAP;

#define MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_2__CTOR_OFFSET UNITYSDK_OFFSET(0x131C47C0)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_2__RUN_B__1_OFFSET UNITYSDK_OFFSET(0x131C4A10)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_2__RUN_B__2_OFFSET UNITYSDK_OFFSET(0x131C4A40)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_2__RUN_B__3_OFFSET UNITYSDK_OFFSET(0x131C49F0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int GridEventEntityAction___c__DisplayClass5_2_TypeDefinitionIndex = 54130;

	template <typename T1, typename T2>
	class GridEventEntityAction___c__DisplayClass5_2 : public ::System::Object
	{
	public:
		::AEONPIHMGJK* pieceMultiPlayerHelper; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_2__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_2__RUN_B__3_OFFSET))(this);
		}

		::System::Void _Run_b__1(::MPKBDIJDMAP* p, ::UnityEngine::Vector4 scc, ::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::MPKBDIJDMAP*, ::UnityEngine::Vector4, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_2__RUN_B__1_OFFSET))(this, p, scc, i);
		}

		::System::Void _Run_b__2(::MPKBDIJDMAP* p, ::UnityEngine::Color c, ::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::MPKBDIJDMAP*, ::UnityEngine::Color, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_2__RUN_B__2_OFFSET))(this, p, c, i);
		}
	};
}
