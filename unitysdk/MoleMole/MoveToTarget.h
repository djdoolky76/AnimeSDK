#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AIMoveTargetType.h"
#include "unitysdk/MoleMole/MoveToTarget_AIMoveTargetState.h"

class ACNLKLCDALA;
class CAPAFILOMGC;
class EIMHGJELHGN;
class GEIHCPAOKKK;
class LBDILPLIMCF;
class NLNIIPDCABP;
namespace MoleMole { class SharedGameEntity; }
namespace System { class String; }

#define MOLEMOLE_MOVETOTARGET_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x10D49780)
#define MOLEMOLE_MOVETOTARGET_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x10D4A090)
#define MOLEMOLE_MOVETOTARGET_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10D49390)
#define MOLEMOLE_MOVETOTARGET_ONEND_OFFSET UNITYSDK_OFFSET(0x10D4A040)
#define MOLEMOLE_MOVETOTARGET_ONSTART_OFFSET UNITYSDK_OFFSET(0x10D49730)
#define MOLEMOLE_MOVETOTARGET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10D49880)
#define MOLEMOLE_MOVETOTARGET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10D4A1E0)
#define MOLEMOLE_MOVETOTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x10D4A530)
#define MOLEMOLE_MOVETOTARGET___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10D4A5E0)
#define MOLEMOLE_MOVETOTARGET___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x10D4A670)
#define MOLEMOLE_MOVETOTARGET___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x10D4A700)
#define MOLEMOLE_MOVETOTARGET___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10D4A790)
#define MOLEMOLE_MOVETOTARGET___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10D4A820)

namespace MoleMole
{
	inline static constexpr unsigned int MoveToTarget_TypeDefinitionIndex = 62419;

	class MoveToTarget : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		::CAPAFILOMGC* attackTargetComponent; // 0x58
		::LBDILPLIMCF* moveToTargetTask; // 0x60
		::ACNLKLCDALA* inputComp; // 0x68
		::System::String* targetAnchorName; // 0x70
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x78
		::GEIHCPAOKKK* characterModel; // 0x80
		::EIMHGJELHGN* aiComponent; // 0x88
		::NLNIIPDCABP* animCharacter; // 0x90
		::System::Single minDistance; // 0x98
		::System::Single RotateSpeed; // 0x9C
		::System::Single moveTime; // 0xA0
		::MoleMole::AIMoveTargetType type; // 0xA4
		::System::Single _moveTimer; // 0xA8
		::MoleMole::MoveToTarget_AIMoveTargetState _moveState; // 0xAC
		::System::Single _targetDistance; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET_ONEND_OFFSET))(this);
		}

		::System::Void AllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET_ALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::Void DeAllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET_DEALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET_TOSTRING_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
