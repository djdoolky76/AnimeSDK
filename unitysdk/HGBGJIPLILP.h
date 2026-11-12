#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

#define HGBGJIPLILP_CTOR_OFFSET UNITYSDK_OFFSET(0x16BD9460)

inline static constexpr unsigned int HGBGJIPLILP_TypeDefinitionIndex = 55444;

	class HGBGJIPLILP : public ::System::Object
	{
	public:
		::System::Boolean BHCLAFHOEAO; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::TeamType BEGKIKOGEOD; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBGJIPLILP_CTOR_OFFSET))(this);
		}

	};
