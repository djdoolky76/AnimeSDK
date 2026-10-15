#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoCharacterHeadPoint; }
namespace UnityEngine { class Transform; }

#define EHHAOKBNDII_HHHBOFNGHCK_OFFSET UNITYSDK_OFFSET(0x2E72B00)
#define EHHAOKBNDII_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x2E72B40)

inline static constexpr unsigned int EHHAOKBNDII_TypeDefinitionIndex = 57099;

	struct alignas(8) EHHAOKBNDII
	{
		::RPG::Client::MonoCharacterHeadPoint* KCBPBMOJOKJ; // 0x10
		::System::Boolean NLDLLPECLCH; // 0x18
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 AIBGEDIGEOO; // 0x1C
		::UnityEngine::Quaternion LOLLEGPLMOO; // 0x28
		::System::Single AFGBMIHNCGK; // 0x38
		::UnityEngine::Vector3 IBHJDCGOMJG; // 0x3C
		::UnityEngine::Vector3 HHHBOFNGHCK(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + EHHAOKBNDII_HHHBOFNGHCK_OFFSET))(this, a1, a2);
		}

		::System::Void LJBCDJNNBJH(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + EHHAOKBNDII_LJBCDJNNBJH_OFFSET))(this, a1);
		}

	};
