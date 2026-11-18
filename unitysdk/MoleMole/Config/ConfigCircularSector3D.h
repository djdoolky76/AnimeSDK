#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define MOLEMOLE_CONFIG_CONFIGCIRCULARSECTOR3D_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7DC8A0)
#define MOLEMOLE_CONFIG_CONFIGCIRCULARSECTOR3D_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7DC7E0)
#define MOLEMOLE_CONFIG_CONFIGCIRCULARSECTOR3D_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x7DC900)
#define MOLEMOLE_CONFIG_CONFIGCIRCULARSECTOR3D_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x7DC870)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCircularSector3D_TypeDefinitionIndex = 53616;

	struct alignas(4) ConfigCircularSector3D
	{
		::UnityEngine::Vector3 Dir; // 0x10
		::UnityEngine::Vector3 Normal; // 0x1C
		::System::Single HalfAngleInDeg; // 0x28
		::System::Single Radius; // 0x2C

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCIRCULARSECTOR3D_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCIRCULARSECTOR3D_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCIRCULARSECTOR3D_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCIRCULARSECTOR3D_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}
