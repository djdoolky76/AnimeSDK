#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhysicsRigidBodyType.h"
#include "unitysdk/System/Object.h"
class CAHLPKGIABH;

#define NLGPIBBCIFG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C79CC00)
#define NLGPIBBCIFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C79CC50)

	class NLGPIBBCIFG : public ::System::Object
	{
	public:
		::CAHLPKGIABH* LONMALFCKOI; // 0x10
		::System::Boolean GECBBOEPHFC; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::PhysicsRigidBodyType GMPGDEINODK; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLGPIBBCIFG_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLGPIBBCIFG_CLEAR_OFFSET))(this);
		}

	};
