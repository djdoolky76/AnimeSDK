#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vehicle/VehicleControlInput.h"
#include "unitysdk/System/Object.h"

class ENGKPGFGGLM;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_VEHICLE_VEHICLEINPUTHANDLE_JDLEEAJLKLE_OFFSET UNITYSDK_OFFSET(0x12FC4D40)
#define MOLEMOLE_VEHICLE_VEHICLEINPUTHANDLE_OMLDDNKEJAD_OFFSET UNITYSDK_OFFSET(0x12FC4C40)
#define MOLEMOLE_VEHICLE_VEHICLEINPUTHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x12FC4C30)

namespace MoleMole::Vehicle
{
	inline static constexpr unsigned int VehicleInputHandle_TypeDefinitionIndex = 77543;

	class VehicleInputHandle : public ::System::Object
	{
	public:
		::MoleMole::Vehicle::VehicleControlInput _cacheButtonInput; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEINPUTHANDLE__CTOR_OFFSET))(this);
		}

		::System::Void OMLDDNKEJAD(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEINPUTHANDLE_OMLDDNKEJAD_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
		}

		::System::Void JDLEEAJLKLE(::MoleMole::Vehicle::VehicleControlInput& HLFFCMIFFIB, ::System::Single HMKLMNDFGJB)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleControlInput&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEINPUTHANDLE_JDLEEAJLKLE_OFFSET))(this, HLFFCMIFFIB, HMKLMNDFGJB);
		}
	};
}
