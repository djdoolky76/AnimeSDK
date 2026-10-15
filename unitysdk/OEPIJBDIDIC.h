#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Animator; }

#define OEPIJBDIDIC_HBIFBJENIIK_OFFSET UNITYSDK_OFFSET(0x24120)
#define OEPIJBDIDIC_NKBAHKJGEFM_OFFSET UNITYSDK_OFFSET(0x24110)

	struct alignas(4) OEPIJBDIDIC
	{
		::System::Int32 BJMAHPHMFDM; // 0x10
		::System::Int32 OJDMPJIOBMJ; // 0x14
		::System::Single NFELGGAPKMO; // 0x18
		::System::Boolean NKBAHKJGEFM(::UnityEngine::Animator* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32))((::PBYTE)hIl2Cpp + OEPIJBDIDIC_NKBAHKJGEFM_OFFSET))(this, a1, a2);
		}

		::System::Void HBIFBJENIIK(::UnityEngine::Animator* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32))((::PBYTE)hIl2Cpp + OEPIJBDIDIC_HBIFBJENIIK_OFFSET))(this, a1, a2);
		}

	};
