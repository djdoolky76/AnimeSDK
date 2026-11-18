#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class GIGFDLPMNND;
class LMCBEJIGFIN;
namespace BehaviorDesigner::Runtime { class SharedVector3; }
namespace MoleMole { class SharedGameEntity; }
namespace System { class String; }

#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_DORETURNTOBORNPOS_OFFSET UNITYSDK_OFFSET(0x14BC0A70)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_GETTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x14BC0B60)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_ONRESET_OFFSET UNITYSDK_OFFSET(0x14BC0CC0)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_ONSTART_OFFSET UNITYSDK_OFFSET(0x14BC0800)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14BC0C70)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY__CTOR_OFFSET UNITYSDK_OFFSET(0x14BC0D10)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY__ONSTART_B__8_0_OFFSET UNITYSDK_OFFSET(0x14BC0DA0)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x14BC0DB0)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x14BC0E40)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14BC0ED0)

namespace MoleMole
{
	inline static constexpr unsigned int ReturnToBornPositionImmediately_TypeDefinitionIndex = 93105;

	class ReturnToBornPositionImmediately : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector3* OverrideBornPos; // 0x58
		::LMCBEJIGFIN* _ditherModifierInstance; // 0x60
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x68
		::GEIHCPAOKKK* _characterModelComponent; // 0x70
		::GIGFDLPMNND* _characterMaterialComponent; // 0x78
		::System::String* DitherKey; // 0x80
		::System::Boolean IsOverrideBornPos; // 0x88
		::System::Boolean _arriveBornPos; // 0x89

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_ONSTART_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTargetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_GETTARGETPOSITION_OFFSET))(this);
		}

		::System::Void DoReturnToBornPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_DORETURNTOBORNPOS_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_ONRESET_OFFSET))(this);
		}

		::System::Void _OnStart_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY__ONSTART_B__8_0_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
