#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"

#define MOLEMOLE_MONOPARTYSCENEOBJECT_ONASSOCIATEDENTITYREMOVED_OFFSET UNITYSDK_OFFSET(0x1043BE60)
#define MOLEMOLE_MONOPARTYSCENEOBJECT_ONDOUPDATE_OFFSET UNITYSDK_OFFSET(0x104321B0)
#define MOLEMOLE_MONOPARTYSCENEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x104320B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoPartySceneObject_TypeDefinitionIndex = 66954;

	class MonoPartySceneObject : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		::System::Int32 sceneObjectID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSCENEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void OnDoUpdate(::System::UInt32 BNNCKJIALIO)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSCENEOBJECT_ONDOUPDATE_OFFSET))(this, BNNCKJIALIO);
		}

		::System::Void OnAssociatedEntityRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSCENEOBJECT_ONASSOCIATEDENTITYREMOVED_OFFSET))(this);
		}
	};
}
