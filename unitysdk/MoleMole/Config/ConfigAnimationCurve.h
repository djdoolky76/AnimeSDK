#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGANIMATIONCURVE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x6C4320)
#define MOLEMOLE_CONFIG_CONFIGANIMATIONCURVE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x6C4290)
#define MOLEMOLE_CONFIG_CONFIGANIMATIONCURVE_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x6C4380)
#define MOLEMOLE_CONFIG_CONFIGANIMATIONCURVE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x6C4390)
#define MOLEMOLE_CONFIG_CONFIGANIMATIONCURVE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x6C43A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAnimationCurve_TypeDefinitionIndex = 78223;

	struct alignas(8) ConfigAnimationCurve
	{
		::System::String* Key; // 0x10
		::UnityEngine::AnimationCurve* _curve; // 0x18

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATIONCURVE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATIONCURVE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::UnityEngine::AnimationCurve* get_Curve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATIONCURVE_GET_CURVE_OFFSET))(this);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATIONCURVE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATIONCURVE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
