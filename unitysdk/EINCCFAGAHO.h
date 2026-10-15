#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EGameDevPhasePage.h"
#include "unitysdk/System/Object.h"

#define EINCCFAGAHO_CTOR_OFFSET UNITYSDK_OFFSET(0x154C6EA0)

inline static constexpr unsigned int EINCCFAGAHO_TypeDefinitionIndex = 61119;

	class EINCCFAGAHO : public ::System::Object
	{
	public:
		::RPG::Client::EGameDevPhasePage PMKNJAIGKPJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EINCCFAGAHO_CTOR_OFFSET))(this);
		}

	};
