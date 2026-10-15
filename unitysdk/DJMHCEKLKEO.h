#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
#include "unitysdk/System/Object.h"

#define DJMHCEKLKEO_CTOR_OFFSET UNITYSDK_OFFSET(0xF238EF0)

inline static constexpr unsigned int DJMHCEKLKEO_TypeDefinitionIndex = 57512;

	class DJMHCEKLKEO : public ::System::Object
	{
	public:
		::System::Boolean ONGEKMBGEED; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::TriggerExitReason JJAHMMJGFEB; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMHCEKLKEO_CTOR_OFFSET))(this);
		}

	};
