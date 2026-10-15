#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JLCNECHMMNG.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Action; }

#define GHFJNJBJMBH_CTOR_OFFSET UNITYSDK_OFFSET(0x15A0F670)
#define GHFJNJBJMBH_GMLBJJLBPMF_OFFSET UNITYSDK_OFFSET(0x15A0F590)
#define GHFJNJBJMBH_HDOFEPFEOEB_OFFSET UNITYSDK_OFFSET(0x15A0F620)
#define GHFJNJBJMBH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15A0F440)
#define GHFJNJBJMBH_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x15A0F520)

inline static constexpr unsigned int GHFJNJBJMBH_TypeDefinitionIndex = 78794;

	class GHFJNJBJMBH : public ::JLCNECHMMNG
	{
	public:
		::System::Single HBDJCFFDGDD; // 0x20
		::UnityEngine::Quaternion AHANGHKAIBO; // 0x24
		::System::Single CEIBKEBGAGI; // 0x34
		::UnityEngine::Vector3 PDJBFBPEHFE; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFJNJBJMBH_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Action* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + GHFJNJBJMBH_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFJNJBJMBH_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Boolean GMLBJJLBPMF(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + GHFJNJBJMBH_GMLBJJLBPMF_OFFSET))(this, a1, a2, a3);
		}

		::System::Single HDOFEPFEOEB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFJNJBJMBH_HDOFEPFEOEB_OFFSET))(this);
		}

	};
