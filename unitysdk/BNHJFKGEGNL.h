#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JEHEMLENCIE;
class ODCELNBAEIB;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define BNHJFKGEGNL_CTOR_OFFSET UNITYSDK_OFFSET(0xBDDA3D0)
#define BNHJFKGEGNL_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBDDA690)
#define BNHJFKGEGNL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBDDA5D0)
#define BNHJFKGEGNL_KAGICIAJEEA_OFFSET UNITYSDK_OFFSET(0xBDDA630)
#define BNHJFKGEGNL_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBDDA410)

inline static constexpr unsigned int BNHJFKGEGNL_TypeDefinitionIndex = 79090;

	class BNHJFKGEGNL : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* LBNBPMIFDHI; // 0x10
		::JEHEMLENCIE* OLNEEDIAGBF; // 0x18
		::UnityEngine::Transform* GKNBCPMJHMN; // 0x20
		::System::String* OINCGJJMAEF; // 0x28
		::UnityEngine::Vector3 MIFKHBDOGLN; // 0x30
		::System::Single NNIIGDIAEED; // 0x3C
		::System::Boolean IHJGGKCKGKH; // 0x40
		::System::Boolean JAGGOIIDFJE; // 0x41
		::System::Byte _padding0[0x2];
		::System::Single BPAIDCADMDO; // 0x44
		::System::Void _ctor(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Transform* a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BNHJFKGEGNL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void NPAFMEBNFOB(::ODCELNBAEIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODCELNBAEIB*))((::PBYTE)hIl2Cpp + BNHJFKGEGNL_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BNHJFKGEGNL_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean KAGICIAJEEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHJFKGEGNL_KAGICIAJEEA_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHJFKGEGNL_HADOHLNHHGB_OFFSET))(this);
		}

	};
