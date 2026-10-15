#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JEHEMLENCIE;
class LEEEMFAEDLN;
class ODCELNBAEIB;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define JDFLPJDIAPD_CTOR_OFFSET UNITYSDK_OFFSET(0x165C2F70)
#define JDFLPJDIAPD_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x165C34D0)
#define JDFLPJDIAPD_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x165C3300)
#define JDFLPJDIAPD_KAGICIAJEEA_OFFSET UNITYSDK_OFFSET(0x165C33F0)
#define JDFLPJDIAPD_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x165C2FB0)

	class JDFLPJDIAPD : public ::System::Object
	{
	public:
		::System::String* OINCGJJMAEF; // 0x10
		::UnityEngine::GameObject* LBNBPMIFDHI; // 0x18
		::LEEEMFAEDLN* EPKIDMNCGAA; // 0x20
		::UnityEngine::Transform* GKNBCPMJHMN; // 0x28
		::JEHEMLENCIE* OLNEEDIAGBF; // 0x30
		::UnityEngine::Vector3 AOBKAEDDOBC; // 0x38
		::System::Single HBDJCFFDGDD; // 0x44
		::UnityEngine::Vector3 BNMMHILFJDD; // 0x48
		::System::Void _ctor(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Transform* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JDFLPJDIAPD_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void NPAFMEBNFOB(::ODCELNBAEIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODCELNBAEIB*))((::PBYTE)hIl2Cpp + JDFLPJDIAPD_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JDFLPJDIAPD_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean KAGICIAJEEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFLPJDIAPD_KAGICIAJEEA_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFLPJDIAPD_HADOHLNHHGB_OFFSET))(this);
		}

	};
