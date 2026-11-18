#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define GPJABOEPFAD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17A2DC10)
#define GPJABOEPFAD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17A2DE90)
#define GPJABOEPFAD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17A2DC70)
#define GPJABOEPFAD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17A2DF10)
#define GPJABOEPFAD__CTOR_OFFSET UNITYSDK_OFFSET(0x17A2E480)

inline static constexpr unsigned int GPJABOEPFAD_TypeDefinitionIndex = 55399;

class GPJABOEPFAD : public ::System::Object
{
public:
	::UnityEngine::Vector3 AKAGDEFAGJA; // 0x10
	::UnityEngine::Vector3 BDJLLGMFDJN; // 0x1C
	::UnityEngine::Vector3 CLMNLPKFBFA; // 0x28
	::System::Single CIIPCCLOHLH; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJABOEPFAD__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GPJABOEPFAD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GPJABOEPFAD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GPJABOEPFAD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GPJABOEPFAD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
