#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A164588C1D5311E1/F8928B3B06147879.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Mesh; }

#define ABC_SPRINGBONE_SPRINGCOLLIDER_E18155E901D11AB9_OFFSET UNITYSDK_OFFSET(0x1F934C0)
#define ABC_SPRINGBONE_SPRINGCOLLIDER_E48A0D1CCC5BC105_OFFSET UNITYSDK_OFFSET(0x1F93700)
#define ABC_SPRINGBONE_SPRINGCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F93FD0)

namespace ABC::SpringBone
{
	inline static constexpr unsigned int SpringCollider_TypeDefinitionIndex = 7929;

	class SpringCollider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::A164588C1D5311E1::F8928B3B06147879 type; // 0x20
		::System::Single radius; // 0x24
		::System::Single height; // 0x28
		::UnityEngine::Vector3 offset; // 0x2C
		::UnityEngine::Vector3 rotation; // 0x38
		::System::Byte _padding0[0x4];
		::UnityEngine::Mesh* F53FFC4F6897F645; // 0x48
		::System::Single BE30B1170915D18E; // 0x50
		::System::Single F341944293B9D98C; // 0x54
		::UnityEngine::Vector3 B441675CFFABB43E; // 0x58
		::UnityEngine::Vector3 E46D834FA50C6A25; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGCOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void E18155E901D11AB9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGCOLLIDER_E18155E901D11AB9_OFFSET))(this);
		}

		::System::Void E48A0D1CCC5BC105(::System::Single F0CEBBB186782829, ::System::Single F0961C93719F7B0D)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGCOLLIDER_E48A0D1CCC5BC105_OFFSET))(this, F0CEBBB186782829, F0961C93719F7B0D);
		}
	};
}
