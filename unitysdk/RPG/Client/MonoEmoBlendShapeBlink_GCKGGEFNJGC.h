#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_GCKGGEFNJGC_CTOR_OFFSET UNITYSDK_OFFSET(0xE268FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEmoBlendShapeBlink_GCKGGEFNJGC_TypeDefinitionIndex = 73129;

	class MonoEmoBlendShapeBlink_GCKGGEFNJGC : public ::System::Object
	{
	public:
		::System::Boolean MOKNCFJICIC; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 GMDBHJKEAEI; // 0x14
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_GCKGGEFNJGC_CTOR_OFFSET))(this);
		}

	};
}
