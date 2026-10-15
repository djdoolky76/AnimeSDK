#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOGBNBGMIHF;
class ODCELNBAEIB;
namespace UnityEngine { class Transform; }

#define OKPCEOHNKMM_CTOR_OFFSET UNITYSDK_OFFSET(0xBEF3200)
#define OKPCEOHNKMM_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBEF3600)
#define OKPCEOHNKMM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBEF3430)
#define OKPCEOHNKMM_KAGICIAJEEA_OFFSET UNITYSDK_OFFSET(0xBEF3520)
#define OKPCEOHNKMM_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBEF3230)

inline static constexpr unsigned int OKPCEOHNKMM_TypeDefinitionIndex = 79091;

	class OKPCEOHNKMM : public ::System::Object
	{
	public:
		::MOGBNBGMIHF* EPKIDMNCGAA; // 0x10
		::UnityEngine::Transform* OJAHLJGABMJ; // 0x18
		::System::Single JGLKOOAFOBO; // 0x20
		::System::Single HBDJCFFDGDD; // 0x24
		::System::Single MDALIGIMJLE; // 0x28
		::System::Single AJILPHGIIKO; // 0x2C
		::System::Single BKMLJMADLGL; // 0x30
		::System::Void _ctor(::UnityEngine::Transform* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OKPCEOHNKMM_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void NPAFMEBNFOB(::ODCELNBAEIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODCELNBAEIB*))((::PBYTE)hIl2Cpp + OKPCEOHNKMM_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OKPCEOHNKMM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean KAGICIAJEEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPCEOHNKMM_KAGICIAJEEA_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPCEOHNKMM_HADOHLNHHGB_OFFSET))(this);
		}

	};
