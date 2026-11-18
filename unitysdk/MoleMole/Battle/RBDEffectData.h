#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KMGGCBGCNPM.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_BATTLE_RBDEFFECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5ABAF0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int RBDEffectData_TypeDefinitionIndex = 68516;

	class RBDEffectData : public ::System::Object
	{
	public:
		::KMGGCBGCNPM m_eType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* m_sName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDEFFECTDATA__CTOR_OFFSET))(this);
		}
	};
}
