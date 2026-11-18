#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TAPESBACKGROUNDDRAG_FIXDELTA_OFFSET UNITYSDK_OFFSET(0x162F6DB0)
#define MOLEMOLE_TAPESBACKGROUNDDRAG_FIXWALLPOSITION_OFFSET UNITYSDK_OFFSET(0x162F7140)
#define MOLEMOLE_TAPESBACKGROUNDDRAG_INITCLAMP_OFFSET UNITYSDK_OFFSET(0x162F6C20)
#define MOLEMOLE_TAPESBACKGROUNDDRAG_MOVEWALL_OFFSET UNITYSDK_OFFSET(0x162F6EA0)
#define MOLEMOLE_TAPESBACKGROUNDDRAG_SETDIR_OFFSET UNITYSDK_OFFSET(0x162F6E10)
#define MOLEMOLE_TAPESBACKGROUNDDRAG__CTOR_OFFSET UNITYSDK_OFFSET(0x162F71E0)

namespace MoleMole
{
	inline static constexpr unsigned int TapesBackgroundDrag_TypeDefinitionIndex = 90061;

	class TapesBackgroundDrag : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* backGroundList; // 0x18
		::System::Single FKKAIKOEADD; // 0x20
		::System::Single HLKMKEKGPLM; // 0x24
		::System::Single EDMOBCAEDHG; // 0x28
		::System::Single dragOffset; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TAPESBACKGROUNDDRAG__CTOR_OFFSET))(this);
		}

		::System::Void InitClamp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TAPESBACKGROUNDDRAG_INITCLAMP_OFFSET))(this);
		}

		::System::Single FixDelta(::System::Single DAAEHEHLLLD)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TAPESBACKGROUNDDRAG_FIXDELTA_OFFSET))(this, DAAEHEHLLLD);
		}

		::System::Void SetDir(::System::Single DAAEHEHLLLD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TAPESBACKGROUNDDRAG_SETDIR_OFFSET))(this, DAAEHEHLLLD);
		}

		::System::Void MoveWall(::System::Single NACJGIMELBO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TAPESBACKGROUNDDRAG_MOVEWALL_OFFSET))(this, NACJGIMELBO);
		}

		::UnityEngine::Vector3 FixWallPosition(::UnityEngine::Vector3 OHOGDOMNHNK)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_TAPESBACKGROUNDDRAG_FIXWALLPOSITION_OFFSET))(this, OHOGDOMNHNK);
		}
	};
}
