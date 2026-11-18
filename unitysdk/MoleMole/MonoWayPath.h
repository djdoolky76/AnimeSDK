#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoWayPoint; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOWAYPATH_FINDCLOSESTWAYPOINT_OFFSET UNITYSDK_OFFSET(0x14B0AEE0)
#define MOLEMOLE_MONOWAYPATH_FINDNEXTWAYPOINT_OFFSET UNITYSDK_OFFSET(0x14B0B080)
#define MOLEMOLE_MONOWAYPATH_GETWAYPOINTBYPOINTNAME_OFFSET UNITYSDK_OFFSET(0x14B0B360)
#define MOLEMOLE_MONOWAYPATH_GETWAYPOINT_OFFSET UNITYSDK_OFFSET(0x14B0B2D0)
#define MOLEMOLE_MONOWAYPATH_INIT_OFFSET UNITYSDK_OFFSET(0x14B0ABD0)
#define MOLEMOLE_MONOWAYPATH_UPDATE_OFFSET UNITYSDK_OFFSET(0x14B0A980)
#define MOLEMOLE_MONOWAYPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x14B0B470)

namespace MoleMole
{
	inline static constexpr unsigned int MonoWayPath_TypeDefinitionIndex = 61993;

	class MonoWayPath : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::MonoWayPoint*>* wayPathList; // 0x18
		::System::Int32 minTime; // 0x20
		::System::Single timerForNpcBorn; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWAYPATH__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWAYPATH_UPDATE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWAYPATH_INIT_OFFSET))(this);
		}

		::System::Void FindClosestWayPoint(::UnityEngine::Vector3 CKPGOKHECCH, ::MoleMole::MonoWayPoint*& ILOEGFPFCED)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::MonoWayPoint*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWAYPATH_FINDCLOSESTWAYPOINT_OFFSET))(this, CKPGOKHECCH, ILOEGFPFCED);
		}

		::MoleMole::MonoWayPoint* FindNextWayPoint(::MoleMole::MonoWayPoint* ILOEGFPFCED)
		{
			return ((::MoleMole::MonoWayPoint*(*)(::PVOID, ::MoleMole::MonoWayPoint*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWAYPATH_FINDNEXTWAYPOINT_OFFSET))(this, ILOEGFPFCED);
		}

		::MoleMole::MonoWayPoint* GetWayPoint(::System::Int32 ABHBKFJKINO)
		{
			return ((::MoleMole::MonoWayPoint*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWAYPATH_GETWAYPOINT_OFFSET))(this, ABHBKFJKINO);
		}

		::MoleMole::MonoWayPoint* GetWayPointByPointName(::System::String* ENDGALJPBDG)
		{
			return ((::MoleMole::MonoWayPoint*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWAYPATH_GETWAYPOINTBYPOINTNAME_OFFSET))(this, ENDGALJPBDG);
		}
	};
}
