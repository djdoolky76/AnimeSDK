#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/JDNEAIDOOAN_LMKDFFLDGDN.h"
class HGGENLBDAPM;
class JDNEAIDOOAN_AOCCKKJPADL;
namespace RPGTools::LDWhiteBox { class WhiteBoxRegion; }

#define JDNEAIDOOAN_HHDHJGKDJEA_CTOR_OFFSET UNITYSDK_OFFSET(0xB956E20)
#define JDNEAIDOOAN_HHDHJGKDJEA_GET_ACCEPTEDPOSITION_OFFSET UNITYSDK_OFFSET(0xB959420)
#define JDNEAIDOOAN_HHDHJGKDJEA_GET_REGION_OFFSET UNITYSDK_OFFSET(0xB959410)
#define JDNEAIDOOAN_HHDHJGKDJEA_GIGJMNCIFMJ_OFFSET UNITYSDK_OFFSET(0xB9578F0)
#define JDNEAIDOOAN_HHDHJGKDJEA_SET_ACCEPTEDPOSITION_OFFSET UNITYSDK_OFFSET(0xB959440)

inline static constexpr unsigned int JDNEAIDOOAN_HHDHJGKDJEA_TypeDefinitionIndex = 49998;

	class JDNEAIDOOAN_HHDHJGKDJEA : public ::System::Object
	{
	public:
		::RPGTools::LDWhiteBox::WhiteBoxRegion* _Region_k__BackingField; // 0x10
		::HGGENLBDAPM* COKOLPGMBFP; // 0x18
		::JDNEAIDOOAN_AOCCKKJPADL* PJLHOKMKCCH; // 0x20
		::UnityEngine::Vector3 _AcceptedPosition_k__BackingField; // 0x28
		::System::Void _ctor(::RPGTools::LDWhiteBox::WhiteBoxRegion* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxRegion*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JDNEAIDOOAN_HHDHJGKDJEA_CTOR_OFFSET))(this, a1, a2);
		}

		::RPGTools::LDWhiteBox::WhiteBoxRegion* get_Region()
		{
			return ((::RPGTools::LDWhiteBox::WhiteBoxRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNEAIDOOAN_HHDHJGKDJEA_GET_REGION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_AcceptedPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNEAIDOOAN_HHDHJGKDJEA_GET_ACCEPTEDPOSITION_OFFSET))(this);
		}

		::System::Void set_AcceptedPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JDNEAIDOOAN_HHDHJGKDJEA_SET_ACCEPTEDPOSITION_OFFSET))(this, a1);
		}

		::System::Void GIGJMNCIFMJ(::JDNEAIDOOAN_LMKDFFLDGDN a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDNEAIDOOAN_LMKDFFLDGDN))((::PBYTE)hIl2Cpp + JDNEAIDOOAN_HHDHJGKDJEA_GIGJMNCIFMJ_OFFSET))(this, a1);
		}

	};
