#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class ANAKBKOHGEB;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ENTITYSPAWNREQUEST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16229B30)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ENTITYSPAWNREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x16229B20)

namespace MoleMole
{
	inline static constexpr unsigned int EntitySpawnSubsystem_EntitySpawnRequest_TypeDefinitionIndex = 87043;

	class EntitySpawnSubsystem_EntitySpawnRequest : public ::System::Object
	{
	public:
		::Foundation::ViewObject::ViewObjectHandle OwnerVo; // 0x10
		::ANAKBKOHGEB* Creator; // 0x20
		::System::Action_1<::MoleMole::EntityHandle>* OnComplete; // 0x28
		::MoleMole::EntityHandle Entity; // 0x30
		::System::Boolean IsWaiting; // 0x40
		::System::Boolean IsCancelled; // 0x41
		::System::Byte _padding0[0x2];
		::System::Int32 Priority; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ENTITYSPAWNREQUEST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Foundation::ViewObject::ViewObjectHandle ownerVo, ::ANAKBKOHGEB* creator, ::System::Int32 priority, ::System::Action_1<::MoleMole::EntityHandle>* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::ANAKBKOHGEB*, ::System::Int32, ::System::Action_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ENTITYSPAWNREQUEST__CTOR_1_OFFSET))(this, ownerVo, creator, priority, onComplete);
		}
	};
}
