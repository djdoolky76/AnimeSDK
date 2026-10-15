#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

#define ONBINEIJCEG_CTOR_OFFSET UNITYSDK_OFFSET(0xBF4A2A0)

inline static constexpr unsigned int ONBINEIJCEG_TypeDefinitionIndex = 54316;

	class ONBINEIJCEG : public ::System::Object
	{
	public:
		::System::Boolean BHCLAFHOEAO; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::TeamType BEGKIKOGEOD; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONBINEIJCEG_CTOR_OFFSET))(this);
		}

	};
