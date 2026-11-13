#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HGGENLBDAPM;
class JDNEAIDOOAN_AOCCKKJPADL;
namespace RPGTools::LDWhiteBox { class WhiteBoxRegion; }

#define JDNEAIDOOAN_EDPCDBPNADN_CTOR_OFFSET UNITYSDK_OFFSET(0x1303CDF0)
#define JDNEAIDOOAN_EDPCDBPNADN_GET_ACCEPTEDSIZE_OFFSET UNITYSDK_OFFSET(0x13059480)
#define JDNEAIDOOAN_EDPCDBPNADN_GET_REGION_OFFSET UNITYSDK_OFFSET(0x13059470)
#define JDNEAIDOOAN_EDPCDBPNADN_GIGJMNCIFMJ_OFFSET UNITYSDK_OFFSET(0x1303D1A0)
#define JDNEAIDOOAN_EDPCDBPNADN_SET_ACCEPTEDSIZE_OFFSET UNITYSDK_OFFSET(0x130594A0)

inline static constexpr unsigned int JDNEAIDOOAN_EDPCDBPNADN_TypeDefinitionIndex = 49997;

	class JDNEAIDOOAN_EDPCDBPNADN : public ::System::Object
	{
	public:
		::HGGENLBDAPM* COKOLPGMBFP; // 0x10
		::JDNEAIDOOAN_AOCCKKJPADL* PJLHOKMKCCH; // 0x18
		::RPGTools::LDWhiteBox::WhiteBoxRegion* _Region_k__BackingField; // 0x20
		::UnityEngine::Vector3 _AcceptedSize_k__BackingField; // 0x28
		::System::Void _ctor(::RPGTools::LDWhiteBox::WhiteBoxRegion* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxRegion*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JDNEAIDOOAN_EDPCDBPNADN_CTOR_OFFSET))(this, a1, a2);
		}

		::RPGTools::LDWhiteBox::WhiteBoxRegion* get_Region()
		{
			return ((::RPGTools::LDWhiteBox::WhiteBoxRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNEAIDOOAN_EDPCDBPNADN_GET_REGION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_AcceptedSize()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNEAIDOOAN_EDPCDBPNADN_GET_ACCEPTEDSIZE_OFFSET))(this);
		}

		::System::Void set_AcceptedSize(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JDNEAIDOOAN_EDPCDBPNADN_SET_ACCEPTEDSIZE_OFFSET))(this, a1);
		}

		::System::Void GIGJMNCIFMJ(::UnityEngine::Vector3 a1, ::HGGENLBDAPM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::HGGENLBDAPM*))((::PBYTE)hIl2Cpp + JDNEAIDOOAN_EDPCDBPNADN_GIGJMNCIFMJ_OFFSET))(this, a1, a2);
		}

	};
