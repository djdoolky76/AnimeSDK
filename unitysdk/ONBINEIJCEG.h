#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

#define ONBINEIJCEG_CTOR_OFFSET UNITYSDK_OFFSET(0x17D718B0)

inline static constexpr unsigned int ONBINEIJCEG_TypeDefinitionIndex = 55480;

	class ONBINEIJCEG : public ::System::Object
	{
	public:
		::RPG::GameCore::TeamType BEGKIKOGEOD; // 0x10
		::System::Boolean BHCLAFHOEAO; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONBINEIJCEG_CTOR_OFFSET))(this);
		}

	};
