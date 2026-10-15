#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HGGJJOGGCFG;
class LAJCPEFEOPN;

#define HGGJJOGGCFG___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15C8FF40)
#define HGGJJOGGCFG___C__DISPLAYCLASS9_0___SPAWNMEMBER_B__0_OFFSET UNITYSDK_OFFSET(0x15C92220)

inline static constexpr unsigned int HGGJJOGGCFG___c__DisplayClass9_0_TypeDefinitionIndex = 69339;

	class HGGJJOGGCFG___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::HGGJJOGGCFG* __4__this; // 0x10
		::System::Int32 stackIndex; // 0x18
		::UnityEngine::Vector3 position; // 0x1C
		::UnityEngine::Quaternion rotation; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGJJOGGCFG___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Void __SpawnMember_b__0(::LAJCPEFEOPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + HGGJJOGGCFG___C__DISPLAYCLASS9_0___SPAWNMEMBER_B__0_OFFSET))(this, a1);
		}

	};
