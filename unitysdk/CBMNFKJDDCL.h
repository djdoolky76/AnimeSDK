#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CBMNFKJDDCL_CTOR_OFFSET UNITYSDK_OFFSET(0xC4A8680)

inline static constexpr unsigned int CBMNFKJDDCL_TypeDefinitionIndex = 57758;

	class CBMNFKJDDCL : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint KGONDAOEOIN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMNFKJDDCL_CTOR_OFFSET))(this);
		}

	};
