#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JLCNECHMMNG;
namespace System { class Action; }

#define JLCNECHMMNG_CTOR_OFFSET UNITYSDK_OFFSET(0xBA629F0)
#define JLCNECHMMNG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA627C0)
#define JLCNECHMMNG_FKILJIAADJM_OFFSET UNITYSDK_OFFSET(0xBA629B0)
#define JLCNECHMMNG_GMLBJJLBPMF_OFFSET UNITYSDK_OFFSET(0xBA62850)
#define JLCNECHMMNG_HDOFEPFEOEB_OFFSET UNITYSDK_OFFSET(0xBA62930)
#define JLCNECHMMNG_JFHKHOMEKIM_OFFSET UNITYSDK_OFFSET(0xBA62970)
#define JLCNECHMMNG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBA62770)
#define JLCNECHMMNG_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xBA62810)
#define JLCNECHMMNG_MGJLINFADJK_OFFSET UNITYSDK_OFFSET(0xBA628D0)

inline static constexpr unsigned int JLCNECHMMNG_TypeDefinitionIndex = 81529;

	class JLCNECHMMNG : public ::System::Object
	{
	public:
		::JLCNECHMMNG* PILLHDDIEAH; // 0x10
		::System::Action* CIFOILLJFNF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCNECHMMNG_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JLCNECHMMNG_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCNECHMMNG_DISPOSE_OFFSET))(this);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCNECHMMNG_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Boolean GMLBJJLBPMF(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + JLCNECHMMNG_GMLBJJLBPMF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MGJLINFADJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCNECHMMNG_MGJLINFADJK_OFFSET))(this);
		}

		::System::Single HDOFEPFEOEB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCNECHMMNG_HDOFEPFEOEB_OFFSET))(this);
		}

		::System::Single JFHKHOMEKIM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCNECHMMNG_JFHKHOMEKIM_OFFSET))(this);
		}

		::System::Single FKILJIAADJM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCNECHMMNG_FKILJIAADJM_OFFSET))(this);
		}

	};
