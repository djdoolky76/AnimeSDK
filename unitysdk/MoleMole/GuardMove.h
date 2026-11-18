#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class ACNLKLCDALA;
class CAPAFILOMGC;
class EIMHGJELHGN;
class GEIHCPAOKKK;
class JFCEDPPLENA;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_GUARDMOVE_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x139E7E30)
#define MOLEMOLE_GUARDMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x139E82C0)
#define MOLEMOLE_GUARDMOVE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x139E79F0)
#define MOLEMOLE_GUARDMOVE_ONEND_OFFSET UNITYSDK_OFFSET(0x139E8270)
#define MOLEMOLE_GUARDMOVE_ONSTART_OFFSET UNITYSDK_OFFSET(0x139E7DC0)
#define MOLEMOLE_GUARDMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x139E7F20)
#define MOLEMOLE_GUARDMOVE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x139E83F0)
#define MOLEMOLE_GUARDMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x139E8650)
#define MOLEMOLE_GUARDMOVE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x139E86E0)
#define MOLEMOLE_GUARDMOVE___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x139E8770)
#define MOLEMOLE_GUARDMOVE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x139E8800)
#define MOLEMOLE_GUARDMOVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x139E8890)
#define MOLEMOLE_GUARDMOVE___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x139E8920)

namespace MoleMole
{
	inline static constexpr unsigned int GuardMove_TypeDefinitionIndex = 82987;

	class GuardMove : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		::EIMHGJELHGN* aiComponent; // 0x58
		::ACNLKLCDALA* characterInput; // 0x60
		::MoleMole::Battle::Entity* ownerEntity; // 0x68
		::CAPAFILOMGC* attackTargetComponent; // 0x70
		::JFCEDPPLENA* guardMoveTask; // 0x78
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x80
		::GEIHCPAOKKK* characterModel; // 0x88
		::System::Single moveTime; // 0x90
		::System::Single _moveTimer; // 0x94
		::System::Single _checkDistance; // 0x98
		::System::Single guardDistance; // 0x9C
		::System::Single rotateSpeed; // 0xA0
		::System::Single moveAngleOffset; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE_ONEND_OFFSET))(this);
		}

		::System::Void AllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE_ALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::Void DeAllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE_TOSTRING_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
