#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBFFFABJINP.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FKNIEPCILLG;
namespace System { class String; }

#define EJHHPFFPFOJ_COBPIICGJJA_OFFSET UNITYSDK_OFFSET(0x14163690)
#define EJHHPFFPFOJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14163420)
#define EJHHPFFPFOJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14163000)
#define EJHHPFFPFOJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14163480)
#define EJHHPFFPFOJ_JLEGHNGEBOG_OFFSET UNITYSDK_OFFSET(0x141636B0)
#define EJHHPFFPFOJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14163080)
#define EJHHPFFPFOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14163680)

inline static constexpr unsigned int EJHHPFFPFOJ_TypeDefinitionIndex = 52009;

class EJHHPFFPFOJ : public ::System::Object
{
public:
	::System::String* HAMIDAGPIFG; // 0x10
	::NBFFFABJINP JMINOGAOFIL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHHPFFPFOJ__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EJHHPFFPFOJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EJHHPFFPFOJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::UnityEngine::Vector3 COBPIICGJJA()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHHPFFPFOJ_COBPIICGJJA_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EJHHPFFPFOJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::UnityEngine::Vector3 JLEGHNGEBOG()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHHPFFPFOJ_JLEGHNGEBOG_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EJHHPFFPFOJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
