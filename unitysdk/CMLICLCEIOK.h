#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DGMNKINFKFH.h"
namespace RPG::AvatarSystem { class AvatarExEidolon; }

#define CMLICLCEIOK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1B1A2490)
#define CMLICLCEIOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1A25D0)

inline static constexpr unsigned int CMLICLCEIOK_TypeDefinitionIndex = 63984;

	class CMLICLCEIOK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLICLCEIOK_CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::AvatarExEidolon* BPLPBPMEODA(::DGMNKINFKFH a1)
		{
			return ((::RPG::AvatarSystem::AvatarExEidolon*(*)(::PVOID, ::DGMNKINFKFH))((::PBYTE)hIl2Cpp + CMLICLCEIOK_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
