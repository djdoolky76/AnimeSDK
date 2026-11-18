#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UITape3DModelController; }
namespace MoleMole { class UITapesGroup3DModelController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1718C870)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS42_0__PERFORMANCESHRINK_B__2_OFFSET UNITYSDK_OFFSET(0x1718C9D0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS42_0__PERFORMANCESHRINK_G__GETOFFSET_0_OFFSET UNITYSDK_OFFSET(0x1718C880)

namespace MoleMole
{
	inline static constexpr unsigned int UITapesGroup3DModelController___c__DisplayClass42_0_TypeDefinitionIndex = 84916;

	class UITapesGroup3DModelController___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::MoleMole::UITapesGroup3DModelController* __4__this; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>* tapes; // 0x18
		::System::Action* __9__2; // 0x20
		::System::Action* onDone; // 0x28
		::UnityEngine::AnimationCurve* curve; // 0x30
		::UnityEngine::Vector3 centerTapePosition; // 0x38
		::System::Single duration; // 0x44
		::System::Int32 totalNum; // 0x48
		::System::Int32 finishCount; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Single _PerformanceShrink_g__GetOffset_0(::System::Int32 idx, ::System::Int32 centerIdx)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS42_0__PERFORMANCESHRINK_G__GETOFFSET_0_OFFSET))(this, idx, centerIdx);
		}

		::System::Void _PerformanceShrink_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS42_0__PERFORMANCESHRINK_B__2_OFFSET))(this);
		}
	};
}
