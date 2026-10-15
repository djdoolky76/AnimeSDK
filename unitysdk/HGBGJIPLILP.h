#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

#define HGBGJIPLILP_CTOR_OFFSET UNITYSDK_OFFSET(0x15C82E20)

inline static constexpr unsigned int HGBGJIPLILP_TypeDefinitionIndex = 54280;

	class HGBGJIPLILP : public ::System::Object
	{
	public:
		::RPG::GameCore::TeamType BEGKIKOGEOD; // 0x10
		::System::Boolean BHCLAFHOEAO; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBGJIPLILP_CTOR_OFFSET))(this);
		}

	};
