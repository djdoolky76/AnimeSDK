#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }

#define MOLEMOLE_GIZMOSUTILSBEHAVIOR_CLEARINSTANCE_OFFSET UNITYSDK_OFFSET(0x130DD000)
#define MOLEMOLE_GIZMOSUTILSBEHAVIOR_FINDINSTANCE_OFFSET UNITYSDK_OFFSET(0x130DCDD0)
#define MOLEMOLE_GIZMOSUTILSBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x130DD1E0)

namespace MoleMole
{
	inline static constexpr unsigned int GizmosUtilsBehavior_TypeDefinitionIndex = 80014;

	class GizmosUtilsBehavior : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Byte _padding0[0x7];
		::System::Action* OnDrawGizmosAction; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GIZMOSUTILSBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::MoleMole::GizmosUtilsBehavior* FindInstance()
		{
			return ((::MoleMole::GizmosUtilsBehavior*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GIZMOSUTILSBEHAVIOR_FINDINSTANCE_OFFSET))();
		}

		static ::System::Void ClearInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GIZMOSUTILSBEHAVIOR_CLEARINSTANCE_OFFSET))();
		}
	};
}
