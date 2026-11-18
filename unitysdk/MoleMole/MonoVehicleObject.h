#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"

namespace System { class String; }

#define MOLEMOLE_MONOVEHICLEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1249A5C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoVehicleObject_TypeDefinitionIndex = 71946;

	class MonoVehicleObject : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		::System::String* assetPath; // 0x38
		::System::String* ScriptConfigPath; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVEHICLEOBJECT__CTOR_OFFSET))(this);
		}
	};
}
