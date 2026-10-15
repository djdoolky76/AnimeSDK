#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_GCKGGEFNJGC_CTOR_OFFSET UNITYSDK_OFFSET(0xD8166E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEmoBlendShapeBlink_GCKGGEFNJGC_TypeDefinitionIndex = 71146;

	class MonoEmoBlendShapeBlink_GCKGGEFNJGC : public ::System::Object
	{
	public:
		::System::Boolean MOKNCFJICIC; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x14
		::System::Int32 GMDBHJKEAEI; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_GCKGGEFNJGC_CTOR_OFFSET))(this);
		}

	};
}
