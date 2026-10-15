#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingRadialForceFallOffType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class APMIBDHBPBI;

#define APMIBDHBPBI_ABOAFEIHBIE_OFFSET UNITYSDK_OFFSET(0x1C87F070)
#define APMIBDHBPBI_AEOIKFNKAAP_OFFSET UNITYSDK_OFFSET(0x1C87F2C0)
#define APMIBDHBPBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C87F370)
#define APMIBDHBPBI_DGCMCFHBDIC_OFFSET UNITYSDK_OFFSET(0x1C87F250)
#define APMIBDHBPBI_DIIFGCGOCLF_OFFSET UNITYSDK_OFFSET(0x1C87EE90)
#define APMIBDHBPBI_FMDBEAJIDGJ_OFFSET UNITYSDK_OFFSET(0x1C87EF00)
#define APMIBDHBPBI_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0x1C87EDC0)
#define APMIBDHBPBI_MFIFBJJOOGB_OFFSET UNITYSDK_OFFSET(0x1C87F1E0)
#define APMIBDHBPBI_NJAGIMPMMBM_OFFSET UNITYSDK_OFFSET(0x1C87ED20)
#define APMIBDHBPBI_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C87EDD0)

inline static constexpr unsigned int APMIBDHBPBI_TypeDefinitionIndex = 43760;

	class APMIBDHBPBI : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint NJDJFLBCJMM; // 0x10
		::RPG::GameCore::FixPoint GNGPKJGAFBK; // 0x18
		::System::Single BFPEKOGAALP; // 0x20
		::System::Single IEHPFADHJFD; // 0x24
		::UnityEngine::Vector3 LJDHGFECMHJ; // 0x28
		::RPG::Client::LittleGame::ChenLing::ChenLingRadialForceFallOffType LHCFHOGAIMG; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMIBDHBPBI_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 NJAGIMPMMBM()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + APMIBDHBPBI_NJAGIMPMMBM_OFFSET))(this);
		}

		::System::Boolean LDKMIKEMHFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APMIBDHBPBI_LDKMIKEMHFO_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APMIBDHBPBI_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void DIIFGCGOCLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMIBDHBPBI_DIIFGCGOCLF_OFFSET))(this);
		}

		::System::Single MFIFBJJOOGB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APMIBDHBPBI_MFIFBJJOOGB_OFFSET))(this);
		}

		::System::Single DGCMCFHBDIC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APMIBDHBPBI_DGCMCFHBDIC_OFFSET))(this);
		}

		::System::Void FMDBEAJIDGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMIBDHBPBI_FMDBEAJIDGJ_OFFSET))(this);
		}

		::System::Void ABOAFEIHBIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMIBDHBPBI_ABOAFEIHBIE_OFFSET))(this);
		}

		::APMIBDHBPBI* AEOIKFNKAAP()
		{
			return ((::APMIBDHBPBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + APMIBDHBPBI_AEOIKFNKAAP_OFFSET))(this);
		}

	};
