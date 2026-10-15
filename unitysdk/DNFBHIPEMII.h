#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMNMMKNDPGN.h"
#include "unitysdk/AFLELOJKGHN.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace RPG::GameCore { class MiniGameHundredFloorBlockConfig; }

#define DNFBHIPEMII_ABJJBLHEPMA_OFFSET UNITYSDK_OFFSET(0x11946B70)
#define DNFBHIPEMII_CTOR_OFFSET UNITYSDK_OFFSET(0x11946490)
#define DNFBHIPEMII_ELEBFCEAMOC_OFFSET UNITYSDK_OFFSET(0x11946C20)
#define DNFBHIPEMII_HAPFLBLBMGP_OFFSET UNITYSDK_OFFSET(0x119464E0)
#define DNFBHIPEMII_IHFOJLLJBPH_OFFSET UNITYSDK_OFFSET(0x119466E0)
#define DNFBHIPEMII_IOEKHDKEKLC_OFFSET UNITYSDK_OFFSET(0x11947820)
#define DNFBHIPEMII_JDMNFBHKBME_OFFSET UNITYSDK_OFFSET(0x11947550)
#define DNFBHIPEMII_JFMCHCMLABG_OFFSET UNITYSDK_OFFSET(0x119477C0)
#define DNFBHIPEMII_KFJJEJIFLEE_OFFSET UNITYSDK_OFFSET(0x119465E0)
#define DNFBHIPEMII_LCINCJMOOEH_OFFSET UNITYSDK_OFFSET(0x11946C80)
#define DNFBHIPEMII_NLKOHJCMKJH_OFFSET UNITYSDK_OFFSET(0x11947700)
#define DNFBHIPEMII_OABDJEBKACD_OFFSET UNITYSDK_OFFSET(0x119464A0)
#define DNFBHIPEMII_PAMGIMGPEFB_OFFSET UNITYSDK_OFFSET(0x11946BC0)

inline static constexpr unsigned int DNFBHIPEMII_TypeDefinitionIndex = 76929;

	class DNFBHIPEMII : public ::MMNMMKNDPGN
	{
	public:
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + DNFBHIPEMII_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OABDJEBKACD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNFBHIPEMII_OABDJEBKACD_OFFSET))(this);
		}

		::System::Void HAPFLBLBMGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNFBHIPEMII_HAPFLBLBMGP_OFFSET))(this);
		}

		::System::Void KFJJEJIFLEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNFBHIPEMII_KFJJEJIFLEE_OFFSET))(this);
		}

		::System::Void IHFOJLLJBPH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DNFBHIPEMII_IHFOJLLJBPH_OFFSET))(this, a1);
		}

		::System::Void PAMGIMGPEFB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DNFBHIPEMII_PAMGIMGPEFB_OFFSET))(this, a1);
		}

		::System::Void ELEBFCEAMOC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DNFBHIPEMII_ELEBFCEAMOC_OFFSET))(this, a1);
		}

		::System::Boolean LCINCJMOOEH(::System::Int32 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DNFBHIPEMII_LCINCJMOOEH_OFFSET))(this, a1, a2, a3, a4);
		}

		::HIOEAKHGILF* JDMNFBHKBME(::System::Int32 a1, ::RPG::GameCore::MiniGameHundredFloorBlockConfig* a2, ::HIOEAKHGILF* a3, ::System::Single a4)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::System::Int32, ::RPG::GameCore::MiniGameHundredFloorBlockConfig*, ::HIOEAKHGILF*, ::System::Single))((::PBYTE)hIl2Cpp + DNFBHIPEMII_JDMNFBHKBME_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector2 NLKOHJCMKJH()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DNFBHIPEMII_NLKOHJCMKJH_OFFSET))(this);
		}

		::UnityEngine::Vector2 JFMCHCMLABG(::System::Single a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DNFBHIPEMII_JFMCHCMLABG_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 IOEKHDKEKLC(::AFLELOJKGHN a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::AFLELOJKGHN))((::PBYTE)hIl2Cpp + DNFBHIPEMII_IOEKHDKEKLC_OFFSET))(this, a1);
		}

		::System::Single ABJJBLHEPMA(::AFLELOJKGHN a1)
		{
			return ((::System::Single(*)(::PVOID, ::AFLELOJKGHN))((::PBYTE)hIl2Cpp + DNFBHIPEMII_ABJJBLHEPMA_OFFSET))(this, a1);
		}

	};
