#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;
class PEEDLCHFAFL;
namespace UnityEngine { class Rigidbody; }

#define DOHGPOFJALK_CLEAR_OFFSET UNITYSDK_OFFSET(0x11FE3790)
#define DOHGPOFJALK_CNNGDCBEDFL_OFFSET UNITYSDK_OFFSET(0x11FE3830)
#define DOHGPOFJALK_CTOR_OFFSET UNITYSDK_OFFSET(0x11FE3710)
#define DOHGPOFJALK_EGMELAHBFNE_OFFSET UNITYSDK_OFFSET(0x11FE3880)
#define DOHGPOFJALK_FHDMIIFONFC_OFFSET UNITYSDK_OFFSET(0x11FE37E0)
#define DOHGPOFJALK_IGGELNKAMNJ_OFFSET UNITYSDK_OFFSET(0x11FE3970)
#define DOHGPOFJALK_KMMFCCGJNMP_OFFSET UNITYSDK_OFFSET(0x11FE38D0)
#define DOHGPOFJALK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x11FE3720)

inline static constexpr unsigned int DOHGPOFJALK_TypeDefinitionIndex = 76958;

	class DOHGPOFJALK : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::HIOEAKHGILF* GGKGFABFGFE; // 0x18
		::UnityEngine::Rigidbody* LLBAAKBKFLC; // 0x20
		::UnityEngine::Vector3 DEIIMEECCKK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHGPOFJALK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::PEEDLCHFAFL* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Rigidbody* a3)
		{
			return ((::System::Void(*)(::PVOID, ::PEEDLCHFAFL*, ::HIOEAKHGILF*, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + DOHGPOFJALK_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHGPOFJALK_CLEAR_OFFSET))(this);
		}

		::System::Void FHDMIIFONFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHGPOFJALK_FHDMIIFONFC_OFFSET))(this);
		}

		::System::Void CNNGDCBEDFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHGPOFJALK_CNNGDCBEDFL_OFFSET))(this);
		}

		::System::Boolean EGMELAHBFNE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHGPOFJALK_EGMELAHBFNE_OFFSET))(this);
		}

		::UnityEngine::Vector3 KMMFCCGJNMP()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHGPOFJALK_KMMFCCGJNMP_OFFSET))(this);
		}

		::System::Void IGGELNKAMNJ(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DOHGPOFJALK_IGGELNKAMNJ_OFFSET))(this, a1);
		}

	};
