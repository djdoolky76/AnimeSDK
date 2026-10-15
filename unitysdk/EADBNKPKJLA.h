#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODCELNBAEIB;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define EADBNKPKJLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1266CAD0)
#define EADBNKPKJLA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1266CCE0)
#define EADBNKPKJLA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1266CB60)
#define EADBNKPKJLA_KAGICIAJEEA_OFFSET UNITYSDK_OFFSET(0x1266CC80)
#define EADBNKPKJLA_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1266CAF0)

inline static constexpr unsigned int EADBNKPKJLA_TypeDefinitionIndex = 79092;

	class EADBNKPKJLA : public ::System::Object
	{
	public:
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x10
		::UnityEngine::GameObject* OJAHLJGABMJ; // 0x18
		::System::Single KFNAJCFKJJM; // 0x20
		::System::Single HBDJCFFDGDD; // 0x24
		::System::Single BOCCPIAECFL; // 0x28
		::System::Single BPAIDCADMDO; // 0x2C
		::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EADBNKPKJLA_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NPAFMEBNFOB(::ODCELNBAEIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODCELNBAEIB*))((::PBYTE)hIl2Cpp + EADBNKPKJLA_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EADBNKPKJLA_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean KAGICIAJEEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EADBNKPKJLA_KAGICIAJEEA_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADBNKPKJLA_HADOHLNHHGB_OFFSET))(this);
		}

	};
