#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJNENPBFING.h"
#include "unitysdk/FAMGHMADMAF.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/DisplayCase/EDisplayItemSubType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EGKDMJGMIFC;

#define MOLEMOLE_DISPLAYCASE_DISPLAYITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C6A70)

namespace MoleMole::DisplayCase
{
	inline static constexpr unsigned int DisplayItemData_TypeDefinitionIndex = 46055;

	class DisplayItemData : public ::System::Object
	{
	public:
		::System::Int32 Id; // 0x10
		::FAMGHMADMAF ItemType; // 0x14
		::MoleMole::DisplayCase::EDisplayItemSubType ItemSubType; // 0x18
		::System::Byte _padding0[0x4];
		::Foundation::AssetPath prefabPath; // 0x20
		::EJNENPBFING StackType; // 0x30
		::System::Byte _padding1[0x4];
		::EGKDMJGMIFC* Cfg; // 0x38
		::UnityEngine::Vector3 localPos; // 0x40
		::System::Single localYaw; // 0x4C
		::System::Int32 state; // 0x50

		::System::Void _ctor(::System::Int32 MGMDLMBEDJF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYCASE_DISPLAYITEMDATA__CTOR_OFFSET))(this, MGMDLMBEDJF);
		}
	};
}
