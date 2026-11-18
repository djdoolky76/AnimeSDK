#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BMBMBLDFBID.h"
#include "unitysdk/UnityEngine/Vector3.h"

class JBHODMNKFLP;
namespace MoleMole { class UIHollowChessboard3DModelController; }

#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS93_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19781600)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS93_0__TRYRETURN2PERSISTFOCUSCAMERA_B__0_OFFSET UNITYSDK_OFFSET(0x19781610)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS93_0__TRYRETURN2PERSISTFOCUSCAMERA_G__ONREACHTARGETPOS_1_OFFSET UNITYSDK_OFFSET(0x197818F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboard3DModelController___c__DisplayClass93_0_TypeDefinitionIndex = 43490;

	class UIHollowChessboard3DModelController___c__DisplayClass93_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowChessboard3DModelController* __4__this; // 0x10
		::JBHODMNKFLP* focusStateNet; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS93_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryReturn2PersistFocusCamera_b__0(::BMBMBLDFBID v)
		{
			return ((::System::Void(*)(::PVOID, ::BMBMBLDFBID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS93_0__TRYRETURN2PERSISTFOCUSCAMERA_B__0_OFFSET))(this, v);
		}

		::System::Void _TryReturn2PersistFocusCamera_g__OnReachTargetPos_1(::UnityEngine::Vector3 targetPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS93_0__TRYRETURN2PERSISTFOCUSCAMERA_G__ONREACHTARGETPOS_1_OFFSET))(this, targetPos);
		}
	};
}
