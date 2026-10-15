#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhysicsRigidBodyType.h"
#include "unitysdk/System/Object.h"
class CAHLPKGIABH;

#define NLGPIBBCIFG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C76EA00)
#define NLGPIBBCIFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C76EA50)

inline static constexpr unsigned int NLGPIBBCIFG_TypeDefinitionIndex = 36835;

	class NLGPIBBCIFG : public ::System::Object
	{
	public:
		::CAHLPKGIABH* LONMALFCKOI; // 0x10
		::RPG::GameCore::PhysicsRigidBodyType GMPGDEINODK; // 0x18
		::System::Boolean GECBBOEPHFC; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLGPIBBCIFG_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLGPIBBCIFG_CLEAR_OFFSET))(this);
		}

	};
