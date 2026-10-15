#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JLCNECHMMNG.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Action; }

#define GHFJNJBJMBH_CTOR_OFFSET UNITYSDK_OFFSET(0x15A1B020)
#define GHFJNJBJMBH_GMLBJJLBPMF_OFFSET UNITYSDK_OFFSET(0x15A1AF40)
#define GHFJNJBJMBH_HDOFEPFEOEB_OFFSET UNITYSDK_OFFSET(0x15A1AFD0)
#define GHFJNJBJMBH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15A1ADF0)
#define GHFJNJBJMBH_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x15A1AED0)

	class GHFJNJBJMBH : public ::JLCNECHMMNG
	{
	public:
		::System::Single HBDJCFFDGDD; // 0x20
		::UnityEngine::Vector3 PDJBFBPEHFE; // 0x24
		::UnityEngine::Quaternion AHANGHKAIBO; // 0x30
		::System::Single CEIBKEBGAGI; // 0x40
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
