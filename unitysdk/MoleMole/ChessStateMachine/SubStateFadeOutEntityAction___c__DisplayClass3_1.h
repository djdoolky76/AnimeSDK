#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

class AEONPIHMGJK;
class MPKBDIJDMAP;

#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x174E83E0)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_1__RUN_B__3_OFFSET UNITYSDK_OFFSET(0x174E8410)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_1__RUN_B__4_OFFSET UNITYSDK_OFFSET(0x174E8440)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_1__RUN_B__5_OFFSET UNITYSDK_OFFSET(0x174E83F0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int SubStateFadeOutEntityAction___c__DisplayClass3_1_TypeDefinitionIndex = 79116;

	template <typename T>
	class SubStateFadeOutEntityAction___c__DisplayClass3_1 : public ::System::Object
	{
	public:
		::AEONPIHMGJK* pieceMultiPlayerHelper; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_1__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_1__RUN_B__5_OFFSET))(this);
		}

		::System::Void _Run_b__3(::MPKBDIJDMAP* p, ::UnityEngine::Vector4 scc, ::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::MPKBDIJDMAP*, ::UnityEngine::Vector4, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_1__RUN_B__3_OFFSET))(this, p, scc, i);
		}

		::System::Void _Run_b__4(::MPKBDIJDMAP* p, ::UnityEngine::Color c, ::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::MPKBDIJDMAP*, ::UnityEngine::Color, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___C__DISPLAYCLASS3_1__RUN_B__4_OFFSET))(this, p, c, i);
		}
	};
}
