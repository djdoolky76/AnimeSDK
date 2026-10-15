#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Attribute.h"

#define ACPNMANEGEH_CTOR_OFFSET UNITYSDK_OFFSET(0xB131BE0)

inline static constexpr unsigned int ACPNMANEGEH_TypeDefinitionIndex = 70240;

	class ACPNMANEGEH : public ::System::Attribute
	{
	public:
		::RPG::GameCore::EventType LAOACNPDOLD; // 0x10
		::System::Void _ctor(::RPG::GameCore::EventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventType))((::PBYTE)hIl2Cpp + ACPNMANEGEH_CTOR_OFFSET))(this, a1);
		}

	};
