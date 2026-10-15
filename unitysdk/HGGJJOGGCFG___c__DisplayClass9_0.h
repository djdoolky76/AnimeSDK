#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HGGJJOGGCFG;
class LAJCPEFEOPN;

#define HGGJJOGGCFG___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15C9C950)
#define HGGJJOGGCFG___C__DISPLAYCLASS9_0___SPAWNMEMBER_B__0_OFFSET UNITYSDK_OFFSET(0x15C9EC30)

	class HGGJJOGGCFG___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::HGGJJOGGCFG* __4__this; // 0x10
		::UnityEngine::Vector3 position; // 0x18
		::System::Int32 stackIndex; // 0x24
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
