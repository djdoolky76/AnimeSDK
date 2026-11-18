#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_PFCEIAIODJN__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBangBooAutoBattleSlot_PFCEIAIODJN_TypeDefinitionIndex = 44141;

	struct alignas(8) MonoBangBooAutoBattleSlot_PFCEIAIODJN
	{
		::UnityEngine::Transform* LFJLELJKNAA; // 0x10
		::System::Func_2<::System::Object*, ::System::Boolean>* DOAOGPPHDGB; // 0x18

		::System::Void _ctor(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Func_2<::System::Object*, ::System::Boolean>* KANJODNFFOI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Func_2<::System::Object*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBANGBOOAUTOBATTLESLOT_PFCEIAIODJN__CTOR_OFFSET))(this, GKBJOPJKCLB, KANJODNFFOI);
		}
	};
}
